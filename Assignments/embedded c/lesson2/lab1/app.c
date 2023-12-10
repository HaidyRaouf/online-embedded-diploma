#include "uart.h"
unsigned char string_buffer[100]="learn-in-depth:Haidy";
unsigned char const string_buffer2[100]="learn-in-depth:Haidy";
void main(void)
{
	Uart_Send_String(string_buffer);
}