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

/** \file stdlib.h
 * \brief Standard library
 */
#ifndef __STDLIB_H
#define __STDLIB_H

#include <stddef.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STACKSIZE (16*1024)

/** Absolute value */
int abs(int i);

/** Exit abnormally (illegal) */
/* void abort(); */
#define abort() asm("illegal")

/** String to int conversion */
int atoi(const char *nptr);

/** Memory allocation. It returns the address of a buffer which is
 * phrase aligned in memory. */
void *malloc(size_t size);

/** Allocate an array of nmemb objects whose sizeof is size. The array
 * is cleared. The returned address is aligned on a phrase in
 * memory. */
void *calloc(size_t nmemb,size_t size);

/** Free a previously allocated buffer with ::malloc or ::calloc. The
 * given address must be a valid one. */
void free(void *ptr);

void *memalign(size_t boundary, size_t size);

void * realloc (void * ptr, size_t size);


/** The maximal pseudo-random number generated */
#define RAND_MAX ((1<<32)-1)

/** Returns a new pseudo-random number */
unsigned long rand();

/** Initialises the pseudo-random numbers generator with the given
 * seed */
void srand(unsigned long seed);

#ifdef __cplusplus
}
#endif

#endif
