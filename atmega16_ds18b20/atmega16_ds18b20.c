#include "atmega16_ds18b20.h"
#define DQ_OUT DDRB|=(1<<PORTB0)				//设置成输出
#define DQ_IN DDRB&=~(1<<PORTB0)				//设置成输入
#define DQ_HIGH PORTB|=(1<<PORTB0)				//设置成高电平
#define DQ_LOW PORTB&=~(1<<PORTB0)				//设置成低电平
#define DQ_READ PINB&(1<<PINB0)

Pin_Type pin;

void DS18B20_Init(Pin_Type pinx)				//初始化函数
{
	pin=pinx;									//该引脚输出高电平
}

void DS18B20_Reset()							//DS18B20复位函数
{					
	DQ_OUT;
	DQ_HIGH;
	_delay_us(10);
	DQ_LOW;					
	_delay_us(500);				//输出一个低电平持续480~960us；
	DQ_HIGH;	
	DQ_IN;				//引脚输入上拉延时15~60us；
	_delay_us(50);
	while (DQ_READ);					//等待引脚被DS18B20把引脚拉低
	_delay_us(200);								//延时240us
}

void DS18B20_WriteByte(uint8_t data)			//DS18B20先送低位数据
{
	uint8_t i;									//i用来循环					
	for (i=0;i<8;i++)							//8次循环送8位数据
	{
		DQ_OUT;
		DQ_LOW;				//控制线拉低持续8us表示要发送数据
		_delay_us(8);
		if(data & 0x01)							//如果数据位最低位为一，控制线置高发送1持续55us
		{
			DQ_HIGH;
		}
		else									//否则置低发送0持续55us
		{
			DQ_LOW;
		}
		data>>=1;
		_delay_us(50);						//延时50us ds18b20取样
		DQ_HIGH;			//控制线拉高复位持续10us
		_delay_us(2);
	 	
	}
}

uint8_t DS18B20_ReadByte()
{
	uint8_t data=0,i;
	for (i=0;i<8;i++)
	{
		data>>=1;
		DQ_OUT;
		DQ_LOW;			//给一个8us低电平表示要读数据
		_delay_us(5);
		DQ_IN;
		DQ_HIGH;			//设置为输入
		_delay_us(5);
		if (DQ_READ)
		{
			data|=0x80;
		}
		_delay_us(40);
	}
	return data;
}

void DS18B20_Start()
{
	DS18B20_Reset();
	_delay_us(10);
	DS18B20_WriteByte(0xcc);
	DS18B20_WriteByte(0x44);
	_delay_ms(500);
}

uint16_t DS18B20_ReadTempData()
{
	uint8_t data_h=0,data_l=0;
	uint16_t temp_data=0;
	DS18B20_Reset();
	_delay_us(10);
	DS18B20_WriteByte(0xcc);
	DS18B20_WriteByte(0xbe);
	data_l=DS18B20_ReadByte();
	data_h=DS18B20_ReadByte();
	temp_data|=data_h;
	temp_data<<=8;
	temp_data|=data_l;
	return temp_data;
}

