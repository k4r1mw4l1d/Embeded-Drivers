/**
 *  ====================== LIB_STD_TYPES.h ======================
 * 
*	By    : Karim Walid
*	Layer :	MCAL
*	DATE  : 5/13/2026
*/

#ifndef _LIB_STD_TYPES_LIB
#define _LIB_STD_TYPES_LIB

typedef unsigned char           u8;
typedef unsigned short int      u16;
typedef unsigned long int       u32;
typedef unsigned long long int  u64;

typedef signed char             s8;
typedef signed short int        s16;
typedef signed int              s32;
typedef signed long long        s64;

#define OK (u8)0
#define NOK (u8)1
#define NULL ((void*)0)

#endif