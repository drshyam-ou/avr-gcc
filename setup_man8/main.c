//Prints a decimal number 
//on the display
#include <avr/io.h>
#include<util/delay.h>

void display(int,int);
 
int main (void)
{
  int b,d,i;	
 //set PD2-PD7 as output pins 0xFC=0b11111100 (binary)
  DDRD   |= 0xFC;
  //set PB0 as output pin
  DDRB    |= ((1 << DDB0));
 
  while (1) {
	  for(i=0;i<10;i++)
	  {
		if(i==0)
		{
			b=1;
			d=0x00;
		}
		if(i==1)
		{
			b=1;
			d=0xE4;
		}
	        if(i==2)
		{
			b=0;
			d=0x90;
		}
	        if(i==3)
		{
			b=0;
			d=0xc0;
		}
		if(i==4)
		{
			b=0;
			d=0x64;
		}
	  	if(i==5)
		{
			b=0;
			d=0x48;
		}
		if(i==6)
		{
			b=0;
			d=0x0c;
		}
	  	if(i==7)
		{
			b=1;
			d=0xE0;
		}
		if(i==8)
		{
			b=0;
			d=0x00;
		}
           	if(i==9)
		{
			b=0;
			d=0x60;
		}
	  display(b,d);
	  
	  }

  }
  /* . */
  return 0;

}

void display(int bb,int dd)
{
//turn PB0 off
    PORTB = ((bb <<  PB0));
//turn PD2-PD7 on    
    PORTD = dd;  //display 0 
    _delay_ms(500);

}
