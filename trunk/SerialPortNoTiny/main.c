#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#define SET_BIT(port, bit)    ((port) |= _BV(bit))
#define CLR_BIT(port, bit)    ((port) &= ~_BV(bit))
#define READ_BIT(port, bit)   (((port) & _BV(bit)) != 0)
#define FLIP_BIT(port, bit)   ((port) ^= _BV(bit))
#define WRITE_BIT(port, bit, value) \
  if (value) SET_BIT((port), (bit)); \
  else CLR_BIT((port), (bit))

// Bit operators using bit flag mask
#define SET_FLAG(port, flag)  ((port) |= (flag))
#define CLR_FLAG(port, flag)  ((port) &= ~(flag))
#define READ_FLAG(port, flag) ((port) & (flag))

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
      SET_BIT(PORTE, PORTE2);
      PORTE &= ~(1<<2); /* LED on */
      delayms(100);
      PORTE |= 1<<2; /* LED off */
      delayms(900);
    }
  return 0;
}
