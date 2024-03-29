#include <xc.h>
#pragma config WDTE = OFF        // WDT operating mode (WDT enabled regardless of sleep; SWDTEN is ignored)
volatile uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   volatile uint8_t a = 0x05;
   TMR1H = a;
   m = TMR1H;
   volatile uint8_t c = 0x1F;
   TMR1L = c;
   volatile uint8_t b =0x08;
   TMR0H = b;
   volatile uint8_t t = add(a,b,c);
   TMR0L = t;
   return;
}
