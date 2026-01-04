	  #include<lpc17xx.h>
#include <stdint.h>

#define p LPC_GPIO0
#define rs (1<<10)
#define en (1<<11)
#define data (0xff<<15)
void delay(uint16_t k);
void enable(void);
void lcd_com(uint8_t c);
void lcd_char(uint8_t d);
void lcd_init(void);
void lcd_str(char*s);