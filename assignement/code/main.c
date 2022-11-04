//Prints a decimal number 
//on the display
#include <avr/io.h>
 
int main (void)
{
 int r,p,q;	
	
 //set PD2-PD4 as input pins 0xE3=0b11100011 (binary)
  DDRD   |= 0xE3;
  PORTD  |= 0x1C;
  //set PB5 as output pin
  DDRB    |= ((1 << DDB5));
 
  while (1) {
  
        r=(PIND&(1<<PD2));
        p=(PIND&(1<<PD3));
        q=(PIND&(1<<PD4));
	if((p&&q)||(!q&&r))
        PORTB|=(1<<PB5);
	else
	PORTB&=~(1<<PB5);
  }
  /* . */
  return 0;

}
