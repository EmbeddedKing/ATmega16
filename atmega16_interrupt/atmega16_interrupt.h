/*
 * atmega16_interrupt.h
 *
 * Created: 2017/4/4 14:27:23
 *  Author: Administrator
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#ifndef ATMEGA16_INTERRUPT_H_
#define ATMEGA16_INTERRUPT_H_

typedef enum Status
{
	ENABLE,
	DISABLE
}Status_Type;

typedef enum ITConfig
{
	IT_INT0,
	IT_INT1,
	IT_TIMER2_COMP,
	IT_TIMER2_OVF,
	IT_TIMER1_CART,
	IT_TIMER1_COMPA,
	IT_TIMER1_OVF,
	IT_TIMER0_OVF,
	IT_SPISTC,
	IT_USARTRXC,
	IT_USARTUDRE,
	IT_USARTTXC,
	IT_ADC,
	IT_EE_RDY,
	IT_ANA_COMP,
	IT_TWI,
	IT_INT2,
	IT_TIMER0_COMP,
	IT_SPM_RDY,
}ITConfig_Type;

void IT_Config(ITConfig_Type itconfig,Status_Type status);



#endif /* ATMEGA16_INTERRUPT_H_ */