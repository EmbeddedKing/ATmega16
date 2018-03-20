#include "atmega16_io.h"

/************************************************************************/
/*void	IO_Init();														*/
/*																		*/
/*�˺���������ʼ��IO����һ������										    */
/*һ.port������ѡ��IO�˿�													*/
/*																		*/
/************************************************************************/

void IO_Init(Port_Type port)
{
	if (port==PORT_A)
	{
		DDRA=0xff;
		PORTA=0x00;
	}
	else if (port==PORT_B)
	{
		DDRB=0xff;
		PORTB=0x00;
	}
	else if (port==PORT_C)
	{
		DDRC=0xff;
		PORTC=0x00;
	}
	else
	{
		DDRD=0xff;
		PORTD=0x00;
	}
}

/************************************************************************/
/*void	IO_PinMode();													*/
/*																		*/
/*�˺���������������ģʽ������������									    */
/*һ.pin������ѡ������													*/
/*һ.pincmd�����������������												*/
/*һ.pinres���������øߵ͵�ƽ												*/
/*																		*/
/************************************************************************/

void IO_PinMode(Pin_Type pin , PinCmd_Type pincmd , PinRes_Type pinres)
{
	
	//PA0������
	
	if(pin==PORTA_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PA0����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA0);				//PA0����
			PORTA|=(1<<PORTA0);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA0���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA0);				//PA0����
			PORTA&=~(1<<PORTA0);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA0���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA0);				//PA0���
			PORTA|=(1<<PORTA0);				//��������ʹ��
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA0);				//PA0���
			PORTA&=~(1<<PORTA0);			//���������ֹ
		}
	}
	
	//PA1������
	
	else if(pin==PORTA_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PA1����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA1);				//PA1����
			PORTA|=(1<<PORTA1);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA1���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA1);				//PA1����
			PORTA&=~(1<<PORTA1);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA1���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA1);				//PA1���
			PORTA|=(1<<PORTA1);				//��������ʹ��
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA1);				//PA1���
			PORTA&=~(1<<PORTA1);			//���������ֹ
		}
	}
	
	//PA2������
	
	else if(pin==PORTA_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PA2����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA2);				//PA2����
			PORTA|=(1<<PORTA2);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA2���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA2);				//PA2����
			PORTA&=~(1<<PORTA2);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA2���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA2);				//PA2���
			PORTA|=(1<<PORTA2);				//��������ʹ��
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA2);				//PA2���
			PORTA&=~(1<<PORTA2);			//���������ֹ
		}
	}
	
	//PA3������
	
	else if(pin==PORTA_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PA3����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA3);				//PA3����
			PORTA|=(1<<PORTA3);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA3���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA3);				//PA3����
			PORTA&=~(1<<PORTA3);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA3���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA3);				//PA3���
			PORTA|=(1<<PORTA3);				//��������ʹ��
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA3);				//PA3���
			PORTA&=~(1<<PORTA3);			//���������ֹ
		}
	}
	
	//PA4������
	
	else if(pin==PORTA_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PA4����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA4);				//PA4����
			PORTA|=(1<<PORTA4);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA4���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA4);				//PA4����
			PORTA&=~(1<<PORTA4);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA4���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA4);				//PA4���
			PORTA|=(1<<PORTA4);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA4);				//PA4���
			PORTA&=~(1<<PORTA4);			//���������ֹ
		}
	}
	
	//PA5������
	
	else if(pin==PORTA_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PA5����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA5);				//PA5����
			PORTA|=(1<<PORTA5);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA5���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA5);				//PA5����
			PORTA&=~(1<<PORTA5);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA5���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA5);				//PA5���
			PORTA|=(1<<PORTA5);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA5);				//PA5���
			PORTA&=~(1<<PORTA5);			//���������ֹ
		}
	}
	
	//PA6������
	
	else if(pin==PORTA_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PA6����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA6);				//PA6����
			PORTA|=(1<<PORTA6);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA6���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA6);				//PA6����
			PORTA&=~(1<<PORTA6);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA6���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA6);				//PA6���
			PORTA|=(1<<PORTA6);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA6);				//PA6���
			PORTA&=~(1<<PORTA6);			//���������ֹ
		}
	}
	
	//PA7������
	
	else if(pin==PORTA_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PA7����,����Ĭ�ϸߵ�ƽ
		{
			DDRA&=~(1<<PORTA7);				//PA7����
			PORTA|=(1<<PORTA7);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA7���룬����Ĭ�ϵ͵�ƽ
		{
			DDRA&=~(1<<PORTA7);				//PA7����
			PORTA&=~(1<<PORTA7);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA7���������Ĭ�ϸߵ�ƽ
		{
			DDRA|=(1<<PORTA7);				//PA7���
			PORTA|=(1<<PORTA7);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA7);				//PA7���
			PORTA&=~(1<<PORTA7);			//���������ֹ
		}
	}
	
	//PB0������
	
	else if(pin==PORTB_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PB0����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB0);				//PB0����
			PORTB|=(1<<PORTB0);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB0���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB0);				//PB0����
			PORTB&=~(1<<PORTB0);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB0���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB0);				//PB0���
			PORTB|=(1<<PORTB0);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB0);				//PB0���
			PORTB&=~(1<<PORTB0);			//���������ֹ
		}
	}
	
	//PB1������
	
	else if(pin==PORTB_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PB1����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB1);				//PB1����
			PORTB|=(1<<PORTB1);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB1���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB1);				//PB1����
			PORTB&=~(1<<PORTB1);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB1���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB1);				//PB1���
			PORTB|=(1<<PORTB1);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB1);				//PB1���
			PORTB&=~(1<<PORTB1);			//���������ֹ
		}
	}
	
	//PB2������
	
	else if(pin==PORTB_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PB2����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB2);				//PA0����
			PORTB|=(1<<PORTB2);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB2���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB2);				//PB2����
			PORTB&=~(1<<PORTB2);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB2���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB2);				//PB2���
			PORTB|=(1<<PORTB2);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB2);				//PB2���
			PORTB&=~(1<<PORTB2);			//���������ֹ
		}
	}
	
	//PB3������
	
	else if(pin==PORTB_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PB3����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB3);				//PB3����
			PORTB|=(1<<PORTB3);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB3���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB3);				//PB3����
			PORTB&=~(1<<PORTB3);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB3���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB3);				//PB3���
			PORTB|=(1<<PORTB3);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB3);				//PB3���
			PORTB&=~(1<<PORTB3);			//���������ֹ
		}
	}
	
	//PB4������
	
	else if(pin==PORTB_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PA0����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB4);				//PA0����
			PORTB|=(1<<PORTB4);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA0���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB4);				//PA0����
			PORTB&=~(1<<PORTB4);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA0���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB4);				//PA0���
			PORTB|=(1<<PORTB4);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB4);				//PA0���
			PORTB&=~(1<<PORTB4);			//���������ֹ
		}
	}
	
	//PB5������
	
	else if(pin==PORTB_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PB5����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB5);				//PA0����
			PORTB|=(1<<PORTB5);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB5���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB5);				//PB5����
			PORTB&=~(1<<PORTB5);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB5���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB5);				//PB5���
			PORTB|=(1<<PORTB5);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB5);				//PB5���
			PORTB&=~(1<<PORTB5);			//���������ֹ
		}
	}
	
	//PB6������
	
	else if(pin==PORTB_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PB6����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB6);				//PB6����
			PORTB|=(1<<PORTB6);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB6���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB6);				//PB6����
			PORTB&=~(1<<PORTB6);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB6���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB6);				//PB6���
			PORTB|=(1<<PORTB6);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB6);				//PB6���
			PORTB&=~(1<<PORTB6);			//���������ֹ
		}
	}
	
	//PB7������
	
	else if(pin==PORTB_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PB7����,����Ĭ�ϸߵ�ƽ
		{
			DDRB&=~(1<<PORTB7);				//PB7����
			PORTB|=(1<<PORTB7);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB7���룬����Ĭ�ϵ͵�ƽ
		{
			DDRB&=~(1<<PORTB7);				//PB7����
			PORTB&=~(1<<PORTB7);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB7���������Ĭ�ϸߵ�ƽ
		{
			DDRB|=(1<<PORTB7);				//PB7���
			PORTB|=(1<<PORTB7);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB7);				//PB7���
			PORTB&=~(1<<PORTB7);			//���������ֹ
		}
	}
	
	//PC0������
	
	else if(pin==PORTC_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PC0����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC0);				//PC0����
			PORTC|=(1<<PORTC0);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC0���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC0);				//PC0����
			PORTC&=~(1<<PORTC0);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC0���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC0);				//PC0���
			PORTC|=(1<<PORTC0);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC0);				//PC0���
			PORTC&=~(1<<PORTC0);			//���������ֹ
		}
	}
	
	//PC1������
	
	else if(pin==PORTC_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PC1����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC1);				//PC1����
			PORTC|=(1<<PORTC1);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC1���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC1);				//PC1����
			PORTC&=~(1<<PORTC1);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC1���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC1);				//PC1���
			PORTC|=(1<<PORTC1);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC1);				//PC1���
			PORTC&=~(1<<PORTC1);			//���������ֹ
		}
	}
	
	//PC2������
	
	else if(pin==PORTC_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PC2����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC2);				//PC2����
			PORTC|=(1<<PORTC2);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC2���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC2);				//PC2����
			PORTC&=~(1<<PORTC2);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC2���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC2);				//PC2���
			PORTC|=(1<<PORTC2);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC2);				//PC2���
			PORTC&=~(1<<PORTC2);			//���������ֹ
		}
	}
	
	//PC3������
	
	else if(pin==PORTC_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PC3����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC3);				//PC3����
			PORTC|=(1<<PORTC3);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC3���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC3);				//PC3����
			PORTC&=~(1<<PORTC3);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC3���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC3);				//PC3���
			PORTC|=(1<<PORTC3);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC3);				//PC3���
			PORTC&=~(1<<PORTC3);			//���������ֹ
		}
	}
	
	//PC4������
	
	else if(pin==PORTC_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PC4����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC4);				//PC4����
			PORTC|=(1<<PORTC4);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC4���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC4);				//PC4����
			PORTC&=~(1<<PORTC4);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC4���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC4);				//PC4���
			PORTC|=(1<<PORTC4);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC4);				//PC4���
			PORTC&=~(1<<PORTC4);			//���������ֹ
		}
	}
	
	//PC5������
	
	else if(pin==PORTC_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PC5����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC5);				//PC5����
			PORTC|=(1<<PORTC5);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC5���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC5);				//PC5����
			PORTC&=~(1<<PORTC5);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC5���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC5);				//PC5���
			PORTC|=(1<<PORTC5);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC5);				//PC5���
			PORTC&=~(1<<PORTC5);			//���������ֹ
		}
	}
	
	//PC6������
	
	else if(pin==PORTC_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PC6����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC6);				//PA0����
			PORTC|=(1<<PORTC6);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC6���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC6);				//PA0����
			PORTC&=~(1<<PORTC6);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC6���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC6);				//PC6���
			PORTC|=(1<<PORTC6);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC6);				//PC6���
			PORTC&=~(1<<PORTC6);			//���������ֹ
		}
	}
	
	//PC7������
	
	else if(pin==PORTC_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PC7����,����Ĭ�ϸߵ�ƽ
		{
			DDRC&=~(1<<PORTC7);				//PC7����
			PORTC|=(1<<PORTC7);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC7���룬����Ĭ�ϵ͵�ƽ
		{
			DDRC&=~(1<<PORTC7);				//PC7����
			PORTC&=~(1<<PORTC7);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC7���������Ĭ�ϸߵ�ƽ
		{
			DDRC|=(1<<PORTC7);				//PC7���
			PORTC|=(1<<PORTC7);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC7);				//PC7���
			PORTC&=~(1<<PORTC7);			//���������ֹ
		}
	}
	
	//PD0������
	
	else if(pin==PORTD_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PD0����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD0);				//PD0����
			PORTD|=(1<<PORTD0);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD0���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD0);				//PD0����
			PORTD&=~(1<<PORTD0);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD0���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD0);				//PD0���
			PORTD|=(1<<PORTD0);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD0);				//PD0���
			PORTD&=~(1<<PORTD0);			//���������ֹ
		}
	}
	
	//PD1������
	
	else if(pin==PORTD_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PD1����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD1);				//PD1����
			PORTD|=(1<<PORTD1);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD1���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD1);				//PD1����
			PORTD&=~(1<<PORTD1);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD1���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD1);				//PD1���
			PORTD|=(1<<PORTD1);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD1);				//PD1���
			PORTD&=~(1<<PORTD1);			//���������ֹ
		}
	}
	
	//PD2������
	
	else if(pin==PORTD_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PD2����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD2);				//PD2����
			PORTD|=(1<<PORTD2);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD2���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD2);				//PD2����
			PORTD&=~(1<<PORTD2);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD2���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD2);				//PD2���
			PORTD|=(1<<PORTD2);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD2);				//PD2���
			PORTD&=~(1<<PORTD2);			//���������ֹ
		}
	}
	
	//PD3������
	
	else if(pin==PORTD_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PD3����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD3);				//PD3����
			PORTD|=(1<<PORTD3);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD3���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD3);				//PD3����
			PORTD&=~(1<<PORTD3);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD3���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD3);				//PD3���
			PORTD|=(1<<PORTD3);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD3);				//PD3���
			PORTD&=~(1<<PORTD3);			//���������ֹ
		}
	}
	
	//PD4������
	
	else if(pin==PORTD_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PD4����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD4);				//PD4����
			PORTD|=(1<<PORTD4);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD4���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD4);				//PD4����
			PORTD&=~(1<<PORTD4);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD4���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD4);				//PD4���
			PORTD|=(1<<PORTD4);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD4);				//PD4���
			PORTD&=~(1<<PORTD4);			//���������ֹ
		}
	}
	
	//PD5������
	
	else if(pin==PORTD_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PD5����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD5);				//PD5����
			PORTD|=(1<<PORTD5);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD5���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD5);				//PD5����
			PORTD&=~(1<<PORTD5);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD5���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD5);				//PD5���
			PORTD|=(1<<PORTD5);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD5);				//PD5���
			PORTD&=~(1<<PORTD5);			//���������ֹ
		}
	}
	
	//PD6������
	
	else if(pin==PORTD_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PD6����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD6);				//PD6����
			PORTD|=(1<<PORTD6);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD6���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD6);				//PD6����
			PORTD&=~(1<<PORTD6);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD6���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD6);				//PD6���
			PORTD|=(1<<PORTD6);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD6);				//PD6���
			PORTD&=~(1<<PORTD6);			//���������ֹ
		}
	}
	
	//PD7������
	
	else if(pin==PORTD_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PD7����,����Ĭ�ϸߵ�ƽ
		{
			DDRD&=~(1<<PORTD7);				//PD7����
			PORTD|=(1<<PORTD7);				//��������ʹ��
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD7���룬����Ĭ�ϵ͵�ƽ
		{
			DDRD&=~(1<<PORTD7);				//PD7����
			PORTD&=~(1<<PORTD7);			//���������ֹ
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD7���������Ĭ�ϸߵ�ƽ
		{
			DDRD|=(1<<PORTD7);				//PD7���
			PORTD|=(1<<PORTD7);				//��������ʹ��
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD7);				//PD7���
			PORTD&=~(1<<PORTD7);			//���������ֹ
		}
	}
}

