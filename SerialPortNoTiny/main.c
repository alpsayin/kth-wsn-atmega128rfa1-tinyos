#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void delayms(uint16_t millis) {
  uint16_t loop;
  millis = (millis/10)*10;
  while ( millis ) 
    {
      _delay_ms(10);
      millis-=10;
    }
}

int main(void) {
  DDRE |= 1<<2; /* set PB0 to output */
  while(1) 
    {
      PORTE &= ~(1<<2); /* LED on */
      delayms(100);
      PORTE |= 1<<2; /* LED off */
      delayms(900);
    }
  return 0;
}
