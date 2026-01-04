   #include"lcd_header.h"




   int main (){
   lcd_init();
   lcd_com(0x85);
   lcd_str("module") ;
   lcd_com(0xC4);
   lcd_str("ARM-CM3");
    }