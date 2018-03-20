#include "atmega16_io.h"

/************************************************************************/
/*void	IO_Init();														*/
/*																		*/
/*此函数用来初始化IO，有一个参数										    */
/*一.port：用来选择IO端口													*/
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
/*此函数用来设置引脚模式，有三个参数									    */
/*一.pin：用来选择引脚													*/
/*一.pincmd：用来设置输入输出												*/
/*一.pinres：用来设置高低电平												*/
/*																		*/
/************************************************************************/

void IO_PinMode(Pin_Type pin , PinCmd_Type pincmd , PinRes_Type pinres)
{
	
	//PA0的设置
	
	if(pin==PORTA_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PA0输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA0);				//PA0输入
			PORTA|=(1<<PORTA0);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA0输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA0);				//PA0输入
			PORTA&=~(1<<PORTA0);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA0输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA0);				//PA0输出
			PORTA|=(1<<PORTA0);				//上拉电阻使能
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA0);				//PA0输出
			PORTA&=~(1<<PORTA0);			//上拉电阻禁止
		}
	}
	
	//PA1的设置
	
	else if(pin==PORTA_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PA1输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA1);				//PA1输入
			PORTA|=(1<<PORTA1);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA1输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA1);				//PA1输入
			PORTA&=~(1<<PORTA1);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA1输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA1);				//PA1输出
			PORTA|=(1<<PORTA1);				//上拉电阻使能
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA1);				//PA1输出
			PORTA&=~(1<<PORTA1);			//上拉电阻禁止
		}
	}
	
	//PA2的设置
	
	else if(pin==PORTA_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PA2输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA2);				//PA2输入
			PORTA|=(1<<PORTA2);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA2输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA2);				//PA2输入
			PORTA&=~(1<<PORTA2);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA2输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA2);				//PA2输出
			PORTA|=(1<<PORTA2);				//上拉电阻使能
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA2);				//PA2输出
			PORTA&=~(1<<PORTA2);			//上拉电阻禁止
		}
	}
	
	//PA3的设置
	
	else if(pin==PORTA_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PA3输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA3);				//PA3输入
			PORTA|=(1<<PORTA3);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA3输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA3);				//PA3输入
			PORTA&=~(1<<PORTA3);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA3输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA3);				//PA3输出
			PORTA|=(1<<PORTA3);				//上拉电阻使能
		}
		
		else if ((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA3);				//PA3输出
			PORTA&=~(1<<PORTA3);			//上拉电阻禁止
		}
	}
	
	//PA4的设置
	
	else if(pin==PORTA_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PA4输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA4);				//PA4输入
			PORTA|=(1<<PORTA4);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA4输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA4);				//PA4输入
			PORTA&=~(1<<PORTA4);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA4输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA4);				//PA4输出
			PORTA|=(1<<PORTA4);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA4);				//PA4输出
			PORTA&=~(1<<PORTA4);			//上拉电阻禁止
		}
	}
	
	//PA5的设置
	
	else if(pin==PORTA_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PA5输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA5);				//PA5输入
			PORTA|=(1<<PORTA5);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA5输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA5);				//PA5输入
			PORTA&=~(1<<PORTA5);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA5输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA5);				//PA5输出
			PORTA|=(1<<PORTA5);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA5);				//PA5输出
			PORTA&=~(1<<PORTA5);			//上拉电阻禁止
		}
	}
	
	//PA6的设置
	
	else if(pin==PORTA_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PA6输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA6);				//PA6输入
			PORTA|=(1<<PORTA6);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA6输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA6);				//PA6输入
			PORTA&=~(1<<PORTA6);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA6输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA6);				//PA6输出
			PORTA|=(1<<PORTA6);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA6);				//PA6输出
			PORTA&=~(1<<PORTA6);			//上拉电阻禁止
		}
	}
	
	//PA7的设置
	
	else if(pin==PORTA_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PA7输入,引脚默认高电平
		{
			DDRA&=~(1<<PORTA7);				//PA7输入
			PORTA|=(1<<PORTA7);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA7输入，引脚默认低电平
		{
			DDRA&=~(1<<PORTA7);				//PA7输入
			PORTA&=~(1<<PORTA7);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA7输出，引脚默认高电平
		{
			DDRA|=(1<<PORTA7);				//PA7输出
			PORTA|=(1<<PORTA7);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRA|=(1<<PORTA7);				//PA7输出
			PORTA&=~(1<<PORTA7);			//上拉电阻禁止
		}
	}
	
	//PB0的设置
	
	else if(pin==PORTB_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PB0输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB0);				//PB0输入
			PORTB|=(1<<PORTB0);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB0输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB0);				//PB0输入
			PORTB&=~(1<<PORTB0);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB0输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB0);				//PB0输出
			PORTB|=(1<<PORTB0);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB0);				//PB0输出
			PORTB&=~(1<<PORTB0);			//上拉电阻禁止
		}
	}
	
	//PB1的设置
	
	else if(pin==PORTB_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PB1输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB1);				//PB1输入
			PORTB|=(1<<PORTB1);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB1输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB1);				//PB1输入
			PORTB&=~(1<<PORTB1);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB1输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB1);				//PB1输出
			PORTB|=(1<<PORTB1);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB1);				//PB1输出
			PORTB&=~(1<<PORTB1);			//上拉电阻禁止
		}
	}
	
	//PB2的设置
	
	else if(pin==PORTB_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PB2输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB2);				//PA0输入
			PORTB|=(1<<PORTB2);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB2输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB2);				//PB2输入
			PORTB&=~(1<<PORTB2);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB2输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB2);				//PB2输出
			PORTB|=(1<<PORTB2);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB2);				//PB2输出
			PORTB&=~(1<<PORTB2);			//上拉电阻禁止
		}
	}
	
	//PB3的设置
	
	else if(pin==PORTB_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PB3输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB3);				//PB3输入
			PORTB|=(1<<PORTB3);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB3输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB3);				//PB3输入
			PORTB&=~(1<<PORTB3);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB3输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB3);				//PB3输出
			PORTB|=(1<<PORTB3);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB3);				//PB3输出
			PORTB&=~(1<<PORTB3);			//上拉电阻禁止
		}
	}
	
	//PB4的设置
	
	else if(pin==PORTB_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PA0输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB4);				//PA0输入
			PORTB|=(1<<PORTB4);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PA0输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB4);				//PA0输入
			PORTB&=~(1<<PORTB4);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PA0输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB4);				//PA0输出
			PORTB|=(1<<PORTB4);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB4);				//PA0输出
			PORTB&=~(1<<PORTB4);			//上拉电阻禁止
		}
	}
	
	//PB5的设置
	
	else if(pin==PORTB_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PB5输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB5);				//PA0输入
			PORTB|=(1<<PORTB5);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB5输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB5);				//PB5输入
			PORTB&=~(1<<PORTB5);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB5输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB5);				//PB5输出
			PORTB|=(1<<PORTB5);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB5);				//PB5输出
			PORTB&=~(1<<PORTB5);			//上拉电阻禁止
		}
	}
	
	//PB6的设置
	
	else if(pin==PORTB_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PB6输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB6);				//PB6输入
			PORTB|=(1<<PORTB6);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB6输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB6);				//PB6输入
			PORTB&=~(1<<PORTB6);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB6输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB6);				//PB6输出
			PORTB|=(1<<PORTB6);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB6);				//PB6输出
			PORTB&=~(1<<PORTB6);			//上拉电阻禁止
		}
	}
	
	//PB7的设置
	
	else if(pin==PORTB_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PB7输入,引脚默认高电平
		{
			DDRB&=~(1<<PORTB7);				//PB7输入
			PORTB|=(1<<PORTB7);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PB7输入，引脚默认低电平
		{
			DDRB&=~(1<<PORTB7);				//PB7输入
			PORTB&=~(1<<PORTB7);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PB7输出，引脚默认高电平
		{
			DDRB|=(1<<PORTB7);				//PB7输出
			PORTB|=(1<<PORTB7);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRB|=(1<<PORTB7);				//PB7输出
			PORTB&=~(1<<PORTB7);			//上拉电阻禁止
		}
	}
	
	//PC0的设置
	
	else if(pin==PORTC_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PC0输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC0);				//PC0输入
			PORTC|=(1<<PORTC0);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC0输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC0);				//PC0输入
			PORTC&=~(1<<PORTC0);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC0输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC0);				//PC0输出
			PORTC|=(1<<PORTC0);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC0);				//PC0输出
			PORTC&=~(1<<PORTC0);			//上拉电阻禁止
		}
	}
	
	//PC1的设置
	
	else if(pin==PORTC_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PC1输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC1);				//PC1输入
			PORTC|=(1<<PORTC1);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC1输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC1);				//PC1输入
			PORTC&=~(1<<PORTC1);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC1输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC1);				//PC1输出
			PORTC|=(1<<PORTC1);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC1);				//PC1输出
			PORTC&=~(1<<PORTC1);			//上拉电阻禁止
		}
	}
	
	//PC2的设置
	
	else if(pin==PORTC_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PC2输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC2);				//PC2输入
			PORTC|=(1<<PORTC2);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC2输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC2);				//PC2输入
			PORTC&=~(1<<PORTC2);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC2输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC2);				//PC2输出
			PORTC|=(1<<PORTC2);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC2);				//PC2输出
			PORTC&=~(1<<PORTC2);			//上拉电阻禁止
		}
	}
	
	//PC3的设置
	
	else if(pin==PORTC_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PC3输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC3);				//PC3输入
			PORTC|=(1<<PORTC3);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC3输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC3);				//PC3输入
			PORTC&=~(1<<PORTC3);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC3输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC3);				//PC3输出
			PORTC|=(1<<PORTC3);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC3);				//PC3输出
			PORTC&=~(1<<PORTC3);			//上拉电阻禁止
		}
	}
	
	//PC4的设置
	
	else if(pin==PORTC_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PC4输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC4);				//PC4输入
			PORTC|=(1<<PORTC4);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC4输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC4);				//PC4输入
			PORTC&=~(1<<PORTC4);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC4输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC4);				//PC4输出
			PORTC|=(1<<PORTC4);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC4);				//PC4输出
			PORTC&=~(1<<PORTC4);			//上拉电阻禁止
		}
	}
	
	//PC5的设置
	
	else if(pin==PORTC_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PC5输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC5);				//PC5输入
			PORTC|=(1<<PORTC5);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC5输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC5);				//PC5输入
			PORTC&=~(1<<PORTC5);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC5输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC5);				//PC5输出
			PORTC|=(1<<PORTC5);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC5);				//PC5输出
			PORTC&=~(1<<PORTC5);			//上拉电阻禁止
		}
	}
	
	//PC6的设置
	
	else if(pin==PORTC_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PC6输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC6);				//PA0输入
			PORTC|=(1<<PORTC6);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC6输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC6);				//PA0输入
			PORTC&=~(1<<PORTC6);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC6输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC6);				//PC6输出
			PORTC|=(1<<PORTC6);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC6);				//PC6输出
			PORTC&=~(1<<PORTC6);			//上拉电阻禁止
		}
	}
	
	//PC7的设置
	
	else if(pin==PORTC_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PC7输入,引脚默认高电平
		{
			DDRC&=~(1<<PORTC7);				//PC7输入
			PORTC|=(1<<PORTC7);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PC7输入，引脚默认低电平
		{
			DDRC&=~(1<<PORTC7);				//PC7输入
			PORTC&=~(1<<PORTC7);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PC7输出，引脚默认高电平
		{
			DDRC|=(1<<PORTC7);				//PC7输出
			PORTC|=(1<<PORTC7);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRC|=(1<<PORTC7);				//PC7输出
			PORTC&=~(1<<PORTC7);			//上拉电阻禁止
		}
	}
	
	//PD0的设置
	
	else if(pin==PORTD_Pin_0)
	{
		if ((pincmd==Input) && (pinres==High))		//PD0输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD0);				//PD0输入
			PORTD|=(1<<PORTD0);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD0输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD0);				//PD0输入
			PORTD&=~(1<<PORTD0);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD0输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD0);				//PD0输出
			PORTD|=(1<<PORTD0);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD0);				//PD0输出
			PORTD&=~(1<<PORTD0);			//上拉电阻禁止
		}
	}
	
	//PD1的设置
	
	else if(pin==PORTD_Pin_1)
	{
		if ((pincmd==Input) && (pinres==High))		//PD1输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD1);				//PD1输入
			PORTD|=(1<<PORTD1);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD1输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD1);				//PD1输入
			PORTD&=~(1<<PORTD1);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD1输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD1);				//PD1输出
			PORTD|=(1<<PORTD1);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD1);				//PD1输出
			PORTD&=~(1<<PORTD1);			//上拉电阻禁止
		}
	}
	
	//PD2的设置
	
	else if(pin==PORTD_Pin_2)
	{
		if ((pincmd==Input) && (pinres==High))		//PD2输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD2);				//PD2输入
			PORTD|=(1<<PORTD2);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD2输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD2);				//PD2输入
			PORTD&=~(1<<PORTD2);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD2输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD2);				//PD2输出
			PORTD|=(1<<PORTD2);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD2);				//PD2输出
			PORTD&=~(1<<PORTD2);			//上拉电阻禁止
		}
	}
	
	//PD3的设置
	
	else if(pin==PORTD_Pin_3)
	{
		if ((pincmd==Input) && (pinres==High))		//PD3输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD3);				//PD3输入
			PORTD|=(1<<PORTD3);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD3输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD3);				//PD3输入
			PORTD&=~(1<<PORTD3);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD3输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD3);				//PD3输出
			PORTD|=(1<<PORTD3);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD3);				//PD3输出
			PORTD&=~(1<<PORTD3);			//上拉电阻禁止
		}
	}
	
	//PD4的设置
	
	else if(pin==PORTD_Pin_4)
	{
		if ((pincmd==Input) && (pinres==High))		//PD4输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD4);				//PD4输入
			PORTD|=(1<<PORTD4);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD4输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD4);				//PD4输入
			PORTD&=~(1<<PORTD4);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD4输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD4);				//PD4输出
			PORTD|=(1<<PORTD4);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD4);				//PD4输出
			PORTD&=~(1<<PORTD4);			//上拉电阻禁止
		}
	}
	
	//PD5的设置
	
	else if(pin==PORTD_Pin_5)
	{
		if ((pincmd==Input) && (pinres==High))		//PD5输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD5);				//PD5输入
			PORTD|=(1<<PORTD5);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD5输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD5);				//PD5输入
			PORTD&=~(1<<PORTD5);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD5输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD5);				//PD5输出
			PORTD|=(1<<PORTD5);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD5);				//PD5输出
			PORTD&=~(1<<PORTD5);			//上拉电阻禁止
		}
	}
	
	//PD6的设置
	
	else if(pin==PORTD_Pin_6)
	{
		if ((pincmd==Input) && (pinres==High))		//PD6输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD6);				//PD6输入
			PORTD|=(1<<PORTD6);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD6输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD6);				//PD6输入
			PORTD&=~(1<<PORTD6);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD6输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD6);				//PD6输出
			PORTD|=(1<<PORTD6);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD6);				//PD6输出
			PORTD&=~(1<<PORTD6);			//上拉电阻禁止
		}
	}
	
	//PD7的设置
	
	else if(pin==PORTD_Pin_7)
	{
		if ((pincmd==Input) && (pinres==High))		//PD7输入,引脚默认高电平
		{
			DDRD&=~(1<<PORTD7);				//PD7输入
			PORTD|=(1<<PORTD7);				//上拉电阻使能
		}
		
		else if ((pincmd==Input) && (pinres==Low))	//PD7输入，引脚默认低电平
		{
			DDRD&=~(1<<PORTD7);				//PD7输入
			PORTD&=~(1<<PORTD7);			//上拉电阻禁止
		}
		
		else if ((pincmd==Output) && (pinres==High))	//PD7输出，引脚默认高电平
		{
			DDRD|=(1<<PORTD7);				//PD7输出
			PORTD|=(1<<PORTD7);				//上拉电阻使能
		}
		
		else if((pincmd==Output) && (pinres==Low))
		{
			DDRD|=(1<<PORTD7);				//PD7输出
			PORTD&=~(1<<PORTD7);			//上拉电阻禁止
		}
	}
}

