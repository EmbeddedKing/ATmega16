/*
 * atmega16_lcd1602.h
 *
 * Created: 2017/4/15 15:21:36
 *  Author: Administrator
 */ 


#ifndef ATMEGA16_LCD1602_H_
#define ATMEGA16_LCD1602_H_

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "atmega16_io.h"

//管脚定义修改区
/***********************************************************/
#define LCD_RS_H()		DDRA|=(1<<DDA5);PORTA|=(1<<PORTA5);
#define LCD_RS_L()		DDRA|=(1<<DDA5);PORTA&=~(1<<PORTA5);
#define LCD_RW_H()		DDRA|=(1<<DDA6);PORTA|=(1<<PORTA6);
#define LCD_RW_L()		DDRA|=(1<<DDA6);PORTA&=~(1<<PORTA6);
#define LCD_E_H()		DDRA|=(1<<DDA7);PORTA|=(1<<PORTA7);
#define LCD_E_L()		DDRA|=(1<<DDA7);PORTA&=~(1<<PORTA7);
#define LCD_BUS			PORTC
#define LCD_BUS_ADDR	DDRC
/***********************************************************/

void LCD1602_Init();														//初始化函数
void LCD1602_WriteCmd(uint8_t Cmd);											//写指令函数
void LCD1602_WriteData(uint8_t Data);										//写数据函数
void LCD1602_Pos(uint8_t x,uint8_t y);										//选择位置函数
void LCD1602_Clear();														//清除RAM函数
void LCD1602_DisplayString(uint8_t x,uint8_t y,uint8_t *data);


#endif /* ATMEGA16_LCD1602_H_ */

