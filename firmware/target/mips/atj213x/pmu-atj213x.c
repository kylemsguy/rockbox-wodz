/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2016 by Marcin Bukat
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

#include <stdint.h> 
#include "pmu-atj213x.h"
#include "regs/regs-pmu.h"

void atj213x_charger_enable()
{
    /* Enable charger circuit */
    PMU_CHG |= BM_PMU_CHG_EN;
}

void atj213x_charger_disable()
{
    /* Disable charger hardware */
    PMU_CHG &= ~BM_PMU_CHG_EN;
}

void atj213x_charger_set_current(enum pmu_charge_current_t current)
{
    /* Set max charging current used */
    PMU_CHG = (PMU_CHG & ~BM_PMU_CHG_CURRENT) | BF_PMU_CHG_CURRENT(current);
}

unsigned int atj213x_charger_state()
{
    uint32_t stat = PMU_CHG & BF_PMU_CHG_STAT_V(CHARGING) >> BP_PMU_CHG_STAT;
    uint32_t chgphase = (PMU_CHG & BM_PMU_CHG_CHGPHASE) >> BP_PMU_CHG_CHGPHASE;
    return ((chgphase << 1) | stat);
}