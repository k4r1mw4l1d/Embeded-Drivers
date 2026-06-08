/**
 *  ====================== DIO_interface.h ======================
 * 
 *      Author: Karim Walid
 *      Layer : MCAL
 *      SWC   : DIO / GPIO
*/

#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

// PIN Direction
#define DIO_PIN_OUTPUT 1
#define DIO_PIN_INPUT  0

// Pin Value
#define DIO_PIN_HIGH 1
#define DIO_PIN_LOW  0


// PORTS
#define DIO_PORTB 0
#define DIO_PORTC 1
#define DIO_PORTD 2

// PINS
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

// Status
#define DIO_OK  1
#define DIO_NOK 0

// Port Direction
#define DIO_PORT_OUTPUT 0xFF
#define DIO_PORT_INPUT  0

// Port Value
#define DIO_PORT_HIGH 0xFF
#define DIO_PORT_LOW  0

void    DIO_voidSetPinDirection     (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction );
void    DIO_voidSetPinValue         (u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value     );
u8      DIO_voidGettPinValue        (u8 Copy_u8PORT, u8 Copy_u8PIN                      );
void    DIO_voidTogglePinValue      (u8 Copy_u8PORT, u8 Copy_u8PIN                      );
void    DIO_voidSetPortDirection    (u8 Copy_u8PORT, u8 Copy_u8Direction                );




#endif