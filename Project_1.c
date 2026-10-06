#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>


int main() {
    DDRB |= (1 << 3);
    while(1) {
        PORTB |= (1 << 3);
        _delay_ms(500);
        PORTB &= ~(1 << 3);
        _delay_ms(500);
    }
}
