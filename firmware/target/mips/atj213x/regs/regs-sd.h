/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: atj213x:
 *
 * Copyright (C) 2015 by Marcin Bukat
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
#ifndef __HEADERGEN__ATJ213X__SD__H__
#define __HEADERGEN__ATJ213X__SD__H__
#include "regs-macro.h"

#define REGS_SD_BASE (0xb00b0000)

#define REGS_SD_VERSION ""

/**
 * Register: SD_CTL
 * Address: 0
 * SCT: no
 */
#define SD_CTL  (*(volatile unsigned long *)(REGS_SD_BASE + 0x0))

/**
 * Register: SD_CMDRSP
 * Address: 0x4
 * SCT: no
 */
#define SD_CMDRSP   (*(volatile unsigned long *)(REGS_SD_BASE + 0x4))

/**
 * Register: SD_RW
 * Address: 0x8
 * SCT: no
 */
#define SD_RW   (*(volatile unsigned long *)(REGS_SD_BASE + 0x8))

/**
 * Register: SD_FIFOCTL
 * Address: 0xc
 * SCT: no
 */
#define SD_FIFOCTL  (*(volatile unsigned long *)(REGS_SD_BASE + 0xc))

/**
 * Register: SD_CMD
 * Address: 0x10
 * SCT: no
 */
#define SD_CMD  (*(volatile unsigned long *)(REGS_SD_BASE + 0x10))

/**
 * Register: SD_ARG
 * Address: 0x14
 * SCT: no
 */
#define SD_ARG  (*(volatile unsigned long *)(REGS_SD_BASE + 0x14))

/**
 * Register: SD_CRC7
 * Address: 0x18
 * SCT: no
 */
#define SD_CRC7 (*(volatile unsigned long *)(REGS_SD_BASE + 0x18))

/**
 * Register: SD_RSPBUFx
 * Address: 0x1c 0x20 0x24 0x28 0x2c
 * SCT: no
 */
#define SD_RSPBUF0  (*(volatile unsigned long *)(REGS_SD_BASE + 0x1c))
#define SD_RSPBUF1  (*(volatile unsigned long *)(REGS_SD_BASE + 0x20))
#define SD_RSPBUF2  (*(volatile unsigned long *)(REGS_SD_BASE + 0x24))
#define SD_RSPBUF3  (*(volatile unsigned long *)(REGS_SD_BASE + 0x28))
#define SD_RSPBUF4  (*(volatile unsigned long *)(REGS_SD_BASE + 0x2c))

/**
 * Register: SD_DAT
 * Address: 0x30
 * SCT: no
 */
#define SD_DAT  (*(volatile unsigned long *)(REGS_SD_BASE + 0x30))

/**
 * Register: SD_CLK
 * Address: 0x34
 * SCT: no
 */
#define SD_CLK  (*(volatile unsigned long *)(REGS_SD_BASE + 0x34))

/**
 * Register: SD_BYTECNT
 * Address: 0x38
 * SCT: no
 */
#define SD_BYTECNT  (*(volatile unsigned long *)(REGS_SD_BASE + 0x38))

#endif /* __HEADERGEN__ATJ213X__SD__H__ */
