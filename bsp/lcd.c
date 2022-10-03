#ifdef M32C87
	#include "sfr32c87.h"
	#define LCD_RS p3_0
	#define LCD_RW p3_1
	#define LCD_E  p3_2

	#define LCD_DATA(x) p3= (x & 0xF0) | (p3 & 0x0F);
	#define dLCD_DATA pd3=0xF0 | pd3;

	#define dLCD_RS	pd3_0
	#define dLCD_RW	pd3_1
	#define dLCD_E	pd3_2	
#endif

#ifdef M32C83
	#include "sfr32c83.h"
	#define LCD_RS p3_0
	#define LCD_RW p3_1
	#define LCD_E  p3_2

	#define LCD_DATA(x) p3= x;
	#define dLCD_DATA pd3=0xFF;

	#define dLCD_RS	pd3_0
	#define dLCD_RW	pd3_1
	#define dLCD_E	pd3_2		
#endif

#include "lcd.h"


#ifdef M32C87
void lcd_car(char c)
{
#ifndef SIMUL
	LCD_DATA (c);
    LCD_E=1;
    delay(10);
   	LCD_E=0;
   	delay(10);

   	LCD_DATA(c<<4);
    LCD_E=1;
   	delay(10);
    LCD_E=0;
   	delay(10);
#else
	p4=c;
#endif
}
#endif


#ifdef M32C83
void lcd_car(char c)
{
	LCD_DATA (c);
    LCD_E=1;
    delay(10);
   	LCD_E=0;
   	delay(10);
}
#endif



void lcd_com(char c)
{
   LCD_RS=0;
   lcd_car(c);
}


void lcd_putc(char c)
{
   LCD_RS=1;
   lcd_car(c);
}

void lcd_str(char far *p)
{
char c;
	while (c=*p++)
		lcd_putc(c);	
}

void lcd_cls(void)
{
	lcd_com(0x01);
	delay(100);
}


void lcd_init()
{

	dLCD_E=1;
	dLCD_RS=1;
	dLCD_RW=1;
	dLCD_DATA;

	LCD_RW=0;
	LCD_RS=0;
	LCD_E=0;

   lcd_com(0x33); //init 4 bit
   delay(5000);
   lcd_com(0x32); // reset 4 bits
   delay(100);
   lcd_com(0x28);
   delay(100);   
   lcd_com(0x28);
   delay(100);   
   lcd_com(0x06);
   delay(100);   
   lcd_com(0x0E);
   lcd_com(0x01);
   delay(100);   
   lcd_com(0x80);
   delay(100);   
}

void delay (int n)
{
int i;

	for  (i=0;i<n*60;i++);
}