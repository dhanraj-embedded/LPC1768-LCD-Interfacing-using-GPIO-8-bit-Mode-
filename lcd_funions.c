			
#include"lcd_header.h"

			
			  void lcd_com(uint8_t c){

   
	   p->FIOCLR=rs;
	   p->FIOCLR=data;
	    p->FIOSET=(c<<15);
		enable();


	 }
void lcd_char(uint8_t d){

	    p->FIOSET=rs;
	   p->FIOCLR=data;
	    p->FIOSET=(d<<15);
		enable();
		}
void enable(){
p->FIOSET=en;
delay(10);
p->FIOCLR=en ;
delay(10);

}
void delay(uint16_t k){
volatile uint16_t i, j;
for(i=0;i<k;i++) {
for(j=0;j<100;j++) ;
				}
	 }
void lcd_init()
{		 	p->FIODIR=(rs|en|data);
		delay(200);
	
		lcd_com(0x38);

		lcd_com(0x0E);
		lcd_com(0x01);
		}
void lcd_str(char *s)
{ while(*s !='\0'){
lcd_char(*s);
s++;
}
}