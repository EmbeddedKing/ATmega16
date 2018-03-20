#include "atmega16_dht11.h"

void DHT11_Start()
{
	DHT11_OUT;					//DHT11数据线设置输出
	DHT11_LOW;					//DHT11数据线设置低电平持续20ms
	_delay_ms(20);
	DHT11_HIGH;					//DHT11数据线设置高电平
	DHT11_IN;					//DHT11数据线设置输入
	while (DHT11_READ);			//等待DHT11将数据线拉低
	while ((DHT11_READ)==1);	//等待DHT11将数据线拉高，准备输出
}

uint8_t DHT11_ReadByte()
{
	uint8_t data=0,i;				//data用来存放数据，i用来循环
	for (i=0;i<8;i++)				
	{
		while (DHT11_READ);			//等待DHT11数据线将数据线拉低开始发送一位数据
		while ((DHT11_READ)==1);	//等待DHT11将数据线拉高
		_delay_us(30);				//等待35us判断DHT11发送的是'0'还是'1'，如果为'0'高电平持续26~28us，'1'持续70us
		if ((DHT11_READ)==1)
		{
			data|=0x01;
		}
		data<<=1;
	}
	return data;
}