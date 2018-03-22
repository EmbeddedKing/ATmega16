#ifndef __ATMEGA16_DS18B20_H
#define __ATMEGA16_DS18B20_H

#include <avr/io.h>
#include <util/delay.h>
#include "atmega16_gpio.h"

void DS18B20_Init(Pin_Type pin);
void DS18B20_Reset();
void DS18B20_Start();
uint8_t DS18B20_ReadByte();
uint16_t DS18B20_ReadTempData();


#endif

