/*
 * atmega16_tc0.h
 *
 * Created: 2017/4/4 11:52:06
 *  Author: Administrator
 */ 

#include "avr/io.h"
#include "atmega16_gpio.h"
#ifndef ATMEGA16_TC0_H_
#define ATMEGA16_TC0_H_

typedef enum WorkMode		//工作模式枚举类型
{
	COMMON,					//普通模式
	CTC,					//CTC模式
	SPWM,					//快速PWM模式
	PCPWM					//相位修正PWM模式
}WorkMode_Type;

typedef enum TimeSource		//时钟源枚举类型
{
	None,
	Clock_1,
	Clock_8,
	Clock_64,
	Clock_256,
	Clock_1024,
	T0Pin_Up,
	T0Pin_Down
}TimeSource_Type;

TimeSource_Type Timesource;

void TC0_Init(WorkMode_Type workmode,TimeSource_Type timesource,uint8_t waveformmode);
void TC0_1mstrigger(uint32_t crystal);


#endif /* ATMEGA16_TC0_H_ */