/*
 * atmega16_adc.h
 *
 * Created: 2017/4/1 12:58:24
 *  Author: Administrator
 */ 


#ifndef ATMEGA16_ADC_H_
#define ATMEGA16_ADC_H_
#include <avr/io.h>
#include "atmega16_io.h"
#include "atmega16_usart.h"

typedef enum ADCPath
{
	ADC0,
	ADC1,
	ADC2,
	ADC3,
	ADC4,
	ADC5,
	ADC6,
	ADC7
}ADC_Type;

typedef enum ADCDivisionFactor
{
	Factor_1,
	Factor_2,
	Factor_4,
	Factor_8,
	Factor_16,
	Factor_32,
	Factor_64,
	Factor_128
}ADC_DivisionFactor_Type;

typedef enum ADCReferenceSupply
{
	AREF,
	AVCC,
	INSIDE
}ADC_ReferenceSupply_Type;

void ADC_Init(ADC_Type adc,ADC_DivisionFactor_Type factor,ADC_ReferenceSupply_Type refernce);
void ADC_Start();
uint16_t ADC_GetData();
uint16_t ADC_GetVoltage(float referencevoltage);


#endif /* ATMEGA16_ADC_H_ */

