#ifndef MY_DUMMY_CONSTANTS_H
#define MY_DUMMY_CONSTANTS_H

#define F_CPU 16000000UL

#define STRLEN(s) ((sizeof(s)/sizeof(s[0]))-1)
#define HIGH(x) ((x&0xF0)>>4)
#define LOW(x) (x&0x0F)

enum
{
	ALP = 'A',
	TIAN = 'T',
	ENDL = '\n',
	SPACE = ' '
};

unsigned char hexTable[] = "0123456789ABCDEF";

const unsigned char signature[] = "################################################################\r\n#\r\n#	Alp Sayin\r\n#	alp_sayin[at]ieee[dot]org\r\n#	14/11/2011\r\n#	KTH Royal Institute of Technology\r\n#\r\n#	Notes:\r\n#	Welcome to TinyOS 2.1.1 on Atmega128RFA1\r\n#	This is the working demo for BlinkC\r\n#	It should also echo the keys coming from serial port\r\n#\r\n################################################################\r\n";
const int signatureLength = STRLEN(signature);


#endif /* MY_DUMMY_CONSTANTS_H */
