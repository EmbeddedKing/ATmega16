#include "atmega16_dht11.h"

void DHT11_Start()
{
	DHT11_OUT;					//DHT11�������������
	DHT11_LOW;					//DHT11���������õ͵�ƽ����20ms
	_delay_ms(20);
	DHT11_HIGH;					//DHT11���������øߵ�ƽ
	DHT11_IN;					//DHT11��������������
	while (DHT11_READ);			//�ȴ�DHT11������������
	while ((DHT11_READ)==1);	//�ȴ�DHT11�����������ߣ�׼�����
}

uint8_t DHT11_ReadByte()
{
	uint8_t data=0,i;				//data����������ݣ�i����ѭ��
	for (i=0;i<8;i++)				
	{
		while (DHT11_READ);			//�ȴ�DHT11�����߽����������Ϳ�ʼ����һλ����
		while ((DHT11_READ)==1);	//�ȴ�DHT11������������
		_delay_us(30);				//�ȴ�35us�ж�DHT11���͵���'0'����'1'�����Ϊ'0'�ߵ�ƽ����26~28us��'1'����70us
		if ((DHT11_READ)==1)
		{
			data|=0x01;
		}
		data<<=1;
	}
	return data;
}