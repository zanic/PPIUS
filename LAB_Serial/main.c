/* main.c */
#include "main.h"

int main(void)
{
	char c;
	char exit_str[] = "now exiting loopback mode";
	USART1_Init();
	while(1)
	{
		if (USART1_Dequeue(&c) != 0)
			if (c == 'x')
			{
				USART1_SendChar('\n');
				for (uint8_t i=0; i < sizeof(exit_str)/sizeof(char); i++)
				{
					USART1_SendChar(exit_str[i]);
				}
				USART1_SendChar('\n');
				break;
			}
				
			USART1_SendChar(c);
	}
}
