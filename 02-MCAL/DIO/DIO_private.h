/**
 *  ====================== DIO_private.h ======================
 * 
 *      Author: Karim Walid
 *      Layer : MCAL
 *      SWC   : DIO / GPIO
 */

#ifndef _DIO_PRIVATE_H_
#define _DIO_PRIVATE_H_

// GROUP B
#define PORTB   *((volatile u8*)0x25)
#define DDRB    *((volatile u8*)0x24)
#define PINB    *((volatile u8*)0x23)

// GROUP C
#define PORTC   *((volatile u8*)0x28)
#define DDRC    *((volatile u8*)0x27)
#define PINC    *((volatile u8*)0x26)

// GROUP D
#define PORTD   *((volatile u8*)0x2B)
#define DDRD    *((volatile u8*)0x2A)
#define PIND    *((volatile u8*)0x29)

#endif