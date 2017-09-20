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
#ifndef __HEADERGEN_REGS_DAC_H__
#define __HEADERGEN_REGS_DAC_H__

#define DAC_CTL                         (*(volatile uint32_t *)DAC_CTL_ADDR)
#define DAC_CTL_ADDR                    (0xb0100000 + 0x0)
#define BP_DAC_CTL_RESERVED31_20        20
#define BM_DAC_CTL_RESERVED31_20        0xfff00000
#define BF_DAC_CTL_RESERVED31_20(v)     (((v) & 0xfff) << 20)
#define BFM_DAC_CTL_RESERVED31_20(v)    BM_DAC_CTL_RESERVED31_20
#define BF_DAC_CTL_RESERVED31_20_V(e)   BF_DAC_CTL_RESERVED31_20(BV_DAC_CTL_RESERVED31_20__##e)
#define BFM_DAC_CTL_RESERVED31_20_V(v)  BM_DAC_CTL_RESERVED31_20
#define BP_DAC_CTL_DIAM                 18
#define BM_DAC_CTL_DIAM                 0xc0000
#define BF_DAC_CTL_DIAM(v)              (((v) & 0x3) << 18)
#define BFM_DAC_CTL_DIAM(v)             BM_DAC_CTL_DIAM
#define BF_DAC_CTL_DIAM_V(e)            BF_DAC_CTL_DIAM(BV_DAC_CTL_DIAM__##e)
#define BFM_DAC_CTL_DIAM_V(v)           BM_DAC_CTL_DIAM
#define BP_DAC_CTL_DDEN                 17
#define BM_DAC_CTL_DDEN                 0x20000
#define BF_DAC_CTL_DDEN(v)              (((v) & 0x1) << 17)
#define BFM_DAC_CTL_DDEN(v)             BM_DAC_CTL_DDEN
#define BF_DAC_CTL_DDEN_V(e)            BF_DAC_CTL_DDEN(BV_DAC_CTL_DDEN__##e)
#define BFM_DAC_CTL_DDEN_V(v)           BM_DAC_CTL_DDEN
#define BP_DAC_CTL_DIEN                 16
#define BM_DAC_CTL_DIEN                 0x10000
#define BF_DAC_CTL_DIEN(v)              (((v) & 0x1) << 16)
#define BFM_DAC_CTL_DIEN(v)             BM_DAC_CTL_DIEN
#define BF_DAC_CTL_DIEN_V(e)            BF_DAC_CTL_DIEN(BV_DAC_CTL_DIEN__##e)
#define BFM_DAC_CTL_DIEN_V(v)           BM_DAC_CTL_DIEN
#define BP_DAC_CTL_QUL                  12
#define BM_DAC_CTL_QUL                  0xf000
#define BF_DAC_CTL_QUL(v)               (((v) & 0xf) << 12)
#define BFM_DAC_CTL_QUL(v)              BM_DAC_CTL_QUL
#define BF_DAC_CTL_QUL_V(e)             BF_DAC_CTL_QUL(BV_DAC_CTL_QUL__##e)
#define BFM_DAC_CTL_QUL_V(v)            BM_DAC_CTL_QUL
#define BP_DAC_CTL_QUBS                 11
#define BM_DAC_CTL_QUBS                 0x800
#define BF_DAC_CTL_QUBS(v)              (((v) & 0x1) << 11)
#define BFM_DAC_CTL_QUBS(v)             BM_DAC_CTL_QUBS
#define BF_DAC_CTL_QUBS_V(e)            BF_DAC_CTL_QUBS(BV_DAC_CTL_QUBS__##e)
#define BFM_DAC_CTL_QUBS_V(v)           BM_DAC_CTL_QUBS
#define BP_DAC_CTL_MOEN                 10
#define BM_DAC_CTL_MOEN                 0x400
#define BF_DAC_CTL_MOEN(v)              (((v) & 0x1) << 10)
#define BFM_DAC_CTL_MOEN(v)             BM_DAC_CTL_MOEN
#define BF_DAC_CTL_MOEN_V(e)            BF_DAC_CTL_MOEN(BV_DAC_CTL_MOEN__##e)
#define BFM_DAC_CTL_MOEN_V(v)           BM_DAC_CTL_MOEN
#define BP_DAC_CTL_RESERVED9_3          3
#define BM_DAC_CTL_RESERVED9_3          0x3f8
#define BF_DAC_CTL_RESERVED9_3(v)       (((v) & 0x7f) << 3)
#define BFM_DAC_CTL_RESERVED9_3(v)      BM_DAC_CTL_RESERVED9_3
#define BF_DAC_CTL_RESERVED9_3_V(e)     BF_DAC_CTL_RESERVED9_3(BV_DAC_CTL_RESERVED9_3__##e)
#define BFM_DAC_CTL_RESERVED9_3_V(v)    BM_DAC_CTL_RESERVED9_3
#define BP_DAC_CTL_SRS                  2
#define BM_DAC_CTL_SRS                  0x4
#define BF_DAC_CTL_SRS(v)               (((v) & 0x1) << 2)
#define BFM_DAC_CTL_SRS(v)              BM_DAC_CTL_SRS
#define BF_DAC_CTL_SRS_V(e)             BF_DAC_CTL_SRS(BV_DAC_CTL_SRS__##e)
#define BFM_DAC_CTL_SRS_V(v)            BM_DAC_CTL_SRS
#define BP_DAC_CTL_OUTS                 1
#define BM_DAC_CTL_OUTS                 0x2
#define BF_DAC_CTL_OUTS(v)              (((v) & 0x1) << 1)
#define BFM_DAC_CTL_OUTS(v)             BM_DAC_CTL_OUTS
#define BF_DAC_CTL_OUTS_V(e)            BF_DAC_CTL_OUTS(BV_DAC_CTL_OUTS__##e)
#define BFM_DAC_CTL_OUTS_V(v)           BM_DAC_CTL_OUTS
#define BP_DAC_CTL_EN                   0
#define BM_DAC_CTL_EN                   0x1
#define BF_DAC_CTL_EN(v)                (((v) & 0x1) << 0)
#define BFM_DAC_CTL_EN(v)               BM_DAC_CTL_EN
#define BF_DAC_CTL_EN_V(e)              BF_DAC_CTL_EN(BV_DAC_CTL_EN__##e)
#define BFM_DAC_CTL_EN_V(v)             BM_DAC_CTL_EN

