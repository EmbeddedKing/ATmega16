#ifndef __ATMEGA16_IO_H
#define __ATMEGA16_IO_H
#include "avr/io.h"

typedef enum Port
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
}Port_Type;

typedef enum Pin
{
	PORTA_Pin_0,
	PORTA_Pin_1,
	PORTA_Pin_2,
	PORTA_Pin_3,
	PORTA_Pin_4,
	PORTA_Pin_5,
	PORTA_Pin_6,
	PORTA_Pin_7,
	
	PORTB_Pin_0,
	PORTB_Pin_1,
	PORTB_Pin_2,
	PORTB_Pin_3,
	PORTB_Pin_4,
	PORTB_Pin_5,
	PORTB_Pin_6,
	PORTB_Pin_7,
	
	PORTC_Pin_0,
	PORTC_Pin_1,
	PORTC_Pin_2,
	PORTC_Pin_3,
	PORTC_Pin_4,
	PORTC_Pin_5,
	PORTC_Pin_6,
	PORTC_Pin_7,
	
	PORTD_Pin_0,
	PORTD_Pin_1,
	PORTD_Pin_2,
	PORTD_Pin_3,
	PORTD_Pin_4,
	PORTD_Pin_5,
	PORTD_Pin_6,
	PORTD_Pin_7	
}Pin_Type;

typedef enum PinCmd
{
	Input,
	Output
}PinCmd_Type;

typedef enum PinRes
{
	High,
	Low
}PinRes_Type;

void IO_PinMode(Pin_Type pin , PinCmd_Type pincmd , PinRes_Type pinres);
void IO_Init(Port_Type port);
uint8_t IO_ReadPin(Pin_Type pin);
void IO_PASet(Pin_Type pin,PinRes_Type pinres);
void IO_PBSet(Pin_Type pin,PinRes_Type pinres);
void IO_PCSet(Pin_Type pin,PinRes_Type pinres);
void IO_PDSet(Pin_Type pin,PinRes_Type pinres);

#endif