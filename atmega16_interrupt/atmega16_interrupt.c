/*
 * atmega16_interrupt.c
 *
 * Created: 2017/4/4 14:27:49
 *  Author: Administrator
 */ 
#include "atmega16_interrupt.h"

void IT_Config(ITConfig_Type itconfig,Status_Type status)
{
	if (itconfig==IT_TIMER0_COMP)
	{
		if (status==ENABLE)
		{
			TIMSK|=(1<<OCIE0);
		}
		if (status==DISABLE)
		{
			TIMSK&=~(1<<OCIE0);
		}
	}
	else if (itconfig==IT_TIMER0_OVF)
	{
		if (status==ENABLE)
		{
			TIMSK|=(1<<TOIE0);
		}
		if (status==DISABLE)
		{
			TIMSK&=~(1<<TOIE0);
		}
	}
	else if (itconfig==IT_USARTRXC)
	{
		if (status==ENABLE)
		{
			UCSRB|=(1<<RXCIE);
		}
		if (status==DISABLE)
		{
			UCSRB&=~(1<<RXCIE);
		}
	}
	else if (itconfig==IT_USARTTXC)
	{
		if (status==ENABLE)
		{
			UCSRB|=(1<<TXCIE);
		}
		if (status==DISABLE)
		{
			UCSRB&=~(1<<TXCIE);
		}
	}
	else if (itconfig==IT_USARTUDRE)
	{
		if (status==ENABLE)
		{
			UCSRB|=(1<<UDRIE);
		}
		if (status==DISABLE)
		{
			UCSRB&=~(1<<UDRIE);
		}
	}
	sei();
}