/************************************************************************/
/*void	IO_ReadPin();													*/
/*																		*/
/*此函数用来读取引脚电平，有一个个参数									    */
/*一.pin：用来选择引脚													*/
/*																		*/
/************************************************************************/

uint8_t IO_ReadPin(Pin_Type pin)
{
	uint8_t status;
	
	//读取PA0状态
	
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
	
	//读取PA1状态
	
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
	
	//读取PA2状态
	
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
	
	//读取PA3状态
	
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
	
	//读取PA4状态
	
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
	
	//读取PA5状态
	
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
	
	//读取PA6状态
	
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
	
	//读取PA7状态
	
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
	
	//读取PB0状态
	
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
	
	//读取PB1状态
	
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
	
	//读取PB2状态
	
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
	
	//读取PB3状态
	
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
	
	//读取PB4状态
	
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
	
	//读取PB5状态
	
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
	
	//读取PB6状态
	
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
	
	//读取PB7状态
	
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
	
	//读取PC0状态
	
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
	
	//读取PC1状态
	
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
	
	//读取PC2状态
	
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
	
	//读取PC3状态
	
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
	
	//读取PC4状态
	
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
	
	//读取PC5状态
	
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
	
	//读取PC6状态
	
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
	
	//读取PC7状态
	
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
	
	//读取PD0状态
	
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
	
	//读取PD1状态
	
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
	
	//读取PD2状态
	
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
	
	//读取PD3状态
	
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
	
	//读取PD4状态
	
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
	
	//读取PD5状态
	
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
	
	//读取PD6状态
	
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
	
	//读取PD7状态
	
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