#ifndef __ATMEGA16_USART_H
#define __ATMEGA16_USART_H

#include <avr/io.h>
#include "atmega16_io.h"

void USART_Init(uint32_t baud,uint32_t crystal);			//串口初始化
void USART_SendByte(uint8_t data);							//发送一个字节数据
uint8_t USART_ReceiveByte();								//接收一个字节数据
void USART_SendString(uint8_t *data);						//发送一个字符串

#endif