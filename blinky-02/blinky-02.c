include <avr/io.h>
#include <util/delay.h>

//avrdude -c usbasp -p m128 -U flash:w:blinky-02.hex


int main(void)
{
	//set values of pins prior to initilization
	PORTB &= ~(1 << PB0);
	PORTB |= (1<<PB1);
	
	DDRB |= (1 << PB0) | (1<< PB1);
    while(1)
    {
    	//because pins were initilized before hand to opposite values
	//we can use one toggle statement
      PORTB ^= (1 << PB0) | (1 << PB1);
	  _delay_ms(500);
    }
	
	return 0;
}
