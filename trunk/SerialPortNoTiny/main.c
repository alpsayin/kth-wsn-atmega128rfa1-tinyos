#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>

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

#define PRINT_REG(x) msgLen = sprintf(msgBuffer, "[%p] = 0x%X\n", &x ,x); printStr(msgBuffer, msgLen);

#define STRLEN(s) ((sizeof(s)/sizeof(s[0]))-1)
#define HIGH(x) ((x&0xF0)>>4)
#define LOW(x) (x&0x0F)

uint8_t hexTable[16] = "0123456789ABCDEF";

volatile uint8_t myByte = 'U';
volatile uint16_t adcVal = 0;
volatile uint8_t adc_flag = 0;
volatile uint8_t serial_flag = 0;

void printStr(uint8_t*, uint8_t);
void print_uint16(uint16_t);
void setupClock(void);
void setupSerial(void);
void setupIO(void);
void setupAdc(void);
void setupAdcSimple(void);

void printStr(uint8_t* str, uint8_t len)
{
  uint8_t i;
  for(i=0; i<len; i++)
    {
      UDR1 = (uint8_t)(str[i]);
      while(!READ_BIT(UCSR1A, UDRE1));
    }
}

void print_uint16(uint16_t val)
{
  uint8_t str[16];
  uint8_t len = 5;
  /*
  str[0] = hexTable[HIGH(val>>8)];
  str[1] = hexTable[LOW(val>>8)];
  str[2] = hexTable[HIGH(val)];
  str[3] = hexTable[LOW(val)];
  str[4] = '\n';
  */
  len = sprintf(str, "0x%X%X\n", val>>8, val&0xFF);
  printStr(str, len);
}
void setupSerial()
{

  uint16_t brr = 16;
  
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

}

void setupClock()
{
  CLKPR = 0x00;
  CLKPR = 0x80;
  CLKPR = 0x00;
  while(READ_BIT(CLKPR, CLKPCE));
}

void setupIO()
{
  DDRE |= 1<<2; /* set PB0 to output */
  DDRD &= ~(1<<2);
  DDRD |= 1<<3;
  DDRF &= ~1;
  SET_BIT(MCUCR, JTD);
  SET_BIT(MCUCR, JTD);
}

void setupAdc()
{
  ADCSRB = (0<<MUX5);
  ADMUX = (1<<REFS1) | (1<<REFS0) | (0<<MUX4) | (0<<MUX3) | (0<<MUX2) | (0<<MUX1) | (0<<MUX0);
  ADCSRA = (1<<ADEN) | (1<<ADIE) | (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);

  do
    {
      printStr("waiting for AVDDOK\n", STRLEN("waiting for AVDDOK\n"));
    }
  while(!READ_BIT(ADCSRB, AVDDOK));
  
  do
    {
      printStr("waiting for REFOK\n", STRLEN("waiting for REFOK\n")); 
    }
  while(!READ_BIT(ADCSRB, REFOK));
  
}
void setupAdcComplex()
{
  SET_BIT(ADCSRA, ADEN);

  SET_BIT(ADMUX, REFS1);
  SET_BIT(ADMUX, REFS0);
  CLR_BIT(ADMUX, ADLAR);
   
  CLR_BIT(ADCSRB, MUX5);
  CLR_BIT(ADMUX, MUX4);
  CLR_BIT(ADMUX, MUX3);
  CLR_BIT(ADMUX, MUX2);
  CLR_BIT(ADMUX, MUX1);
  CLR_BIT(ADMUX, MUX0);

  CLR_BIT(ADCSRB, ACME);
  CLR_BIT(ADCSRB, ADTS2);
  CLR_BIT(ADCSRB, ADTS1);
  CLR_BIT(ADCSRB, ADTS0);

  CLR_BIT(ADCSRA, ADATE);
  CLR_BIT(ADCSRA, ADIF);
  SET_BIT(ADCSRA, ADIE);
  SET_BIT(ADCSRA, ADPS2);
  SET_BIT(ADCSRA, ADPS1);
  SET_BIT(ADCSRA, ADPS0);

  SET_BIT(ADCSRB, ACCH);
  while(READ_BIT(ADCSRB, ACCH));

  
  /*
  SET_BIT(ADCSRC, ADTHT1);
  SET_BIT(ADCSRC, ADTHT0);
  SET_BIT(ADCSRC, ADSUT4);
  SET_BIT(ADCSRC, ADSUT3);
  SET_BIT(ADCSRC, ADSUT2);
  SET_BIT(ADCSRC, ADSUT1);
  SET_BIT(ADCSRC, ADSUT0);
  */
  
  do
    {
      printStr("waiting for AVDDOK\n", STRLEN("waiting for AVDDOK\n"));
    }
  while(!READ_BIT(ADCSRB, AVDDOK));
  
  do
    {
      printStr("waiting for REFOK\n", STRLEN("waiting for REFOK\n")); 
    }
  while(!READ_BIT(ADCSRB, REFOK));

  //  UDR1 = (uint8_t)(ADMUX);
  //while(!READ_BIT(UCSR1A, UDRE1));
  //UDR1 = (uint8_t)(ADCSRA);
  //while(!READ_BIT(UCSR1A, UDRE1));
  //UDR1 = (uint8_t)(ADCSRB);
  //while(!READ_BIT(UCSR1A, UDRE1));
	  
}
 
int main(void) 
{
  uint8_t msgBuffer[128];
  uint8_t msgLen = 0;
  uint32_t voltage = 0;
  setupClock();
  setupSerial();
  setupIO();
  setupAdc();
  sei();
  SET_BIT(ADCSRA, ADSC);
  while(1) 
    {
      PRINT_REG(MCUCR);
      PRINT_REG(ADMUX);
      PRINT_REG(ADCSRB);
      PRINT_REG(SMCR);
      PRINT_REG(PRR0);
      if(serial_flag)
	{
	  UDR1 = (uint8_t)(myByte);
	  while(!READ_BIT(UCSR1A, UDRE1));
	  
	  FLIP_BIT(PORTE, PORTE2);
	  serial_flag = 0;
	}
      if(adc_flag)
	{
	  printStr("ADC = ",STRLEN("ADC = "));
	  print_uint16(adcVal);
	  msgLen = sprintf(msgBuffer, "ADC = %d\n", adcVal);
	  printStr(msgBuffer, msgLen);
	  voltage = ((uint32_t)adcVal*1600)/1024;
	  msgLen = sprintf(msgBuffer, "ADC = %d mV\n", voltage);
	  printStr(msgBuffer, msgLen);
	  adc_flag = 0;
	  _delay_ms(1000);
	  SET_BIT(ADCSRA, ADSC);
	}
      //UDR1 = myByte;
      //while(!READ_BIT(UCSR1A, UDRE1)){}
      //CLR_BIT(UCSR1A, TXC1);

      //while(!READ_BIT(UCSR1A, RXC1)){}
      //myByte = UDR1;
      //CLR_BIT(UCSR1A, RXC1);

    }
  return 0;
}

ISR(ADC_vect, ISR_BLOCK)
{
  adc_flag = 1;
  //adcVal = ADCL;
  //adcVal |= ((uint16_t)ADCH)<<8;
  adcVal = ADC;
  //adcVal = ADCH;
}

ISR(USART1_RX_vect, ISR_BLOCK)
{
  myByte = UDR1;
  serial_flag = 1;
}

ISR(BADISR_vect)
{
  FLIP_BIT(PORTE, PORTE4);
}
