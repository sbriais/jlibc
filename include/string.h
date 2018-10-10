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

/** \file string.h
 * \brief String manipulation
 */
#ifndef __STRING_H
#define __STRING_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASM */
/** Clear the first length bytes of b */
void bzero(void *b, size_t length);

/** Set the first length bytes of dst to the character c */
void *memset(const void *dst, int c, size_t length);

/* ASM */
/** Copy the first n bytes from in to out. The buffers may overlap. */
void bcopy(const void *in, void *out, size_t n);

/** Copy the first n bytes from in to out. The buffers may
 * overlap. Returns out. */
void *memcpy(void *out, const void *in, size_t n);

/** Copy the first n bytes from in to out. The buffers may
 * overlap. Returns out. */
void *memmove(void *dst, const void *src, size_t length);

/* C */
/** Search a character in a string from left to right and returns a
 * pointer to it in the string or NULL if not present. */
char *strchr(const char *string, int c);

/* C */
/** Search a character in a string from right to left and returns a
 * pointer to it in the string or NULL if not present. */
char *strrchr(const char *string, int c);

/* C */
/** Search a byte in the first length bytes of a buffer and returns a
 * pointer to it in the buffer or NULL if not present. */
void *memchr(const void *src, int c, size_t length);

/* C */
/** Compare the first n bytes of two buffers and returns the
 * lexicographic order. */
int memcmp(const void *s1, const void *s2, size_t n);

/* C */
/** Compute the length of the string (terminated by a null byte) */
size_t strlen(const char *str);

/* C */
/** Copy the src string in the dst string. Returns a pointer to the
 * end of the copy. */
char *strcpy(char *dst, const char *src);

/** Copy at most length character of src string in dst string. Returns
 * a pointer to the end of the copy. */
char *strncpy(char *dst, const char *src, size_t length);

size_t strxfrm(char *s1, const char *s2, size_t n);

/* C */
/** Alphabetical order of string a and b. */
int strcmp(const char *a, const char *b);

/** Alphabetical order of at most the length first characters of a and
    b. */
int strncmp(const char *a, const char * b, size_t length);
int strcoll(const char *stra, const char * strb);

/* C */
/** Append the src string at the end of the dst string */
char *strcat(char *dst, const char *src);

/** Append the first length characters (or less) of the src string at
    the end of the dst string. */
char *strncat(char *dst, const char *src, size_t length);

/* TODO */
char *strerror(int errnum);

char *strpbrk(const char *s1, const char *s2);

size_t strspn(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);
char *strtok(char *source, const char *delimiters);

#ifdef __cplusplus
}
#endif

#endif
