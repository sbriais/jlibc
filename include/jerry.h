/* Jaguar C library */
/* Copyright (C) 2006 Seb/The Removers */
/* http://removers.atari.org/ */

/* This library is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU Lesser General Public */
/* License as published by the Free Software Foundation; either */
/* version 2.1 of the License, or (at your option) any later version. */

/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU */
/* Lesser General Public License for more details. */

/* You should have received a copy of the GNU Lesser General Public */
/* License along with this library; if not, write to the Free Software */
/* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA */

/** \file jerry.h
 * \brief JERRY hardware registers
 */

#ifndef __JERRY_H
#define __JERRY_H

#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

struct jerry_registers {
  /* 0x00 */
  volatile uint16_t jpit1_wo[2];
  volatile uint16_t jpit2_wo[2];
  volatile uint16_t dummy1[4];
  /* 0x10 */
  volatile uint16_t clk1;
  volatile uint16_t clk2;
  volatile uint16_t clk3;
  volatile uint16_t dummy2[5];
  /* 0x20 */
  volatile uint16_t jint;
  volatile uint16_t dummy3[7];
  /* 0x30 */
  volatile uint16_t asidata;
  union {
    volatile uint16_t asictrl;
    volatile uint16_t asistat;
  };
  volatile uint16_t asiclk;
  volatile uint16_t jpit1_ro[2];
  volatile uint16_t jpit2_ro[2];
  volatile uint16_t dummy4[1+/* 0x40 */8160];
  /* 0x4000 */
  volatile uint16_t joy1;
  volatile uint16_t joy2;
  volatile uint16_t dummy5[12414];
  /* 0xa100 */
  volatile uint32_t dsp_flags;
  volatile uint32_t dsp_mtxc;
  volatile uint32_t dsp_mtxa;
  volatile uint32_t dsp_bigend;
  /* 0xa110 */
  volatile uint32_t dsp_pc;
  volatile uint32_t dsp_ctrl;
  volatile uint32_t dsp_modmask;
  union {
    volatile uint32_t dsp_remain;
    volatile uint32_t dsp_divctrl;
  };
  /* 0xa120 */
  volatile uint32_t dsp_machi;
  volatile uint32_t dummy6[7];
  /* 0xa140 */
  volatile uint32_t l_dac;
  volatile uint32_t r_dac;
  volatile uint32_t l_i2s;
  volatile uint32_t r_i2s;
  /* 0xa150 */
  volatile uint32_t sclk;
  volatile uint32_t smode;
  volatile uint32_t dummy7[938];
  /* 0xb000 */
  volatile uint32_t dsp_ram[2048];
  /* 0xd000 */
  const uint32_t rom_tri[128];
  const uint32_t rom_sine[128];
  const uint32_t rom_amsine[128];
  const uint32_t rom_sine12w[128];
  const uint32_t rom_chirp16[128];
  const uint32_t rom_ntri[128];
  const uint32_t rom_delta[128];
  const uint32_t rom_noise[128];
};

#define JERRYREGS ((struct jerry_registers *)0xf10000)

/* ASICTRL */
#define ASI_ODD (1 << 0)
#define ASI_PAREN (1 << 1)
#define ASI_TXOPOL (1 << 2)
#define ASI_RXIPOL (1 << 3)
#define ASI_TINTEN (1 << 4)
#define ASI_RINTEN (1 << 5)
#define ASI_CLRERR (1 << 6)
#define ASI_TXBRK (1 << 14)

#define ASI_ODDPARITY ASI_PAREN
#define ASI_EVENPARITY (ASI_ODD | ASI_PAREN)
#define ASI_NOPARITY 0

/* ASISTAT */
#define ASI_RBF (1 << 7)
#define ASI_TBE (1 << 8)
#define ASI_PE (1 << 9)
#define ASI_FE (1 << 10)
#define ASI_OE (1 << 11)
#define ASI_SERIN (1 << 13)
#define ASI_ERROR (1 << 15)

#ifdef __cplusplus
}
#endif

#endif
