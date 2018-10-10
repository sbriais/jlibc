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

/** \file jagdefs.h 
 * \brief Atari Jaguar related definitions.
 */
#ifndef __JAGDEFS_H
#define __JAGDEFS_H

#define SYSTEM_FREQUENCY 26593900

#include "tom.h"
#include "gpu.h"
#include "jerry.h"
#include "stdint.h"
#include "jagtypes.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const phrase stop_object;
extern const uint16_t a_vde;
extern const uint16_t a_vdb;
extern const uint16_t a_hde;
extern const uint16_t a_hdb;
extern const uint16_t video_width;
extern const uint16_t video_height;
extern const uint16_t vblPerSec;

extern void reset();

#ifdef __cplusplus
}
#endif

#endif