#define DAC_FIFOCTL                         (*(volatile uint32_t *)DAC_FIFOCTL_ADDR)
#define DAC_FIFOCTL_ADDR                    (0xb0100000 + 0x4)
#define BP_DAC_FIFOCTL_RESERVED31_14        14
#define BM_DAC_FIFOCTL_RESERVED31_14        0xffffc000
#define BF_DAC_FIFOCTL_RESERVED31_14(v)     (((v) & 0x3ffff) << 14)
#define BFM_DAC_FIFOCTL_RESERVED31_14(v)    BM_DAC_FIFOCTL_RESERVED31_14
#define BF_DAC_FIFOCTL_RESERVED31_14_V(e)   BF_DAC_FIFOCTL_RESERVED31_14(BV_DAC_FIFOCTL_RESERVED31_14__##e)
#define BFM_DAC_FIFOCTL_RESERVED31_14_V(v)  BM_DAC_FIFOCTL_RESERVED31_14
#define BP_DAC_FIFOCTL_LRCS                 13
#define BM_DAC_FIFOCTL_LRCS                 0x2000
#define BF_DAC_FIFOCTL_LRCS(v)              (((v) & 0x1) << 13)
#define BFM_DAC_FIFOCTL_LRCS(v)             BM_DAC_FIFOCTL_LRCS
#define BF_DAC_FIFOCTL_LRCS_V(e)            BF_DAC_FIFOCTL_LRCS(BV_DAC_FIFOCTL_LRCS__##e)
#define BFM_DAC_FIFOCTL_LRCS_V(v)           BM_DAC_FIFOCTL_LRCS
#define BP_DAC_FIFOCTL_DDRF                 12
#define BM_DAC_FIFOCTL_DDRF                 0x1000
#define BF_DAC_FIFOCTL_DDRF(v)              (((v) & 0x1) << 12)
#define BFM_DAC_FIFOCTL_DDRF(v)             BM_DAC_FIFOCTL_DDRF
#define BF_DAC_FIFOCTL_DDRF_V(e)            BF_DAC_FIFOCTL_DDRF(BV_DAC_FIFOCTL_DDRF__##e)
#define BFM_DAC_FIFOCTL_DDRF_V(v)           BM_DAC_FIFOCTL_DDRF
#define BP_DAC_FIFOCTL_FUF                  11
#define BM_DAC_FIFOCTL_FUF                  0x800
#define BF_DAC_FIFOCTL_FUF(v)               (((v) & 0x1) << 11)
#define BFM_DAC_FIFOCTL_FUF(v)              BM_DAC_FIFOCTL_FUF
#define BF_DAC_FIFOCTL_FUF_V(e)             BF_DAC_FIFOCTL_FUF(BV_DAC_FIFOCTL_FUF__##e)
#define BFM_DAC_FIFOCTL_FUF_V(v)            BM_DAC_FIFOCTL_FUF
#define BP_DAC_FIFOCTL_FEIP                 10
#define BM_DAC_FIFOCTL_FEIP                 0x400
#define BF_DAC_FIFOCTL_FEIP(v)              (((v) & 0x1) << 10)
#define BFM_DAC_FIFOCTL_FEIP(v)             BM_DAC_FIFOCTL_FEIP
#define BF_DAC_FIFOCTL_FEIP_V(e)            BF_DAC_FIFOCTL_FEIP(BV_DAC_FIFOCTL_FEIP__##e)
#define BFM_DAC_FIFOCTL_FEIP_V(v)           BM_DAC_FIFOCTL_FEIP
#define BP_DAC_FIFOCTL_FEIE                 9
#define BM_DAC_FIFOCTL_FEIE                 0x200
#define BF_DAC_FIFOCTL_FEIE(v)              (((v) & 0x1) << 9)
#define BFM_DAC_FIFOCTL_FEIE(v)             BM_DAC_FIFOCTL_FEIE
#define BF_DAC_FIFOCTL_FEIE_V(e)            BF_DAC_FIFOCTL_FEIE(BV_DAC_FIFOCTL_FEIE__##e)
#define BFM_DAC_FIFOCTL_FEIE_V(v)           BM_DAC_FIFOCTL_FEIE
#define BP_DAC_FIFOCTL_FEDE                 8
#define BM_DAC_FIFOCTL_FEDE                 0x100
#define BF_DAC_FIFOCTL_FEDE(v)              (((v) & 0x1) << 8)
#define BFM_DAC_FIFOCTL_FEDE(v)             BM_DAC_FIFOCTL_FEDE
#define BF_DAC_FIFOCTL_FEDE_V(e)            BF_DAC_FIFOCTL_FEDE(BV_DAC_FIFOCTL_FEDE__##e)
#define BFM_DAC_FIFOCTL_FEDE_V(v)           BM_DAC_FIFOCTL_FEDE
#define BP_DAC_FIFOCTL_RESERVED7            7
#define BM_DAC_FIFOCTL_RESERVED7            0x80
#define BF_DAC_FIFOCTL_RESERVED7(v)         (((v) & 0x1) << 7)
#define BFM_DAC_FIFOCTL_RESERVED7(v)        BM_DAC_FIFOCTL_RESERVED7
#define BF_DAC_FIFOCTL_RESERVED7_V(e)       BF_DAC_FIFOCTL_RESERVED7(BV_DAC_FIFOCTL_RESERVED7__##e)
#define BFM_DAC_FIFOCTL_RESERVED7_V(v)      BM_DAC_FIFOCTL_RESERVED7
#define BP_DAC_FIFOCTL_EMCO                 5
#define BM_DAC_FIFOCTL_EMCO                 0x60
#define BF_DAC_FIFOCTL_EMCO(v)              (((v) & 0x3) << 5)
#define BFM_DAC_FIFOCTL_EMCO(v)             BM_DAC_FIFOCTL_EMCO
#define BF_DAC_FIFOCTL_EMCO_V(e)            BF_DAC_FIFOCTL_EMCO(BV_DAC_FIFOCTL_EMCO__##e)
#define BFM_DAC_FIFOCTL_EMCO_V(v)           BM_DAC_FIFOCTL_EMCO
#define BP_DAC_FIFOCTL_DSPE                 4
#define BM_DAC_FIFOCTL_DSPE                 0x10
#define BF_DAC_FIFOCTL_DSPE(v)              (((v) & 0x1) << 4)
#define BFM_DAC_FIFOCTL_DSPE(v)             BM_DAC_FIFOCTL_DSPE
#define BF_DAC_FIFOCTL_DSPE_V(e)            BF_DAC_FIFOCTL_DSPE(BV_DAC_FIFOCTL_DSPE__##e)
#define BFM_DAC_FIFOCTL_DSPE_V(v)           BM_DAC_FIFOCTL_DSPE
#define BP_DAC_FIFOCTL_RESERVED3            3
#define BM_DAC_FIFOCTL_RESERVED3            0x8
#define BF_DAC_FIFOCTL_RESERVED3(v)         (((v) & 0x1) << 3)
#define BFM_DAC_FIFOCTL_RESERVED3(v)        BM_DAC_FIFOCTL_RESERVED3
#define BF_DAC_FIFOCTL_RESERVED3_V(e)       BF_DAC_FIFOCTL_RESERVED3(BV_DAC_FIFOCTL_RESERVED3__##e)
#define BFM_DAC_FIFOCTL_RESERVED3_V(v)      BM_DAC_FIFOCTL_RESERVED3
#define BP_DAC_FIFOCTL_FINS                 1
#define BM_DAC_FIFOCTL_FINS                 0x6
#define BF_DAC_FIFOCTL_FINS(v)              (((v) & 0x3) << 1)
#define BFM_DAC_FIFOCTL_FINS(v)             BM_DAC_FIFOCTL_FINS
#define BF_DAC_FIFOCTL_FINS_V(e)            BF_DAC_FIFOCTL_FINS(BV_DAC_FIFOCTL_FINS__##e)
#define BFM_DAC_FIFOCTL_FINS_V(v)           BM_DAC_FIFOCTL_FINS
#define BP_DAC_FIFOCTL_FIRT                 0
#define BM_DAC_FIFOCTL_FIRT                 0x1
#define BF_DAC_FIFOCTL_FIRT(v)              (((v) & 0x1) << 0)
#define BFM_DAC_FIFOCTL_FIRT(v)             BM_DAC_FIFOCTL_FIRT
#define BF_DAC_FIFOCTL_FIRT_V(e)            BF_DAC_FIFOCTL_FIRT(BV_DAC_FIFOCTL_FIRT__##e)
#define BFM_DAC_FIFOCTL_FIRT_V(v)           BM_DAC_FIFOCTL_FIRT

