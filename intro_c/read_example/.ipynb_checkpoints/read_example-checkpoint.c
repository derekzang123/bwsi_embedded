#include "uart.h"
// Include the uart header!

int main(void)
{
  // Variable setup
    uart_init(UART2);
    int ret;
    char flag[64];
    for (int i = 0; i < 64; i ++) {
        flag[i] = 0;
    }
    flag[0] = uart_read(UART2, BLOCKING, & ret);
    int i = 0;
    while (flag[i] != '\n') {
        i += 1;
        flag[i] = uart_read(UART2, BLOCKING, &ret);
    }
    uart_write_str(UART2, flag);
  // Initialize serial

  // Read characters from serial into a string until a newline is received

  // Send the full string back over serial

  return 0;
}
