#include "reg52.h"

typedef unsigned char u8;
typedef unsigned int u16; 
typedef unsigned long int u32;
						   

sbit KEY = P3^2; 
sbit LED = P2^0; 


void initInterrupt0()
{
	EX0 = 1;
	IT0 = 1;
	EA  = 1;
}

void delay(u8 i)
{
	while(i--);
}
void main()
{

	initInterrupt0();
	while(1);

}


void interruptHandler() interrupt 0
{
	delay(12000); 
	if(KEY == 0)	
	{
		LED = ~LED;	   
	}
}
