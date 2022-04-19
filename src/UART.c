#include <avr/io.h>
#include <util/delay.h>
#include "UART.h"

void UART_init(uint16_t ubrr_value)
{
    BAUD_LOW; // Set Baud rate low
    BAUD_HIGH;// Set Baud rate high
    SET_CHAR; // Set data bits
    ENABLE_Rx_Tx; // Enable Transmitter and Receiver
}


void UART_write(char val)
{
    while(WAIT_Tx)
    {
        //Do nothing
    }
    DATA_ReadWrite=val;
}
