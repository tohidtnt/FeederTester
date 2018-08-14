#include "lpc17xx.h"



void delay()
{

	//int x=200000;
	int x=195000;
	//int x=3000000;
	while (x)
		x--;
}

void delay2()
	{
   int y=10000;
	 while (y)
   y--;	

}



void ioInit(){
	LPC_GPIO0->FIODIR |= 0x40400FFF;
	LPC_GPIO1->FIODIR |= 0x3FFFFFFF;
	LPC_GPIO2->FIODIR |= 0x30003801;	
}

void setAll(){


	LPC_GPIO0->FIOSET |= 0x40400FFF;
	LPC_GPIO1->FIOSET |= 0x3FFFFFFF;
	LPC_GPIO2->FIOSET |= 0x30003801;
	
}



void resetAll(){

	
	LPC_GPIO0->FIOCLR |= 0x40400FFF;
	LPC_GPIO1->FIOCLR |= 0x3FFFFFFF;
	LPC_GPIO2->FIOCLR |= 0x30003801;
	
}


int main(){
	ioInit();
	while(1)
	{ 
    setAll();
		delay();
		resetAll();
		delay();
		
	}
	
}