/************************************************************************/
/*void	IO_ReadPin();													*/
/*																		*/
/*�˺���������ȡ���ŵ�ƽ����һ��������									    */
/*һ.pin������ѡ������													*/
/*																		*/
/************************************************************************/

uint8_t IO_ReadPin(Pin_Type pin)
{
	uint8_t status;
	
	//��ȡPA0״̬
	
	if (pin==PORTA_Pin_0)
	{
		status=PINA;
		status&=1<<PINA0;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA1״̬
	
	else if (pin==PORTA_Pin_1)
	{
		status=PINA;
		status&=1<<PINA1;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA2״̬
	
	else if (pin==PORTA_Pin_2)
	{
		status=PINA;
		status&=1<<PINA2;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA3״̬
	
	else if (pin==PORTA_Pin_3)
	{
		status=PINA;
		status&=1<<PINA3;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA4״̬
	
	else if (pin==PORTA_Pin_4)
	{
		status=PINA;
		status&=1<<PINA4;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA5״̬
	
	else if (pin==PORTA_Pin_5)
	{
		status=PINA;
		status&=1<<PINA5;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA6״̬
	
	else if (pin==PORTA_Pin_6)
	{
		status=PINA;
		status&=1<<PINA6;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPA7״̬
	
	else if (pin==PORTA_Pin_7)
	{
		status=PINA;
		status&=1<<PINA7;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB0״̬
	
	else if (pin==PORTB_Pin_0)
	{
		status=PINB;
		status&=1<<PINB0;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB1״̬
	
	else if (pin==PORTB_Pin_1)
	{
		status=PINB;
		status&=1<<PINB1;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB2״̬
	
	else if (pin==PORTB_Pin_2)
	{
		status=PINB;
		status&=1<<PINB2;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB3״̬
	
	else if (pin==PORTB_Pin_3)
	{
		status=PINB;
		status&=1<<PINB3;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB4״̬
	
	else if (pin==PORTB_Pin_4)
	{
		status=PINB;
		status&=1<<PINB4;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB5״̬
	
	else if (pin==PORTB_Pin_5)
	{
		status=PINB;
		status&=1<<PINB5;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB6״̬
	
	else if (pin==PORTB_Pin_6)
	{
		status=PINB;
		status&=1<<PINB6;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPB7״̬
	
	else if (pin==PORTB_Pin_7)
	{
		status=PINB;
		status&=1<<PINB7;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC0״̬
	
	else if (pin==PORTC_Pin_0)
	{
		status=PINC;
		status&=1<<PINC0;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC1״̬
	
	else if (pin==PORTC_Pin_1)
	{
		status=PINC;
		status&=1<<PINC1;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC2״̬
	
	else if (pin==PORTC_Pin_2)
	{
		status=PINC;
		status&=1<<PINC2;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC3״̬
	
	else if (pin==PORTC_Pin_3)
	{
		status=PINC;
		status&=1<<PINC3;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC4״̬
	
	else if (pin==PORTC_Pin_4)
	{
		status=PINC;
		status&=1<<PINC4;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC5״̬
	
	else if (pin==PORTC_Pin_5)
	{
		status=PINC;
		status&=1<<PINC5;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC6״̬
	
	else if (pin==PORTC_Pin_6)
	{
		status=PINC;
		status&=1<<PINC6;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPC7״̬
	
	else if (pin==PORTC_Pin_7)
	{
		status=PINC;
		status&=1<<PINC7;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD0״̬
	
	else if (pin==PORTD_Pin_0)
	{
		status=PIND;
		status&=1<<PIND0;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD1״̬
	
	else if (pin==PORTD_Pin_1)
	{
		status=PIND;
		status&=1<<PIND1;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD2״̬
	
	else if (pin==PORTD_Pin_2)
	{
		status=PIND;
		status&=1<<PIND2;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD3״̬
	
	else if (pin==PORTD_Pin_3)
	{
		status=PIND;
		status&=1<<PIND3;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD4״̬
	
	else if (pin==PORTD_Pin_4)
	{
		status=PIND;
		status&=1<<PIND4;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD5״̬
	
	else if (pin==PORTD_Pin_5)
	{
		status=PIND;
		status&=1<<PIND5;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD6״̬
	
	else if (pin==PORTD_Pin_6)
	{
		status=PIND;
		status&=1<<PIND6;
		if (status)
		{
			return 1;
		}
		return 0;
	}
	
	//��ȡPD7״̬
	
	else if (pin==PORTD_Pin_7)
	{
		status=PIND;
		status&=1<<PIND7;
		if (status)
		{
			return 1;
		}
		return 0;
	}
}

void IO_PASet(Pin_Type pin,PinRes_Type pinres)
{
	if (pin==PORTA_Pin_0)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA0);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA0);
		}
	}
	else if (pin==PORTA_Pin_1)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA1);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA1);
		}
	}
	else if (pin==PORTA_Pin_2)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA2);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA2);
		}
	}
	else if (pin==PORTA_Pin_3)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA3);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA3);
		}
	}
	else if (pin==PORTA_Pin_4)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA4);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA4);
		}
	}
	else if (pin==PORTA_Pin_5)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA5);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA5);
		}
	}
	else if (pin==PORTA_Pin_6)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA6);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA6);
		}
	}
	else if (pin==PORTA_Pin_7)
	{
		if (pinres==High)
		{
			PORTA|=(1<<PORTA7);
		}
		else if (pinres==Low)
		{
			PORTA&=~(1<<PORTA7);
		}
	}
}

void IO_PBSet(Pin_Type pin,PinRes_Type pinres)
{
	if (pin==PORTB_Pin_0)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB0);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB0);
		}
	}
	
	else if (pin==PORTB_Pin_1)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB1);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB1);
		}
	}
	
	else if (pin==PORTB_Pin_2)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB2);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB2);
		}
	}
	
	else if (pin==PORTB_Pin_3)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB3);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB3);
		}
	}
	
	else if (pin==PORTB_Pin_4)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB4);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB4);
		}
	}
	
	else if (pin==PORTB_Pin_5)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB5);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB5);
		}
	}
	
	else if (pin==PORTB_Pin_6)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB6);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB6);
		}
	}
	
	else if (pin==PORTB_Pin_7)
	{
		if (pinres==High)
		{
			PORTB|=(1<<PORTB7);
		}
		else if (pinres==Low)
		{
			PORTB&=~(1<<PORTB7);
		}
	}
}

