/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * atj213x version: 1.1
 * atj213x authors: Marcin Bukat
 *
 * Copyright (C) 2015 by the authors
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
#ifndef __HEADERGEN_REGS_ADC_H__
#define __HEADERGEN_REGS_ADC_H__

#define ADC_CTL         (*(volatile uint32_t *)ADC_CTL_ADDR)
#define ADC_CTL_ADDR    (0xb0110000 + 0x0)

#define ADC_FIFOCTL         (*(volatile uint32_t *)ADC_FIFOCTL_ADDR)
#define ADC_FIFOCTL_ADDR    (0xb0110000 + 0x4)

#define ADC_DAT         (*(volatile uint32_t *)ADC_DAT_ADDR)
#define ADC_DAT_ADDR    (0xb0110000 + 0x8)

#define ADC_ANALOG      (*(volatile uint32_t *)ADC_ANALOG_ADDR)
#define ADC_ANALOG_ADDR (0xb0110000 + 0xc)

#define ADC_DEBUG       (*(volatile uint32_t *)ADC_DEBUG_ADDR)
#define ADC_DEBUG_ADDR  (0xb0110000 + 0x10)

#endif /* __HEADERGEN_REGS_ADC_H__*/