#include <avr/io.h>
#include <avr/interrupt.h>

volatile unsigned Seat_Check = 0;
volatile unsigned Switch_Check = 0;

void Led_Actuator(void)
{
    sei();
    DDRB |= (1 << PB0);                      ///<Set B0 bit in DDRB register

    DDRB &= ~(1 << PB6);                     ///<Clear B6 bit in DDRB register
    DDRB &= ~(1 << PB7);                     ///<Clear B7 bit in DDRB register
    PORTB |= (1 << PB6);                     ///<Set B6 bit in PORTB register
    PORTB |= (1 << PB7);                     ///<Set B7 bit in PORTB register

    PCICR |= (1 << PCIE2) | (1 << PCIE1);    ///<Enable Pin Change Interrupt for port B
    PCMSK1 |= (1 << PCINT13);                ///<Set pin change interrupt for PB6
    PCMSK2 |= (1 << PCINT16);                ///<Set pin change interrupt for PB7

}

///ISR for state change in pin B6
ISR(PCINT1_vect)
{
    ///Check if PB6 is high
    if(!(PINB & (1 << PINB6)))
        Seat_Check = 1;                     ///<Set variable
    else
        Seat_Check = 0;                     ///<Clear variable
}

///ISR for state change in pin B7
ISR(PCINT2_vect)
{
    ///Check if PB7 is high
    if(!(PINB & (1 << PINB7)))
        Switch_Check = 1;                   ///<Set variable
    else
        Switch_Check = 0;                   ///<Clear variable
}
