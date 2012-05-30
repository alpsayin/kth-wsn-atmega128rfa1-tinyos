//#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

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

#define PRINT_REG(x) msgLen = sprintf(msgBuffer, "[%p] = 0x%X\r\n", &x ,x); printStr(msgBuffer, msgLen);

#define STRLEN(s) ((sizeof(s)/sizeof(s[0]))-1)
#define HIGH(x) ((x&0xF0)>>4)
#define LOW(x) (x&0x0F)

uint8_t hexTable[16] = "0123456789ABCDEF";

volatile uint8_t myByte0 = 'U';
volatile uint8_t myByte1 = 'X';
volatile uint16_t adcVal = 0;
volatile uint8_t adc_flag = 0;
volatile uint8_t serial_flag = 0;

void printStr(uint8_t*, uint8_t);
void print_uint16(uint16_t);
void setupClock(void);
void setupUSART0(void);
void setupUSART1(void);
void setupIO(void);
void setupAdc(void);
void setupAdcComplex(void);

void printStr(uint8_t* str, uint8_t len)
{
  uint8_t i;
  for(i=0; i<len; i++)
    {
      UDR1 = (uint8_t)(str[i]);
      while(!READ_BIT(UCSR1A, UDRE1));
      
      UDR0 = (uint8_t)(str[i]);
      while(!READ_BIT(UCSR0A, UDRE0));
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
  len = sprintf(str, "0x%X%X\r\n", val>>8, val&0xFF);
  printStr(str, len);
}
void setupUSART1()
{

  uint16_t brr = 12; //if double rate brr=25, else brr=12
  //disable power reduction for usart0                                                                                                                                           
  CLR_BIT(PRR1, PRUSART1);

  //UCSR0A
  //clear rx & tx complete flags
  CLR_BIT(UCSR1A, RXC1);
  CLR_BIT(UCSR1A, TXC1);
  //disable double rate
  CLR_BIT(UCSR1A, U2X1);
  //disable multiprocessor communication mode
  CLR_BIT(UCSR1A, MPCM1);

  // UCSR0B
  //enable rx complete interrupt
  SET_BIT(UCSR1B, RXCIE1);
  //disable tx complete interrupt
  CLR_BIT(UCSR1B, TXCIE1); 
  //disable data register empty interrupt
  CLR_BIT(UCSR1B, UDRIE1);
  //receiver enable
  SET_BIT(UCSR1B, RXEN1);
  //transmitted enabled
  SET_BIT(UCSR1B, TXEN1);
   
  //UCSR0C
  //UMSEL=0 -> async uart
  CLR_BIT(UCSR1C, UMSEL11);
  CLR_BIT(UCSR1C, UMSEL10);
  //UPM=0 -> no parity, UPM=2 -> even parity, UPM=3 -> odd parity
  CLR_BIT(UCSR1C, UPM11);
  CLR_BIT(UCSR1C, UPM10);
  //USBS0=0 -> 1 stop, USBS0=1, 2 stop bits
  CLR_BIT(UCSR1C, USBS0);
  //UCSZ=3 -> 8 data bits
  CLR_BIT(UCSR1B, UCSZ12);  
  SET_BIT(UCSR1C, UCSZ11);
  SET_BIT(UCSR1C, UCSZ10);

  UBRR1H = (uint8_t)(brr>>8);
  UBRR1L = (uint8_t)(brr&0xFF);
 
}

void setupUSART0()
{

  uint16_t brr = 12; //if double rate brr=25, else brr=12

  //disable power reduction for usart0
  CLR_BIT(PRR0, PRUSART0);

  //UCSR0A
  //clear rx & tx complete flags
  CLR_BIT(UCSR0A, RXC0);
  CLR_BIT(UCSR0A, TXC0);
  //disable double rate
  CLR_BIT(UCSR0A, U2X0);
  //disable multiprocessor communication mode
  CLR_BIT(UCSR0A, MPCM0);

  // UCSR0B
  //enable rx complete interrupt
  SET_BIT(UCSR0B, RXCIE0);
  //disable tx complete interrupt
  CLR_BIT(UCSR0B, TXCIE0); 
  //disable data register empty interrupt
  CLR_BIT(UCSR0B, UDRIE0);
  //receiver enable
  SET_BIT(UCSR0B, RXEN0);
  //transmitted enabled
  SET_BIT(UCSR0B, TXEN0);
   
  //UCSR0C
  //UMSEL=0 -> async uart
  CLR_BIT(UCSR0C, UMSEL01);
  CLR_BIT(UCSR0C, UMSEL00);
  //UPM=0 -> no parity, UPM=2 -> even parity, UPM=3 -> odd parity
  CLR_BIT(UCSR0C, UPM01);
  CLR_BIT(UCSR0C, UPM00);
  //USBS0=0 -> 1 stop, USBS0=1, 2 stop bits
  CLR_BIT(UCSR0C, USBS0);
  //UCSZ=3 -> 8 data bits
  CLR_BIT(UCSR0B, UCSZ02);  
  SET_BIT(UCSR0C, UCSZ01);
  SET_BIT(UCSR0C, UCSZ00);

  UBRR0H = (uint8_t)(brr>>8);
  UBRR0L = (uint8_t)(brr&0xFF);
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
  DDRE |= 1<<2;

  CLR_BIT(DDRE, 0);
  SET_BIT(DDRE, 1);
  SET_BIT(DDRE, 2);
  SET_BIT(DDRE, 3);
  SET_BIT(DDRE, 4);
  CLR_BIT(DDRE, 5);

  CLR_BIT(DDRD, 2);
  SET_BIT(DDRD, 3);


  DDRF = 0;
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
      printStr("waiting for AVDDOK\r\n", STRLEN("waiting for AVDDOK\r\n"));
    }
  while(!READ_BIT(ADCSRB, AVDDOK));
  
  do
    {
      printStr("waiting for REFOK\r\n", STRLEN("waiting for REFOK\r\n")); 
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
      printStr("waiting for AVDDOK\r\n", STRLEN("waiting for AVDDOK\r\n"));
    }
  while(!READ_BIT(ADCSRB, AVDDOK));
  
  do
    {
      printStr("waiting for REFOK\r\n", STRLEN("waiting for REFOK\r\n")); 
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
  setupUSART0();
  setupUSART1();
  setupIO();
  setupAdc();
  sei();
  SET_BIT(ADCSRA, ADSC);
  
  SET_BIT(PORTE, 2);
  SET_BIT(PORTE, 3);
  SET_BIT(PORTE, 4);

  printStr("starting while loop\r\n", strlen("starting while loop\r\n"));
  while(1) 
    {
      //PRINT_REG(MCUCR);
      //PRINT_REG(ADMUX);
      //PRINT_REG(ADCSRB);
      //PRINT_REG(SMCR);
      //PRINT_REG(PRR0);
      if(serial_flag==1)
	{
  	  serial_flag = 0;
  	}
      if(serial_flag==2)
	{
	  serial_flag = 0;
	}
      if(adc_flag)
  	{
  	  printStr("\r\nADC(hex) = ",STRLEN("ADC(hex) = "));
  	  print_uint16(adcVal);
  	  msgLen = sprintf(msgBuffer, "ADC(dec) = %d\r\n", adcVal);
  	  printStr(msgBuffer, msgLen);
  	  voltage = ((uint32_t)adcVal*1600)/1024;
  	  msgLen = sprintf(msgBuffer, "ADC(Volts) = %d mV\r\n", voltage);
  	  printStr(msgBuffer, msgLen);
  	  adc_flag = 0;
  	  SET_BIT(ADCSRA, ADSC);
	  _delay_ms(1000);
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

ISR(USART0_RX_vect, ISR_BLOCK)
{
  myByte0=UDR0;
  UDR0=myByte0; //echo
  UDR1=myByte0; //forward
  serial_flag=1;
}
ISR(USART1_RX_vect, ISR_BLOCK)
{
  myByte1 = UDR1;
  UDR1=myByte1; //echo
  UDR0=myByte1; //forward
  serial_flag=2;
}
ISR(BADISR_vect)
{
  FLIP_BIT(PORTE, PORTE4);
}
