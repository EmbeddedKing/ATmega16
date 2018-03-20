#ifndef __ATMEGA16_DHT11_H
#define __ATMEGA16_DHT11_H
#include <avr/io.h>
#include <util/delay.h>

#define DHT11_IN DDRB&=~(1<<PORTB0)
#define DHT11_OUT DDRB|=~(1<<PORTB0)
#define DHT11_HIGH PORTB|=(1<<PORTB0)
#define DHT11_LOW PORTB&=~(1<<PORTB0)
#define DHT11_READ PINB&(1<<PORTB0)

void DHT11_Start();
uint8_t DHT11_ReadByte();

#endif