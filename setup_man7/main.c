//Prints a decimal number 
//on the display
#include <avr/io.h>
#include<util/delay.h>

void display(int,int);
 
int main (void)
{
	
 //set PD2-PD7 as output pins 0xFC=0b11111100 (binary)
  DDRD   |= 0xFC;
  //set PB0 as output pin
  DDRB    |= ((1 << DDB0));
 
  while (1) {
	  
	  display(1,0x00);
	  display(1,0xE4);
	  display(0,0x90);
	  display(0,0xC0);
	  display(0,0x64);
	  display(0,0x48);
	  display(0,0x0C);
	  display(1,0xE0);
	  display(0,0x00);
	  display(0,0x60);

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
