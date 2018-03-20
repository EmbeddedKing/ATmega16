#include "atmega16_lcd12864.h"
    
//检测屏幕忙函数初始化
void LCD12864_Busy_Init()
{
	LCD_BUS_ADDR=0x00;			//设置输入
}

//屏幕忙检测函数
uint8_t LCD12864_Busy()
{
	uint8_t x;
	LCD_RS_L();
	LCD_RW_H();
	LCD_E_H();
	LCD12864_Busy_Init();
	_delay_us(5);
	_delay_us(5);
	x=PINC&0x80;
	LCD_E_L();
	return x;
}

//向屏幕写命令函数
void LCD12684_WriteCmd(uint8_t data)
{
	while(LCD12864_Busy());			//忙检测 
	LCD_RS_L();	     
	LCD_RW_L();
	LCD_E_L();
	_delay_us(5);
	_delay_us(5);
	LCD_BUS_ADDR=0xFF;
	LCD_BUS=data;
	_delay_us(5);
	_delay_us(5);
	LCD_E_H();
	_delay_us(5);
	_delay_us(5);
	LCD_E_L();
}

//向屏幕写数据函数
void LCD12684_WriteData(uint8_t data)
{
	while(LCD12864_Busy()); //忙检测
	LCD_RS_H();     
	LCD_RW_L();
	LCD_E_L();
	_delay_us(5);
	_delay_us(5);
    LCD_BUS_ADDR=0xFF;
	LCD_BUS=data; 
	_delay_us(5);
	_delay_us(5);
	LCD_E_H();
	_delay_us(5);
	_delay_us(5);
	LCD_E_L();
}

// 液晶初始化
void LCD12864_Init()
{
	                   
	LCD12684_WriteCmd(0x34);    //扩充指令操作
    _delay_ms(5);
    LCD12684_WriteCmd(0x30);    //基本指令操作
    _delay_ms(5);
    LCD12684_WriteCmd(0x0C);    //显示开，关光标
    _delay_ms(5);
    LCD12684_WriteCmd(0x01);    //清除LCD的显示内容
    _delay_ms(5); 
}

//清屏
void LCD12864_Clear()
{
    LCD12684_WriteCmd(0x34);   //扩充指令操作	“绘图”
    _delay_ms(5);
    LCD12684_WriteCmd(0x30);    //基本指令操作
    _delay_ms(5);
    LCD12684_WriteCmd(0x01);   //清屏
    _delay_ms(5);
} 

/************************************************************************************************/
//@f_name: void LCD12864_Pos(u8 x,u8 y)
//@brief:设置显示位置
//@param:u8 x：X轴    u8 y:Y轴
//@return: None
/************************************************************************************************/
void LCD12864_Pos(uint8_t x,uint8_t y)
{
	uint8_t  Pos;
	if (x==1)		{x=0x80;}
	else if (x==2)	{x=0x90;}
	else if (x==3)	{x=0x88;}
	else if (x==4)	{x=0x98;}
	else x=0x80;
	Pos=x+y;
	LCD12684_WriteCmd(Pos);				//显示地址
}

/************************************************************************************************/
//@f_name: void LCD_DisplayString(u8 x,u8 y,const u8 *p)
//@brief:	 显示字符串
//@param:	 u8 *bmp 图形数组
//@return: None
/************************************************************************************************/
void LCD12864_DisplayString(uint8_t x,uint8_t y,uint8_t *p)
{
    uint8_t temp;
    if (x>4){x=1;}
	if (y>16){y=0;}
	temp=*p;
	LCD12864_Pos(x,y);
	while(temp!='\0')
	{
		LCD12684_WriteData(temp);
		temp=*(++p);
	} 
}

