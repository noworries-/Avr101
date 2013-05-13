include <avr/io.h>
#include <util/delay.h>

//avrdude -c usbasp -p m128 -U flash:w:blinky-02.hex


int main(void)
{
	PORTB &= ~(1 << PB0);
	PORTB |= (1<<PB1);
	
	DDRB |= (1 << PB0) | (1<< PB1);
    while(1)
    {
      PORTB ^= (1 << PB0) | (1 << PB1);
	  _delay_ms(500);
    }
	
	return 0;
}
