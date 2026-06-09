/**
 *  ====================== LED_interface.h ======================
 * 
 *      Author: Karim Walid
 *      Layer : HAL
 *      SWC   : LED
*/
#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H

typedef unsigned char u8;

#define ACTIVE_HIGH    (u8)(0x01)
#define ACTIVE_LOW     (u8)(0x00)

typedef struct {
    u8 Port;
    u8 Pin;
    u8 activeState; 
} LED;

void LED_voidInit   (LED* Copy_pstructLed);
void LED_voidOn     (LED* Copy_pstructLed);
void LED_voidOff    (LED* Copy_pstructLed);
void LED_voidToggle (LED* Copy_pstructLed);

#endif