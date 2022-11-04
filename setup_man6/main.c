//Prints a decimal number 
//on the display
#include <avr/io.h>
#include<util/delay.h>
 
int main (void)
{
	
	
 //set PD2-PD7 as output pins 0xFC=0b11111100 (binary)
  DDRD   |= 0xFC;
  //set PB0 as output pin
  DDRB    |= ((1 << DDB0));
 
  while (1) {
	  
//turn PB0 off
    PORTB = ((1 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b00000000;  //display 0 
    
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((1 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b11100100;  //display 1 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b10010000;  //display 2 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b11000000;  //display 3 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b01100100;  //display 4 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b01001000;  //display 5 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b00001100;  //display 6 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((1 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b11100000;  //display 7 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b00000000;  //display 8 
    _delay_ms(500);

    //turn PB0 off
    PORTB = ((0 <<  PB0));
//turn PD2-PD7 on    
    PORTD = 0b01100000;  //display 9 
    _delay_ms(500);
  }

  /* . */
  return 0;

}
