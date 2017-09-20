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
#ifndef __HEADERGEN_REGS_ATA_H__
#define __HEADERGEN_REGS_ATA_H__

#define ATA_CONFIG      (*(volatile uint32_t *)ATA_CONFIG_ADDR)
#define ATA_CONFIG_ADDR (0xb0090000 + 0x0)

#define ATA_UDMACTL         (*(volatile uint32_t *)ATA_UDMACTL_ADDR)
#define ATA_UDMACTL_ADDR    (0xb0090000 + 0x4)

#define ATA_DATA        (*(volatile uint32_t *)ATA_DATA_ADDR)
#define ATA_DATA_ADDR   (0xb0090000 + 0x8)

#define ATA_FEATURE         (*(volatile uint32_t *)ATA_FEATURE_ADDR)
#define ATA_FEATURE_ADDR    (0xb0090000 + 0xc)

#define ATA_SECCNT      (*(volatile uint32_t *)ATA_SECCNT_ADDR)
#define ATA_SECCNT_ADDR (0xb0090000 + 0x10)

#define ATA_SECNUM      (*(volatile uint32_t *)ATA_SECNUM_ADDR)
#define ATA_SECNUM_ADDR (0xb0090000 + 0x14)

#define ATA_CLDL        (*(volatile uint32_t *)ATA_CLDL_ADDR)
#define ATA_CLDL_ADDR   (0xb0090000 + 0x18)

#define ATA_CLDHIGH         (*(volatile uint32_t *)ATA_CLDHIGH_ADDR)
#define ATA_CLDHIGH_ADDR    (0xb0090000 + 0x1c)

#define ATA_HEAD        (*(volatile uint32_t *)ATA_HEAD_ADDR)
#define ATA_HEAD_ADDR   (0xb0090000 + 0x20)

#define ATA_CMD         (*(volatile uint32_t *)ATA_CMD_ADDR)
#define ATA_CMD_ADDR    (0xb0090000 + 0x24)

#define ATA_BYTECNT         (*(volatile uint32_t *)ATA_BYTECNT_ADDR)
#define ATA_BYTECNT_ADDR    (0xb0090000 + 0x28)

#define ATA_FIFOCTL         (*(volatile uint32_t *)ATA_FIFOCTL_ADDR)
#define ATA_FIFOCTL_ADDR    (0xb0090000 + 0x2c)

#define ATA_FIFOCFG         (*(volatile uint32_t *)ATA_FIFOCFG_ADDR)
#define ATA_FIFOCFG_ADDR    (0xb0090000 + 0x30)

#define ATA_ADDRDEC         (*(volatile uint32_t *)ATA_ADDRDEC_ADDR)
#define ATA_ADDRDEC_ADDR    (0xb0090000 + 0x34)

#define ATA_IRQCTL      (*(volatile uint32_t *)ATA_IRQCTL_ADDR)
#define ATA_IRQCTL_ADDR (0xb0090000 + 0x38)

#endif /* __HEADERGEN_REGS_ATA_H__*/