#define DAC_DAT         (*(volatile uint32_t *)DAC_DAT_ADDR)
#define DAC_DAT_ADDR    (0xb0100000 + 0x8)

#define DAC_DEBUG       (*(volatile uint32_t *)DAC_DEBUG_ADDR)
#define DAC_DEBUG_ADDR  (0xb0100000 + 0xc)

#define DAC_ANALOG                          (*(volatile uint32_t *)DAC_ANALOG_ADDR)
#define DAC_ANALOG_ADDR                     (0xb0100000 + 0x10)
#define BP_DAC_ANALOG_RESERVED31_30         30
#define BM_DAC_ANALOG_RESERVED31_30         0xc0000000
#define BF_DAC_ANALOG_RESERVED31_30(v)      (((v) & 0x3) << 30)
#define BFM_DAC_ANALOG_RESERVED31_30(v)     BM_DAC_ANALOG_RESERVED31_30
#define BF_DAC_ANALOG_RESERVED31_30_V(e)    BF_DAC_ANALOG_RESERVED31_30(BV_DAC_ANALOG_RESERVED31_30__##e)
#define BFM_DAC_ANALOG_RESERVED31_30_V(v)   BM_DAC_ANALOG_RESERVED31_30
#define BP_DAC_ANALOG_PAAPCTL               27
#define BM_DAC_ANALOG_PAAPCTL               0x38000000
#define BF_DAC_ANALOG_PAAPCTL(v)            (((v) & 0x7) << 27)
#define BFM_DAC_ANALOG_PAAPCTL(v)           BM_DAC_ANALOG_PAAPCTL
#define BF_DAC_ANALOG_PAAPCTL_V(e)          BF_DAC_ANALOG_PAAPCTL(BV_DAC_ANALOG_PAAPCTL__##e)
#define BFM_DAC_ANALOG_PAAPCTL_V(v)         BM_DAC_ANALOG_PAAPCTL
#define BP_DAC_ANALOG_DACC                  26
#define BM_DAC_ANALOG_DACC                  0x4000000
#define BF_DAC_ANALOG_DACC(v)               (((v) & 0x1) << 26)
#define BFM_DAC_ANALOG_DACC(v)              BM_DAC_ANALOG_DACC
#define BF_DAC_ANALOG_DACC_V(e)             BF_DAC_ANALOG_DACC(BV_DAC_ANALOG_DACC__##e)
#define BFM_DAC_ANALOG_DACC_V(v)            BM_DAC_ANALOG_DACC
#define BP_DAC_ANALOG_OPGCTL                24
#define BM_DAC_ANALOG_OPGCTL                0x3000000
#define BF_DAC_ANALOG_OPGCTL(v)             (((v) & 0x3) << 24)
#define BFM_DAC_ANALOG_OPGCTL(v)            BM_DAC_ANALOG_OPGCTL
#define BF_DAC_ANALOG_OPGCTL_V(e)           BF_DAC_ANALOG_OPGCTL(BV_DAC_ANALOG_OPGCTL__##e)
#define BFM_DAC_ANALOG_OPGCTL_V(v)          BM_DAC_ANALOG_OPGCTL
#define BP_DAC_ANALOG_PACCTL                22
#define BM_DAC_ANALOG_PACCTL                0xc00000
#define BF_DAC_ANALOG_PACCTL(v)             (((v) & 0x3) << 22)
#define BFM_DAC_ANALOG_PACCTL(v)            BM_DAC_ANALOG_PACCTL
#define BF_DAC_ANALOG_PACCTL_V(e)           BF_DAC_ANALOG_PACCTL(BV_DAC_ANALOG_PACCTL__##e)
#define BFM_DAC_ANALOG_PACCTL_V(v)          BM_DAC_ANALOG_PACCTL
#define BP_DAC_ANALOG_OPFCCTL               20
#define BM_DAC_ANALOG_OPFCCTL               0x300000
#define BF_DAC_ANALOG_OPFCCTL(v)            (((v) & 0x3) << 20)
#define BFM_DAC_ANALOG_OPFCCTL(v)           BM_DAC_ANALOG_OPFCCTL
#define BF_DAC_ANALOG_OPFCCTL_V(e)          BF_DAC_ANALOG_OPFCCTL(BV_DAC_ANALOG_OPFCCTL__##e)
#define BFM_DAC_ANALOG_OPFCCTL_V(v)         BM_DAC_ANALOG_OPFCCTL
#define BP_DAC_ANALOG_OP3CCTL               18
#define BM_DAC_ANALOG_OP3CCTL               0xc0000
#define BF_DAC_ANALOG_OP3CCTL(v)            (((v) & 0x3) << 18)
#define BFM_DAC_ANALOG_OP3CCTL(v)           BM_DAC_ANALOG_OP3CCTL
#define BF_DAC_ANALOG_OP3CCTL_V(e)          BF_DAC_ANALOG_OP3CCTL(BV_DAC_ANALOG_OP3CCTL__##e)
#define BFM_DAC_ANALOG_OP3CCTL_V(v)         BM_DAC_ANALOG_OP3CCTL
#define BP_DAC_ANALOG_OP12CCTL              15
#define BM_DAC_ANALOG_OP12CCTL              0x38000
#define BF_DAC_ANALOG_OP12CCTL(v)           (((v) & 0x7) << 15)
#define BFM_DAC_ANALOG_OP12CCTL(v)          BM_DAC_ANALOG_OP12CCTL
#define BF_DAC_ANALOG_OP12CCTL_V(e)         BF_DAC_ANALOG_OP12CCTL(BV_DAC_ANALOG_OP12CCTL__##e)
#define BFM_DAC_ANALOG_OP12CCTL_V(v)        BM_DAC_ANALOG_OP12CCTL
#define BP_DAC_ANALOG_OP0CTL                13
#define BM_DAC_ANALOG_OP0CTL                0x6000
#define BF_DAC_ANALOG_OP0CTL(v)             (((v) & 0x3) << 13)
#define BFM_DAC_ANALOG_OP0CTL(v)            BM_DAC_ANALOG_OP0CTL
#define BF_DAC_ANALOG_OP0CTL_V(e)           BF_DAC_ANALOG_OP0CTL(BV_DAC_ANALOG_OP0CTL__##e)
#define BFM_DAC_ANALOG_OP0CTL_V(v)          BM_DAC_ANALOG_OP0CTL
#define BP_DAC_ANALOG_ZCDE                  12
#define BM_DAC_ANALOG_ZCDE                  0x1000
#define BF_DAC_ANALOG_ZCDE(v)               (((v) & 0x1) << 12)
#define BFM_DAC_ANALOG_ZCDE(v)              BM_DAC_ANALOG_ZCDE
#define BF_DAC_ANALOG_ZCDE_V(e)             BF_DAC_ANALOG_ZCDE(BV_DAC_ANALOG_ZCDE__##e)
#define BFM_DAC_ANALOG_ZCDE_V(v)            BM_DAC_ANALOG_ZCDE
#define BP_DAC_ANALOG_PBM                   11
#define BM_DAC_ANALOG_PBM                   0x800
#define BF_DAC_ANALOG_PBM(v)                (((v) & 0x1) << 11)
#define BFM_DAC_ANALOG_PBM(v)               BM_DAC_ANALOG_PBM
#define BF_DAC_ANALOG_PBM_V(e)              BF_DAC_ANALOG_PBM(BV_DAC_ANALOG_PBM__##e)
#define BFM_DAC_ANALOG_PBM_V(v)             BM_DAC_ANALOG_PBM
#define BP_DAC_ANALOG_FIMM                  10
#define BM_DAC_ANALOG_FIMM                  0x400
#define BF_DAC_ANALOG_FIMM(v)               (((v) & 0x1) << 10)
#define BFM_DAC_ANALOG_FIMM(v)              BM_DAC_ANALOG_FIMM
#define BF_DAC_ANALOG_FIMM_V(e)             BF_DAC_ANALOG_FIMM(BV_DAC_ANALOG_FIMM__##e)
#define BFM_DAC_ANALOG_FIMM_V(v)            BM_DAC_ANALOG_FIMM
#define BP_DAC_ANALOG_RESERVED9             9
#define BM_DAC_ANALOG_RESERVED9             0x200
#define BF_DAC_ANALOG_RESERVED9(v)          (((v) & 0x1) << 9)
#define BFM_DAC_ANALOG_RESERVED9(v)         BM_DAC_ANALOG_RESERVED9
#define BF_DAC_ANALOG_RESERVED9_V(e)        BF_DAC_ANALOG_RESERVED9(BV_DAC_ANALOG_RESERVED9__##e)
#define BFM_DAC_ANALOG_RESERVED9_V(v)       BM_DAC_ANALOG_RESERVED9
#define BP_DAC_ANALOG_MIMM                  8
#define BM_DAC_ANALOG_MIMM                  0x100
#define BF_DAC_ANALOG_MIMM(v)               (((v) & 0x1) << 8)
#define BFM_DAC_ANALOG_MIMM(v)              BM_DAC_ANALOG_MIMM
#define BF_DAC_ANALOG_MIMM_V(e)             BF_DAC_ANALOG_MIMM(BV_DAC_ANALOG_MIMM__##e)
#define BFM_DAC_ANALOG_MIMM_V(v)            BM_DAC_ANALOG_MIMM
#define BP_DAC_ANALOG_HAVC                  3
#define BM_DAC_ANALOG_HAVC                  0xf8
#define BF_DAC_ANALOG_HAVC(v)               (((v) & 0x1f) << 3)
#define BFM_DAC_ANALOG_HAVC(v)              BM_DAC_ANALOG_HAVC
#define BF_DAC_ANALOG_HAVC_V(e)             BF_DAC_ANALOG_HAVC(BV_DAC_ANALOG_HAVC__##e)
#define BFM_DAC_ANALOG_HAVC_V(v)            BM_DAC_ANALOG_HAVC
#define BP_DAC_ANALOG_PAGC                  2
#define BM_DAC_ANALOG_PAGC                  0x4
#define BF_DAC_ANALOG_PAGC(v)               (((v) & 0x1) << 2)
#define BFM_DAC_ANALOG_PAGC(v)              BM_DAC_ANALOG_PAGC
#define BF_DAC_ANALOG_PAGC_V(e)             BF_DAC_ANALOG_PAGC(BV_DAC_ANALOG_PAGC__##e)
#define BFM_DAC_ANALOG_PAGC_V(v)            BM_DAC_ANALOG_PAGC
#define BP_DAC_ANALOG_AMPE                  1
#define BM_DAC_ANALOG_AMPE                  0x2
#define BF_DAC_ANALOG_AMPE(v)               (((v) & 0x1) << 1)
#define BFM_DAC_ANALOG_AMPE(v)              BM_DAC_ANALOG_AMPE
#define BF_DAC_ANALOG_AMPE_V(e)             BF_DAC_ANALOG_AMPE(BV_DAC_ANALOG_AMPE__##e)
#define BFM_DAC_ANALOG_AMPE_V(v)            BM_DAC_ANALOG_AMPE
#define BP_DAC_ANALOG_EN                    0
#define BM_DAC_ANALOG_EN                    0x1
#define BF_DAC_ANALOG_EN(v)                 (((v) & 0x1) << 0)
#define BFM_DAC_ANALOG_EN(v)                BM_DAC_ANALOG_EN
#define BF_DAC_ANALOG_EN_V(e)               BF_DAC_ANALOG_EN(BV_DAC_ANALOG_EN__##e)
#define BFM_DAC_ANALOG_EN_V(v)              BM_DAC_ANALOG_EN

#define DAC_ANALOG2         (*(volatile uint32_t *)DAC_ANALOG2_ADDR)
#define DAC_ANALOG2_ADDR    (0xb0100000 + 0x14)

#endif /* __HEADERGEN_REGS_DAC_H__*/