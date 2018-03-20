#include "atmega16_lcd1602.h"

//初始化函数
void LCD1602_Init()
{
	LCD_BUS_ADDR=0xff;
	LCD_E_L();
	LCD_RW_L();
	LCD_RS_L();
	LCD1602_WriteCmd(0x38);
	LCD1602_WriteCmd(0x0c);
	LCD1602_WriteCmd(0x06);
	LCD1602_WriteCmd(0x01);
	LCD1602_Clear();
}

//清屏
void LCD1602_Clear()
{
	LCD1602_WriteCmd(0x80);
	for (uint8_t i=0;i<16;i++)
	{
		LCD1602_WriteData(' ');
	}
	LCD1602_WriteCmd(0x80+0x40);
	for (uint8_t i=0;i<16;i++)
	{
		LCD1602_WriteData(' ');
	}
}

//写指令
void LCD1602_WriteCmd(uint8_t Cmd)
{
	LCD_RS_L();
	LCD_BUS=Cmd;
	_delay_ms(5);
	LCD_E_H();
	_delay_ms(5);
	LCD_E_L();                                                                       
}

//写数据
void LCD1602_WriteData(uint8_t Data)
{
	LCD_RS_H();
	LCD_BUS=Data;
	_delay_ms(5);
	LCD_E_H();
	_delay_ms(5);
	LCD_E_L();
}

void LCD1602_Pos(uint8_t x,uint8_t y)
{
	uint8_t  Pos;
	if (x==1)		{x=0x80;}
	else if (x==2)	{x=0x80+0x40;}
	Pos=x+y;
	LCD1602_WriteCmd(Pos);
}

void LCD1602_DisplayString(uint8_t x,uint8_t y,uint8_t *data)
{
	uint8_t temp;
	if (x>2){x=1;}
	if (y>16){y=0;}
	temp=*data;
	LCD1602_Pos(x,y);
	while(temp!='\0')
	{
		LCD1602_WriteData(temp);
		temp=*(++data);
	}
}