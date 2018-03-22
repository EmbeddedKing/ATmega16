/*
 * atmega16_tc0.c
 *
 * Created: 2017/4/4 11:52:32
 *  Author: Administrator
 */ 
#include "atmega16_tc0.h"

void TC0_Init(WorkMode_Type workmode,TimeSource_Type timesource,uint8_t waveformmode)
{
	TCCR0&=0x00;
	if (workmode==COMMON)
	{
		TCCR0&=0xb7;			//0b1011 0111
	}
	if (workmode==CTC)
	{
		TCCR0&=0xb7;
		TCCR0|=(1<<WGM01);
	}
	if (workmode==SPWM)
	{
		TCCR0&=0xb7;
		TCCR0|=(1<<WGM01)|(1<<WGM00);
	}
	if (workmode==PCPWM)
	{
		TCCR0&=0xb7;
		TCCR0|=(1<<WGM00);
	}
	if (waveformmode==0)
	{
		TCCR0&=0xcf;			//0b1100 1111
	}
	if (waveformmode==1)
	{
		TCCR0&=0xcf;
		TCCR0|=(1<<COM00);
		GPIO_Set(PORTB_Pin_3,Output,High);
	}
	if (waveformmode==2)
	{
		TCCR0&=0xcf;
		TCCR0|=(1<<COM01);
		GPIO_Set(PORTB_Pin_3,Output,High);
	}
	if (waveformmode==3)
	{
		TCCR0&=0xcf;
		TCCR0|=(1<<COM01)|(1<<COM00);
		GPIO_Set(PORTB_Pin_3,Output,High);
	}
	if (timesource==None)
	{
		Timesource=timesource;
		TCCR0&=0xf8;						//0b1111 1000
	}
	if (timesource==Clock_1)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS00);
	}
	if (timesource==Clock_8)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS01);
	}
	if (timesource==Clock_64)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS01)|(1<<CS00);
	}
	if (timesource==Clock_256)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS02);
	}
	if (timesource==Clock_1024)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS02)|(1<<CS00);
	}
	if (timesource==T0Pin_Up)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS02)|(1<<CS01);
	}
	if (timesource==T0Pin_Down)
	{
		Timesource=timesource;
		TCCR0&=0xf8;
		TCCR0|=(1<<CS02)|(1<<CS01)|(1<<CS00);
	}
}

void TC0_1mstrigger(uint32_t crystal)
{
	if (Timesource==Clock_1)
	{
		TCNT0=(uint8_t)(256-0.001*crystal/1);
		OCR0=0xff;
	}
	if (Timesource==Clock_8)
	{
		TCNT0=(uint8_t)(256-0.001*crystal/8);
		OCR0=0xff;
	}
	if (Timesource==Clock_64)
	{
		TCNT0=(uint8_t)(256-0.001*crystal/64);
		OCR0=0xff;
	}
	if (Timesource==Clock_256)
	{
		TCNT0=(uint8_t)(256-0.001*crystal/256);
		OCR0=0xff;
	}
	if (Timesource==Clock_1024)
	{
		TCNT0=(uint8_t)(256-0.001*crystal/1024);
		OCR0=0xff;
	}
}


