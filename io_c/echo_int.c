#include "uart.h"
// Include the uart header!

int main(void)
{
  // Variable setup
    uart_init(UART2);
    int ret;
    unsigned myshort[16];
    for (int i = 0; i < 16; i ++) {
        myshort[i] = 0;
    }
    myshort[0] = uart_read(UART2, BLOCKING, & ret);
    int i = 0;
    while (myshort[i] != null) {
        i += 1;
        myshort[i] = uart_read(UART2, BLOCKING, &ret);
    }
    uart_write(UART2, myshort);
  // Initialize serial

  // Read characters from serial into a string until a newline is received

  // Send the full string back over serial
        
  return 0;
}