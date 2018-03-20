#include "atmega16_ds18b20.h"
#define DQ_OUT DDRB|=(1<<PORTB0)				//���ó����
#define DQ_IN DDRB&=~(1<<PORTB0)				//���ó�����
#define DQ_HIGH PORTB|=(1<<PORTB0)				//���óɸߵ�ƽ
#define DQ_LOW PORTB&=~(1<<PORTB0)				//���óɵ͵�ƽ
#define DQ_READ PINB&(1<<PINB0)

Pin_Type pin;

void DS18B20_Init(Pin_Type pinx)				//��ʼ������
{
	pin=pinx;									//����������ߵ�ƽ
}

void DS18B20_Reset()							//DS18B20��λ����
{					
	DQ_OUT;
	DQ_HIGH;
	_delay_us(10);
	DQ_LOW;					
	_delay_us(500);				//���һ���͵�ƽ����480~960us��
	DQ_HIGH;	
	DQ_IN;				//��������������ʱ15~60us��
	_delay_us(50);
	while (DQ_READ);					//�ȴ����ű�DS18B20����������
	_delay_us(200);								//��ʱ240us
}

void DS18B20_WriteByte(uint8_t data)			//DS18B20���͵�λ����
{
	uint8_t i;									//i����ѭ��					
	for (i=0;i<8;i++)							//8��ѭ����8λ����
	{
		DQ_OUT;
		DQ_LOW;				//���������ͳ���8us��ʾҪ��������
		_delay_us(8);
		if(data & 0x01)							//�������λ���λΪһ���������ø߷���1����55us
		{
			DQ_HIGH;
		}
		else									//�����õͷ���0����55us
		{
			DQ_LOW;
		}
		data>>=1;
		_delay_us(50);						//��ʱ50us ds18b20ȡ��
		DQ_HIGH;			//���������߸�λ����10us
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
		DQ_LOW;			//��һ��8us�͵�ƽ��ʾҪ������
		_delay_us(5);
		DQ_IN;
		DQ_HIGH;			//����Ϊ����
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