void IO_PCSet(Pin_Type pin,PinRes_Type pinres)
{
	if (pin==PORTC_Pin_0)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC0);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC0);
		}
	}
	
	else if (pin==PORTC_Pin_1)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC1);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC1);
		}
	}
	
	else if (pin==PORTC_Pin_2)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC2);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC2);
		}
	}
	
	else if (pin==PORTC_Pin_3)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC3);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC3);
		}
	}
	
	else if (pin==PORTC_Pin_4)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC4);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC4);
		}
	}
	
	else if (pin==PORTC_Pin_5)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC5);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC5);
		}
	}
	
	else if (pin==PORTC_Pin_6)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC6);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC6);
		}
	}
	
	else if (pin==PORTC_Pin_7)
	{
		if (pinres==High)
		{
			PORTC|=(1<<PORTC7);
		}
		else if (pinres==Low)
		{
			PORTC&=~(1<<PORTC7);
		}
	}
}

void IO_PDSet(Pin_Type pin,PinRes_Type pinres)
{
	if (pin==PORTD_Pin_0)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD0);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD0);
		}
	}
	
	else if (pin==PORTD_Pin_1)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD1);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD1);
		}
	}
	
	else if (pin==PORTD_Pin_2)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD2);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD2);
		}
	}
	
	else if (pin==PORTD_Pin_3)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD3);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD3);
		}
	}
	
	else if (pin==PORTD_Pin_4)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD4);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD4);
		}
	}
	
	else if (pin==PORTD_Pin_5)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD5);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD5);
		}
	}
	
	else if (pin==PORTD_Pin_6)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD6);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD6);
		}
	}
	
	else if (pin==PORTD_Pin_7)
	{
		if (pinres==High)
		{
			PORTD|=(1<<PORTD7);
		}
		else if (pinres==Low)
		{
			PORTD&=~(1<<PORTD7);
		}
	}
}