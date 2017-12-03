/* usart.c */
#include "usart.h"

// RX FIFO buffer
char RX_BUFFER[BUFSIZE];
int RX_BUFFER_HEAD, RX_BUFFER_TAIL;
uint8_t TxReady;				// TX state flag
