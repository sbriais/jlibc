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

/** \file ctype.h
 * \brief Character filters.
 */
#ifndef __CTYPE_H
#define __CTYPE_H

#ifdef __cplusplus
extern "C" {
#endif

/** Is a letter or a digit? 

    @param c = a character

    @return TRUE if c is a letter or a digit, FALSE otherwise 

    \hideinitializer */
#define isalnum(c$) \
  ({ int _c = c$; \
     isalpha(_c) || isdigit(_c); })

/** Is a letter? 

    @param c = a character

    @return TRUE if c is a letter, FALSE otherwise 

    \hideinitializer */
#define isalpha(c$) \
  ({ int _c = c$; \
     ((islower(_c)) || (isupper(_c))); })

/** Is a control character? 

   @param c = a character

    @return TRUE if c is a control character, FALSE otherwise 

    \hideinitializer */
#define iscntrl(c$) \
  ({ int _c = c$; \
     (((_c >= 0) && (_c < 32)) || (_c == 127)); })

/** Is a digit? 

    @param c = a character

    @return TRUE if c is a digit, FALSE otherwise 

    \hideinitializer */
#define isdigit(c$) \
  ({ int _c = c$; \
     ((_c >= '0') && (_c <= '9')); })

/** Is a printable character different from a whitespace? 

    @param c = a character

    @return TRUE if c is printable character different from a whitespace, FALSE otherwise 

    \hideinitializer */
#define isgraph(c$) \
  ({ int _c = c$; \
     ((isprint(_c)) && (!isspace(_c))); })

/** Is lowercase letter? 

    @param c = a character

    @return TRUE if c is a lowercase letter, FALSE otherwise

    \hideinitializer */
#define islower(c$) \
  ({ int _c = c$; \
     ((_c >= 'a') && (_c <= 'z')); })

/** Is a printable character? 

    @param c = a character

    @return TRUE if c is printable character, FALSE otherwise 

    \hideinitializer */
#define isprint(c$) \
  ({ int _c = c$; \
    ((_c >= 32) && (_c < 256)); })

/** Is a printable character different from a whitespace and being
    neither a letter nor a digit

    @param c = a character

    @return TRUE or FALSE

    \hideinitializer */
#define ispunct(c$) \
  ({ int _c = c$; \
     ((isgraph(_c)) && (!isalnum(_c))); })

/** Is whitespace? 

    @param c = a character

    @return TRUE if c is whitespace, FALSE otherwise

    \hideinitializer */
#define isspace(c$) \
  ({ int _c = c$; \
     ((_c == '\f') || (_c == '\n') || (_c == '\r') || (_c == '\t') || (_c == '\v') || (_c == ' ')); })

/** Is uppercase letter? 

    @param c = a character

    @return TRUE if c is an uppercase letter, FALSE otherwise

    \hideinitializer */
#define isupper(c$) \
  ({ int _c = c$; \
     ((_c >= 'A') && (_c <= 'Z')); })

/** Is hexa digit?

    @param c = a character

    @return TRUE if c is a hex digit, FALSE otherwise

    \hideinitializer */
#define isxdigit(c$) \
  ({ int _c = c$; \
     (isdigit(_c) || ((_c >= 'a') && (_c <= 'f')) || ((_c >= 'A') && (_c <= 'F'))); })

/** Conversion to uppercase 

    @param c = a character

    @return corresponding uppercase letter

    \hideinitializer */
#define toupper(c$) \
  ({ int _c = c$; \
     (islower(_c))?(_c + 'A' - 'a'):_c; })

/** Conversion to lowercase 

    @param c = a character

    @return corresponding lowercase letter

    \hideinitializer */
#define tolower(c$) \
  ({ int _c = c$; \
     ((isupper(_c))?(_c + 'a' - 'A'):_c); })

#ifdef __cplusplus
}
#endif

#endif
