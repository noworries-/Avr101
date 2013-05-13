#include <avr/io.h>
#include <util/delay.h>

//avrdude -c usbasp -p m128 -U flash:w:blinky-01.hex

int main(void)
{
	DDRB |= (1 << PB0);
    while(1)
    {
      PORTB ^= (1 << PB0);
	  _delay_ms(2000);
    }
	
	return 0;
}