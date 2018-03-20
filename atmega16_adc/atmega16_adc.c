/*
 * atmega16_adc.c
 *
 * Created: 2017/4/1 12:58:53
 *  Author: Administrator
 */ 
#include "atmega16_adc.h"

/************************************************************************/
/*void ADC_Init();														*/
/*																		*/
/*�˺���������ʼ��ADC������������                                         */
/*һ.adc������ѡ��adcͨ������												*/
/*��.factor������ѡ���Ƶϵ��												*/
/*��.reference������ѡ��ο���ѹ											*/
/*																		*/
/************************************************************************/
 
void ADC_Init(ADC_Type adc,ADC_DivisionFactor_Type factor,ADC_ReferenceSupply_Type reference)
{
	ADCSRA=0x00;
	ADMUX=0x00;
	ADCSRA|=(1<<ADEN);
	if (adc==ADC0)
	{
		IO_PinMode(PORTA_Pin_0,Input,Low);
		ADMUX&=0xe0;
	}
	else if (adc==ADC1)
	{
		IO_PinMode(PORTA_Pin_1,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX0);
	}
	else if (adc==ADC2)
	{
		IO_PinMode(PORTA_Pin_2,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX1);
	}
	else if (adc==ADC3)
	{
		IO_PinMode(PORTA_Pin_3,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX1)|(1<<MUX0);
	}
	else if (adc==ADC4)
	{
		IO_PinMode(PORTA_Pin_4,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX2);
	}
	else if (adc==ADC5)
	{
		IO_PinMode(PORTA_Pin_5,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX2)|(1<<MUX0);
	}
	else if (adc==ADC6)
	{
		IO_PinMode(PORTA_Pin_6,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX2)|(1<<MUX1);
	}
	else if (adc==ADC7)
	{
		IO_PinMode(PORTA_Pin_7,Input,Low);
		ADMUX&=0xe0;
		ADMUX|=(1<<MUX2)|(1<<MUX1)|(1<<MUX0);
	}
	if (factor==Factor_1)
	{
		ADCSRA&=0xf8;
	}
	else if (factor==Factor_2)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS0);
	}
	else if (factor==Factor_4)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS1);
	}
	else if (factor==Factor_8)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS1)|(1<<ADPS0);
	}
	else if (factor==Factor_16)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS2);
	}
	else if (factor==Factor_32)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS2)|(1<<ADPS0);
	}
	else if (factor==Factor_64)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS2)|(1<<ADPS1);
	}
	else if (factor==Factor_128)
	{
		ADCSRA&=0xf8;
		ADCSRA|=(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
	}
	if (reference==AREF)
	{
		ADMUX&=0x3f;
	}
	else if (reference==AVCC)
	{
		ADMUX&=0x3f;
		ADMUX|=(1<<REFS0);
	}
	else if (reference==INSIDE)
	{
		ADMUX&=0x3f;
		ADMUX|=(1<<REFS1)|(1<<REFS0);
	}
}

/************************************************************************/
/*void ADC_Start();														*/
/*																		*/
/*�˺������������Զ�ת�����޲���											*/
/*																		*/
/************************************************************************/

void ADC_Start()
{
	ADCSRA|=(1<<ADSC);						//�����Զ�ת��
}

/************************************************************************/
/*void ADC_GetData();													*/
/*																		*/
/*�˺��������õ�ADCת���������ȡADC���ݼĴ������޲���						*/
/*�˺�����������˲��ķ���������ʮ�ν����ƽ��ֵ							*/
/*																		*/
/************************************************************************/

uint16_t ADC_GetData()
{
	uint16_t sum=0,average=0;
	uint8_t i;
	for (i=0;i<10;i++)
	{
		ADC_Start();
		while (!(ADCSRA&(1<<ADIF)));			//�ȴ�ת�����
		sum+=ADC;
	}
	average=sum/10;
	return average;
}

/************************************************************************/
/*void ADC_GetVoltage();												*/
/*																		*/
/*�˺��������õ���ѹֵ����һ������											*/
/*referencevoltage���ο���ѹֵ������5V������5								*/
/*���ز��Ե�ѹֵ��һ�ٱ����类���ѹ��1.00V������ֵΪ100					*/
/*																		*/
/************************************************************************/

uint16_t ADC_GetVoltage(float referencevoltage)
{
	uint16_t data,voltagevalue;
	data=ADC_GetData();
	voltagevalue=data*referencevoltage/1024*100;
	return voltagevalue;
}
