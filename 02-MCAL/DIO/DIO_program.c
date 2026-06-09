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

// Sets the pin direction through the DDRx Register
void DIO_voidSetPinDirection(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Direction){
    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)){
        if (Copy_u8Direction == DIO_PIN_OUTPUT){
            switch (Copy_u8PORT){
                case DIO_PORTB: SET_BIT(DDRB, Copy_u8PIN); break;
                case DIO_PORTC: SET_BIT(DDRC, Copy_u8PIN); break;
                case DIO_PORTD: SET_BIT(DDRD, Copy_u8PIN); break;
            }
        } else if (Copy_u8Direction == DIO_PIN_INPUT){
            switch (Copy_u8PORT){
                case DIO_PORTB: CLEAR_BIT(DDRB, Copy_u8PIN); break;
                case DIO_PORTC: CLEAR_BIT(DDRC, Copy_u8PIN); break;
                case DIO_PORTD: CLEAR_BIT(DDRD, Copy_u8PIN); break;
            }
        }
    }
}

// Sets the value of the pin output through the PORTx register
void DIO_voidSetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN, u8 Copy_u8Value){
    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)){
        if(Copy_u8Value == DIO_PIN_HIGH){
            switch (Copy_u8PORT){
                case DIO_PORTB: SET_BIT(PORTB, Copy_u8PORT); break;
                case DIO_PORTC: SET_BIT(PORTC, Copy_u8PORT); break;
                case DIO_PORTD: SET_BIT(PORTD, Copy_u8PORT); break;
            }
        } else if(Copy_u8Value == DIO_PIN_LOW){
            switch (Copy_u8PORT){
                case DIO_PORTB: CLEAR_BIT(PORTB, Copy_u8PORT); break;
                case DIO_PORTC: CLEAR_BIT(PORTC, Copy_u8PORT); break;
                case DIO_PORTD: CLEAR_BIT(PORTD, Copy_u8PORT); break;
            }
        }
    }
}

// Gets the the value of the pin through the PINx register
u8 DIO_voidGetPinValue(u8 Copy_u8PORT, u8 Copy_u8PIN){
    u8 PinValue = 0;
    switch (Copy_u8PORT){
            case DIO_PORTB: PinValue = GET_BIT(PINB, Copy_u8PIN); break;
            case DIO_PORTC: PinValue = GET_BIT(PINC, Copy_u8PIN); break;
            case DIO_PORTD: PinValue = GET_BIT(PIND, Copy_u8PIN); break;
    }
    return PinValue;
}

// Toggle the value of a specific bit in the PINx register
void DIO_voidTogglePinValue(u8 Copy_u8PORT, u8 Copy_u8PIN){
    if ((Copy_u8PORT <= DIO_PORTD) && (Copy_u8PIN <= DIO_PIN7)){
            switch (Copy_u8PORT){
                case DIO_PORTB: TOGGLE_BIT(PINB, Copy_u8PIN); break;
                case DIO_PORTC: TOGGLE_BIT(PINC, Copy_u8PIN); break;
                case DIO_PORTD: TOGGLE_BIT(PIND, Copy_u8PIN); break;
            }
    }
}

// Set the direction of the whole Port
void DIO_voidSetPortDirection(u8 Copy_u8PORT, u8 Copy_u8Direction){
    if (Copy_u8PORT <= DIO_PORTD){
        switch (Copy_u8PORT){
            case DIO_PORTB: DDRB = Copy_u8Direction; break;
            case DIO_PORTC: DDRC = Copy_u8Direction; break;
            case DIO_PORTD: DDRD = Copy_u8Direction; break;
        }
    }
}

// Set the value of the whole Port
void DIO_voidSetPortValue(u8 Copy_u8PORT, u8 Copy_u8Value){
    if (Copy_u8PORT <= DIO_PORTD && ((Copy_u8Value == DIO_PORT_HIGH) || (Copy_u8Value == DIO_PORT_LOW))){
        switch (Copy_u8PORT){
            case DIO_PORTB: PORTB = Copy_u8Value; break;
            case DIO_PORTC: PORTC = Copy_u8Value; break;
            case DIO_PORTD: PORTD = Copy_u8Value; break;
        }
    }
}

// Toggle the value of the whole Port
void DIO_voidTogglePortValue(u8 Copy_u8PORT){
    if (Copy_u8PORT <= DIO_PORTD){
        switch (Copy_u8PORT){
            case DIO_PORTB: PORTB = ~PORTB; break;
            case DIO_PORTC: PORTC = ~PORTC; break;
            case DIO_PORTD: PORTD = ~PORTD; break;
        }
    }
}

// Get the value of the whole Port
u8 DIO_u8GetPortValue(u8 Copy_u8PORT){
    u8 PortValue = 0;
    if (Copy_u8PORT <= DIO_PORTD){
        switch (Copy_u8PORT){
            case DIO_PORTB: PortValue = PINB; break;
            case DIO_PORTC: PortValue = PINC; break;
            case DIO_PORTD: PortValue = PIND; break;
            default: PortValue = 0;
        }
    }
    return PortValue;
}

// Connect the Pull resistor
void DIO_voidConnectPullUp(u8 Copy_u8PORT, u8 Copy_u8PIN){
    if (Copy_u8PORT <= DIO_PORTD && Copy_u8PIN <= DIO_PIN7){
        switch (Copy_u8PORT){
            case DIO_PORTB: CLR_BIT(DDRB, Copy_u8PIN); SET_BIT(PORTB, Copy_u8PIN); break;
            case DIO_PORTC: CLR_BIT(DDRC, Copy_u8PIN); SET_BIT(PORTC, Copy_u8PIN); break;
            case DIO_PORTD: CLR_BIT(DDRD, Copy_u8PIN); SET_BIT(PORTD, Copy_u8PIN); break;
        }
    }
}