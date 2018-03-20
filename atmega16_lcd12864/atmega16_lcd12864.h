#ifndef __ATMEGA16_LCD12864_H
#define __ATMEGA16_LCD12864_H

#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
 
//�ܽŶ����޸���
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

void LCD12864_Busy_Init();										//�����Ļæ������ʼ��
uint8_t LCD12864_Busy();										//��Ļæ��⺯��
void LCD12684_WriteCmd(uint8_t data);							//дָ��
void LCD12684_WriteData(uint8_t data);							//д����
void LCD12864_Init();											//Һ����ʼ��
void LCD12864_Clear();											//����
void LCD12864_Pos(uint8_t x,uint8_t y);							//������ʾλ��
void LCD12864_DisplayString(uint8_t x,uint8_t y,uint8_t *p);	//��ʾ�ַ���

#endif