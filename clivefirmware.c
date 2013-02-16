#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
    DDRB |= _BV( PB3 );
    while( 1 ) { 
        PORTB |=  _BV( PB3 );
        _delay_ms(200);
        PORTB &=~ _BV( PB3 );
        _delay_ms(200);
    }
}