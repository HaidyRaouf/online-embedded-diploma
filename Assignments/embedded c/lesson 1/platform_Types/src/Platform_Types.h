/*
 * Platform_Types.h
 *
 *  Created on: Dec 6, 2023
 *      Author: Haidy
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#include <stdint.h>

#ifndef _Bool
#define _Bool unsigned char
#endif
#ifndef FALSE
#define FALSE (boolean)false
#endif
#ifndef TRUE
#define TRUE (boolean)true
#endif

typedef _Bool               boolean;
typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned            uint32;
typedef unsigned long long  uint64;
typedef signed char         sint8;
typedef  short              sint16;
typedef  int                sint32;
typedef  long long          sint64;

#endif /* PLATFORM_TYPES_H_ */




