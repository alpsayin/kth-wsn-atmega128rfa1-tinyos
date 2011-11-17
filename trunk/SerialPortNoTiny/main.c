#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

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

uint8_t myByte = 'U';
 
int main(void) 
{
  uint16_t brr = 16;
  
  CLKPR = 0x80;
  CLKPR = 0x00;
  while(READ_BIT(CLKPR, CLKPCE));
  
  CLR_BIT(UCSR1A, RXC1);
  CLR_BIT(UCSR1A, TXC1);//clear rx & tx complete flags
  
  SET_BIT(UCSR1A, U2X1);  //disable double rate
  
  CLR_BIT(UCSR1B, UDRIE1);
  CLR_BIT(UCSR1B, UCSZ12);  //disable data register empty interrupt & set character size bit 3 to 0 = 0x011
  
  SET_BIT(UCSR1B, RXCIE1);//enable rx intr
  CLR_BIT(UCSR1B, TXCIE1);  // enable tx intr
  
  SET_BIT(UCSR1B, RXEN1); //enable rx
  SET_BIT(UCSR1B, TXEN1);  // enable tx
  
  CLR_BIT(UCSR1C, UMSEL11);
  CLR_BIT(UCSR1C, UMSEL10);
  CLR_BIT(UCSR1C, UPM11);
  CLR_BIT(UCSR1C, UPM10);
  CLR_BIT(UCSR1C, UCPOL1);
  
  SET_BIT(UCSR1C, UCSZ11);
  SET_BIT(UCSR1C, UCSZ10); //set character size
  
  UBRR1H = (uint8_t)(brr>>8);
  UBRR1L = (uint8_t)(brr&0xFF);

  DDRD &= ~(1<<2);
  DDRD |= 1<<3;
  DDRE |= 1<<2; /* set PB0 to output */
  
  sei();

  while(1) 
    {
      FLIP_BIT(PORTE, PORTE2);
      _delay_ms(500);
      //UDR1 = myByte;
      //while(!READ_BIT(UCSR1A, UDRE1)){}
      //CLR_BIT(UCSR1A, TXC1);

      //while(!READ_BIT(UCSR1A, RXC1)){}
      //myByte = UDR1;
      //CLR_BIT(UCSR1A, RXC1);

    }
  return 0;
}

ISR(USART1_RX_vect)
{
  myByte = UDR1;
  UDR1 = myByte;
}

ISR(BADISR_vect)
{
  FLIP_BIT(PORTE, PORTE4);
}
