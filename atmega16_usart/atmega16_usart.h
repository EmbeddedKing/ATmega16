#ifndef __ATMEGA16_USART_H
#define __ATMEGA16_USART_H

#include <avr/io.h>
#include "atmega16_io.h"

void USART_Init(uint32_t baud,uint32_t crystal);			//���ڳ�ʼ��
void USART_SendByte(uint8_t data);							//����һ���ֽ�����
uint8_t USART_ReceiveByte();								//����һ���ֽ�����
void USART_SendString(uint8_t *data);						//����һ���ַ���

#endif