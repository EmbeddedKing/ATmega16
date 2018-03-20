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

//�ܽŶ����޸���
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

void LCD1602_Init();														//��ʼ������
void LCD1602_WriteCmd(uint8_t Cmd);											//дָ���
void LCD1602_WriteData(uint8_t Data);										//д���ݺ���
void LCD1602_Pos(uint8_t x,uint8_t y);										//ѡ��λ�ú���
void LCD1602_Clear();														//���RAM����
void LCD1602_DisplayString(uint8_t x,uint8_t y,uint8_t *data);


#endif /* ATMEGA16_LCD1602_H_ */