#include "atmega16_lcd12864.h"
    
//�����Ļæ������ʼ��
void LCD12864_Busy_Init()
{
	LCD_BUS_ADDR=0x00;			//��������
}

//��Ļæ��⺯��
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

//����Ļд�����
void LCD12684_WriteCmd(uint8_t data)
{
	while(LCD12864_Busy());			//æ��� 
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

//����Ļд���ݺ���
void LCD12684_WriteData(uint8_t data)
{
	while(LCD12864_Busy()); //æ���
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

// Һ����ʼ��
void LCD12864_Init()
{
	                   
	LCD12684_WriteCmd(0x34);    //����ָ�����
    _delay_ms(5);
    LCD12684_WriteCmd(0x30);    //����ָ�����
    _delay_ms(5);
    LCD12684_WriteCmd(0x0C);    //��ʾ�����ع��
    _delay_ms(5);
    LCD12684_WriteCmd(0x01);    //���LCD����ʾ����
    _delay_ms(5); 
}

//����
void LCD12864_Clear()
{
    LCD12684_WriteCmd(0x34);   //����ָ�����	����ͼ��
    _delay_ms(5);
    LCD12684_WriteCmd(0x30);    //����ָ�����
    _delay_ms(5);
    LCD12684_WriteCmd(0x01);   //����
    _delay_ms(5);
} 

/************************************************************************************************/
//@f_name: void LCD12864_Pos(u8 x,u8 y)
//@brief:������ʾλ��
//@param:u8 x��X��    u8 y:Y��
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
	LCD12684_WriteCmd(Pos);				//��ʾ��ַ
}

/************************************************************************************************/
//@f_name: void LCD_DisplayString(u8 x,u8 y,const u8 *p)
//@brief:	 ��ʾ�ַ���
//@param:	 u8 *bmp ͼ������
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

