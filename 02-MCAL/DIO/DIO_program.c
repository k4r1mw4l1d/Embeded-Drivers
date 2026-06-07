/**
 *  ====================== DIO_program.c ======================
 * 
 *      Author: Karim Walid
 *      Layer : MCAL
 *      SWC   : DIO / GPIO
*/

#include "../03_LIB/STD_TYPES.h"
#include "../03_LIB/BIT_MATH.h"
#include "DIO_config.h"
#include "DIO_interface.h"
#include "DIO_private.h"

void DIO_voidSetPinDirection(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction ){
    if(Copy_u8Direction == DIO_PIN_OUTPUT){
        switch (Copy_u8PIN){
            case DIO_PORTB: SET_BIT(DDRB, Copy_u8PIN); break;
            case DIO_PORTC: SET_BIT(DDRC, Copy_u8PIN); break;
            case DIO_PORTD: SET_BIT(DDRD, Copy_u8PIN); break;
        }
    } else if(Copy_u8Direction == DIO_PIN_INPUT){
        switch (Copy_u8PIN){
            case DIO_PORTB: CLEAR_BIT(DDRB, Copy_u8PIN); break;
            case DIO_PORTC: CLEAR_BIT(DDRC, Copy_u8PIN); break;
            case DIO_PORTD: CLEAR_BIT(DDRD, Copy_u8PIN); break;
        }
    }
}

void DIO_voidSetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value){
    if(Copy_u8Value == DIO_PIN_HIGH){
        switch (Copy_u8PIN){
            case DIO_PORTB: SET_BIT(PORTB, Copy_u8PIN); break;
            case DIO_PORTC: SET_BIT(PORTC, Copy_u8PIN); break;
            case DIO_PORTD: SET_BIT(PORTD, Copy_u8PIN); break;
        }
    } else if(Copy_u8Value == DIO_PIN_LOW){
        switch (Copy_u8PIN){
            case DIO_PORTB: CLEAR_BIT(PORTB, Copy_u8PIN); break;
            case DIO_PORTC: CLEAR_BIT(PORTC, Copy_u8PIN); break;
            case DIO_PORTD: CLEAR_BIT(PORTD, Copy_u8PIN); break;
        }
    }
};

u8 DIO_voidGettPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN){
    u8 Local_u8Status = 0;
    switch (Copy_u8PIN){
            case DIO_PORTB: Local_u8Status = GET_BIT(PINB, Copy_u8PIN); break;
            case DIO_PORTC: Local_u8Status = GET_BIT(PINC, Copy_u8PIN); break;
            case DIO_PORTD: Local_u8Status = GET_BIT(PIND, Copy_u8PIN); break;
    }
    return Local_u8Status;
};
