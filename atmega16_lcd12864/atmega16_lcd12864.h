#ifndef __ATMEGA16_LCD12864_H
#define __ATMEGA16_LCD12864_H

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
 
//管脚定义修改区
/***********************************************************/
#define  LCD_RS_H()		DDRA|=(1<<7);PORTA|=(1<<7);
#define  LCD_RS_L()		DDRA|=(1<<7);PORTA&=~(1<<7);
#define  LCD_RW_H()		DDRA|=(1<<6);PORTA|=(1<<6);
#define  LCD_RW_L()		DDRA|=(1<<6);PORTA&=~(1<<6);
#define  LCD_E_H()		DDRA|=(1<<5);PORTA|=(1<<5);
#define  LCD_E_L()		DDRA|=(1<<5);PORTA&=~(1<<5);
#define LCD_BUS			PORTC
#define LCD_BUS_ADDR	DDRC
/***********************************************************/

void LCD12864_Busy_Init();										//检测屏幕忙函数初始化
uint8_t LCD12864_Busy();										//屏幕忙检测函数
void LCD12684_WriteCmd(uint8_t data);							//写指令
void LCD12684_WriteData(uint8_t data);							//写数据
void LCD12864_Init();											//液晶初始化
void LCD12864_Clear();											//清屏
void LCD12864_Pos(uint8_t x,uint8_t y);							//设置显示位置
void LCD12864_DisplayString(uint8_t x,uint8_t y,uint8_t *p);	//显示字符串

#endif