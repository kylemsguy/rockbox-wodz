/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2011 by Amaury Pouly
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
#ifndef __POWER_IMX233__
#define __POWER_IMX233__

#include "system.h"
#include "system-target.h"
#include "cpu.h"

#include "regs/regs-power.h"

#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__10mA    (1 << 0)
#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__20mA    (1 << 1)
#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__50mA    (1 << 2)
#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__100mA   (1 << 3)
#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__200mA   (1 << 4)
#define BV_POWER_5VCTRL_CHARGE_4P2_ILIMIT__400mA   (1 << 5)


#define BV_POWER_CHARGE_BATTCHRG_I__10mA   (1 << 0)
#define BV_POWER_CHARGE_BATTCHRG_I__20mA   (1 << 1)
#define BV_POWER_CHARGE_BATTCHRG_I__50mA   (1 << 2)
#define BV_POWER_CHARGE_BATTCHRG_I__100mA  (1 << 3)
#define BV_POWER_CHARGE_BATTCHRG_I__200mA  (1 << 4)
#define BV_POWER_CHARGE_BATTCHRG_I__400mA  (1 << 5)

#define BV_POWER_CHARGE_STOP_ILIMIT__10mA  (1 << 0)
#define BV_POWER_CHARGE_STOP_ILIMIT__20mA  (1 << 1)
#define BV_POWER_CHARGE_STOP_ILIMIT__50mA  (1 << 2)
#define BV_POWER_CHARGE_STOP_ILIMIT__100mA (1 << 3)

#if IMX233_SUBTARGET >= 3700
#define HW_POWER_VDDDCTRL__TRG_STEP 25 /* mV */
#define HW_POWER_VDDDCTRL__TRG_MIN  800 /* mV */

#define HW_POWER_VDDACTRL__TRG_STEP 25 /* mV */
#define HW_POWER_VDDACTRL__TRG_MIN  1500 /* mV */

#define HW_POWER_VDDIOCTRL__TRG_STEP    25 /* mV */
#define HW_POWER_VDDIOCTRL__TRG_MIN 2800 /* mV */

#define HW_POWER_VDDMEMCTRL__TRG_STEP    50 /* mV */
#define HW_POWER_VDDMEMCTRL__TRG_MIN 1700 /* mV */
#else
/* don't use the full available range because of the weird encodings for
 * extreme values which are useless anyway */
#define HW_POWER_VDDDCTRL__TRG_STEP 32 /* mV */
#define HW_POWER_VDDDCTRL__TRG_MIN  1280 /* mV */
#define HW_POWER_VDDDCTRL__TRG_OFF  8 /* below 8, the register value doesn't encode linearly */
#endif

#define BV_POWER_MISC_FREQSEL__RES         0
#define BV_POWER_MISC_FREQSEL__20MHz       1
#define BV_POWER_MISC_FREQSEL__24MHz       2
#define BV_POWER_MISC_FREQSEL__19p2MHz     3
#define BV_POWER_MISC_FREQSEL__14p4MHz     4
#define BV_POWER_MISC_FREQSEL__18MHz       5
#define BV_POWER_MISC_FREQSEL__21p6MHz     6
#define BV_POWER_MISC_FREQSEL__17p28MHz    7


void imx233_power_init(void);

void imx233_power_set_charge_current(unsigned current); /* in mA */
void imx233_power_set_stop_current(unsigned current); /* in mA */
void imx233_power_enable_batadj(bool enable);
bool imx233_power_usb_detect(void);

enum imx233_regulator_t
{
    REGULATOR_VDDD, /* target, brownout, linreg[3700+], linreg offset[3700+] */
#if IMX233_SUBTARGET >= 3700
    REGULATOR_VDDA, /* target, brownout, linreg, linreg offset */
    REGULATOR_VDDIO, /* target, brownout, linreg offset */
    REGULATOR_VDDMEM, /* target, linreg */
#endif
    REGULATOR_COUNT,
};

void imx233_power_get_regulator(enum imx233_regulator_t reg, unsigned *target_mv,
    unsigned *brownout_mv);

// WARNING this call will block until voltage is stable
void imx233_power_set_regulator(enum imx233_regulator_t reg, unsigned target_mv,
    unsigned brownout_mv);

// offset is -1,0 or 1
void imx233_power_get_regulator_linreg(enum imx233_regulator_t reg,
    bool *enabled, int *linreg_offset);

// offset is -1,0 or 1
void imx233_power_set_regulator_linreg(enum imx233_regulator_t reg,
    bool enabled, int linreg_offset);

#if IMX233_SUBTARGET >= 3700
static inline void imx233_power_set_dcdc_freq(bool pll, unsigned freq)
{
    if(pll)
        BF_WR(POWER_MISC, FREQSEL, freq);
    BF_WR(POWER_MISC, SEL_PLLCLK, pll);
}
#endif

#if IMX233_SUBTARGET < 3700
/* return -1 on error */
int imx233_power_sense_die_temperature(int *min, int *max);
#endif

struct imx233_power_info_t
{
    bool dcdc_sel_pllclk; /* clock source of DC-DC: pll or 24MHz xtal */
    int dcdc_freqsel;
    int charge_current;
    int stop_current;
    bool charging;
    bool batt_adj;
    bool _4p2_enable;
    bool _4p2_dcdc;
    int _4p2_cmptrip;
    int _4p2_dropout;
    bool _5v_pwd_charge_4p2;
    int _5v_charge_4p2_limit;
    bool _5v_dcdc_xfer;
    bool _5v_enable_dcdc;
    int _5v_vbusvalid_thr;
    bool _5v_vbusvalid_detect;
    bool _5v_vbus_cmps;
};

#define POWER_INFO_DCDC     (1 << 4)
#define POWER_INFO_CHARGE   (1 << 5)
#define POWER_INFO_4P2      (1 << 6)
#define POWER_INFO_5V       (1 << 7)
#define POWER_INFO_ALL      0xff

struct imx233_power_info_t imx233_power_get_info(unsigned flags);

#endif /* __POWER_IMX233__ */
