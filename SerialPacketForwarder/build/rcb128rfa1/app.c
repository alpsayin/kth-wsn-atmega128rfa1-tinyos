#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/usr/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 431 "/usr/lib/ncc/nesc_nx.h"
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x402ab0a8, int arg_0x402ab200, size_t arg_0x402ab398);
#line 137
extern char *strncpy(char *arg_0x402b31a0, const char *arg_0x402b3338, size_t arg_0x402b34d0);
# 71 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x402bc450, const void *arg_0x402bc5e8);
# 23 "/opt/tinyos-main/src/tinyos-main/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 416 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/iom128rfa1.h" 3
struct __reg_TIFR0 {
  unsigned int tov0 : 1;
  unsigned int ocf0a : 1;
  unsigned int ocf0b : 1;
  unsigned int  : 5;
};
#line 438
struct __reg_TIFR1 {
  unsigned int tov1 : 1;
  unsigned int ocf1a : 1;
  unsigned int ocf1b : 1;
  unsigned int ocf1c : 1;
  unsigned int  : 1;
  unsigned int icf1 : 1;
  unsigned int  : 2;
};
#line 465
struct __reg_TIFR2 {
  unsigned int tov2 : 1;
  unsigned int ocf2a : 1;
  unsigned int ocf2b : 1;
  unsigned int  : 5;
};
#line 487
struct __reg_TIFR3 {
  unsigned int tov3 : 1;
  unsigned int ocf3a : 1;
  unsigned int ocf3b : 1;
  unsigned int ocf3c : 1;
  unsigned int  : 1;
  unsigned int icf3 : 1;
  unsigned int  : 2;
};
#line 514
struct __reg_TIFR4 {
  unsigned int tov4 : 1;
  unsigned int ocf4a : 1;
  unsigned int ocf4b : 1;
  unsigned int ocf4c : 1;
  unsigned int  : 1;
  unsigned int icf4 : 1;
  unsigned int  : 2;
};
#line 541
struct __reg_TIFR5 {
  unsigned int tov5 : 1;
  unsigned int ocf5a : 1;
  unsigned int ocf5b : 1;
  unsigned int ocf5c : 1;
  unsigned int  : 1;
  unsigned int icf5 : 1;
  unsigned int  : 2;
};
#line 568
struct __reg_PCIFR {
  unsigned int pcif : 3;
  unsigned int  : 5;
};
#line 588
struct __reg_EIFR {
  unsigned int intf : 8;
};
#line 612
struct __reg_EIMSK {
  unsigned int intm : 8;
};
#line 636
struct __reg_GPIOR0 {
  unsigned int gpior0 : 8;
};
#line 669
struct __reg_EECR {
  unsigned int eere : 1;
  unsigned int eepe : 1;
  unsigned int eempe : 1;
  unsigned int eerie : 1;
  unsigned int eepm : 2;
  unsigned int  : 2;
};
#line 715
struct __reg_GTCCR {
  unsigned int psrsync : 1;
  unsigned int psrasy : 1;
  unsigned int  : 5;
  unsigned int tsm : 1;
};
#line 739
struct __reg_TCCR0A {
  unsigned int wgm0 : 2;
  unsigned int  : 2;
  unsigned int com0b : 2;
  unsigned int com0a : 2;
};
#line 764
struct __reg_TCCR0B {
  unsigned int cs0 : 3;
  unsigned int wgm02 : 1;
  unsigned int  : 2;
  unsigned int foc0b : 1;
  unsigned int foc0a : 1;
};
#line 832
struct __reg_GPIOR1 {
  unsigned int gpior1 : 8;
};
#line 856
struct __reg_GPIOR2 {
  unsigned int gpior2 : 8;
};
#line 880
struct __reg_SPCR {
  unsigned int spr : 2;
  unsigned int cpha : 1;
  unsigned int cpol : 1;
  unsigned int mstr : 1;
  unsigned int dord : 1;
  unsigned int spe : 1;
  unsigned int spie : 1;
};
#line 910
struct __reg_SPSR {
  unsigned int spi2x : 1;
  unsigned int  : 5;
  unsigned int wcol : 1;
  unsigned int spif : 1;
};
#line 946
struct __reg_ACSR {
  unsigned int acis : 2;
  unsigned int acic : 1;
  unsigned int acie : 1;
  unsigned int aci : 1;
  unsigned int aco : 1;
  unsigned int acbg : 1;
  unsigned int acd : 1;
};
#line 976
struct __reg_OCDR {
  unsigned int ocdr : 8;
};
#line 1001
struct __reg_SMCR {
  unsigned int se : 1;
  unsigned int sm : 3;
  unsigned int  : 4;
};
#line 1023
struct __reg_MCUSR {
  unsigned int porf : 1;
  unsigned int extrf : 1;
  unsigned int borf : 1;
  unsigned int wdrf : 1;
  unsigned int jtrf : 1;
  unsigned int  : 3;
};
#line 1049
struct __reg_MCUCR {
  unsigned int ivce : 1;
  unsigned int ivsel : 1;
  unsigned int  : 2;
  unsigned int pud : 1;
  unsigned int  : 2;
  unsigned int jtd : 1;
};
#line 1074
struct __reg_SPMCSR {
  unsigned int spmen : 1;
  unsigned int pgers : 1;
  unsigned int pgwrt : 1;
  unsigned int blbset : 1;
  unsigned int rwwsre : 1;
  unsigned int sigrd : 1;
  unsigned int rwwsb : 1;
  unsigned int spmie : 1;
};
#line 1105
struct __reg_RAMPZ {
  unsigned int rampz : 2;
  unsigned int  : 6;
};
#line 1129
struct __reg_SREG {
  unsigned int c : 1;
  unsigned int z : 1;
  unsigned int n : 1;
  unsigned int v : 1;
  unsigned int s : 1;
  unsigned int h : 1;
  unsigned int t : 1;
  unsigned int i : 1;
};
#line 1160
struct __reg_WDTCSR {
  unsigned int wdp : 3;
  unsigned int wde : 1;
  unsigned int wdce : 1;
  unsigned int  : 1;
  unsigned int wdie : 1;
  unsigned int wdif : 1;
};
#line 1189
struct __reg_CLKPR {
  unsigned int clkps : 4;
  unsigned int  : 3;
  unsigned int clkpce : 1;
};
#line 1212
struct __reg_PRR2 {
  unsigned int prram : 4;
  unsigned int  : 4;
};
#line 1233
struct __reg_PRR0 {
  unsigned int pradc : 1;
  unsigned int prusart0 : 1;
  unsigned int prspi : 1;
  unsigned int prtim1 : 1;
  unsigned int prpga : 1;
  unsigned int prtim0 : 1;
  unsigned int prtim2 : 1;
  unsigned int prtwi : 1;
};
#line 1264
struct __reg_PRR1 {
  unsigned int prusart : 3;
  unsigned int prtim3 : 1;
  unsigned int prtim4 : 1;
  unsigned int prtim5 : 1;
  unsigned int prtrx24 : 1;
  unsigned int  : 1;
};
#line 1292
struct __reg_OSCCAL {
  unsigned int cal : 8;
};
#line 1316
struct __reg_BGCR {
  unsigned int bgcal : 3;
  unsigned int bgcal_fine : 4;
  unsigned int  : 1;
};
#line 1341
struct __reg_PCICR {
  unsigned int pcie : 3;
  unsigned int  : 5;
};
#line 1361
struct __reg_EICRA {
  unsigned int isc0 : 2;
  unsigned int isc1 : 2;
  unsigned int isc2 : 2;
  unsigned int isc3 : 2;
};
#line 1388
struct __reg_EICRB {
  unsigned int isc4 : 2;
  unsigned int isc5 : 2;
  unsigned int isc6 : 2;
  unsigned int isc7 : 2;
};
#line 1429
struct __reg_PCMSK1 {
  unsigned int pcint : 2;
  unsigned int pcint1 : 6;
};
#line 1454
struct __reg_PCMSK2 {
  unsigned int pcint1 : 4;
  unsigned int pcint2 : 4;
};
#line 1479
struct __reg_TIMSK0 {
  unsigned int toie0 : 1;
  unsigned int ocie0a : 1;
  unsigned int ocie0b : 1;
  unsigned int  : 5;
};
#line 1501
struct __reg_TIMSK1 {
  unsigned int toie1 : 1;
  unsigned int ocie1a : 1;
  unsigned int ocie1b : 1;
  unsigned int ocie1c : 1;
  unsigned int  : 1;
  unsigned int icie1 : 1;
  unsigned int  : 2;
};
#line 1528
struct __reg_TIMSK2 {
  unsigned int toie2 : 1;
  unsigned int ocie2a : 1;
  unsigned int ocie2b : 1;
  unsigned int  : 5;
};
#line 1551
struct __reg_TIMSK3 {
  unsigned int toie3 : 1;
  unsigned int ocie3a : 1;
  unsigned int ocie3b : 1;
  unsigned int ocie3c : 1;
  unsigned int  : 1;
  unsigned int icie3 : 1;
  unsigned int  : 2;
};
#line 1578
struct __reg_TIMSK4 {
  unsigned int toie4 : 1;
  unsigned int ocie4a : 1;
  unsigned int ocie4b : 1;
  unsigned int ocie4c : 1;
  unsigned int  : 1;
  unsigned int icie4 : 1;
  unsigned int  : 2;
};
#line 1605
struct __reg_TIMSK5 {
  unsigned int toie5 : 1;
  unsigned int ocie5a : 1;
  unsigned int ocie5b : 1;
  unsigned int ocie5c : 1;
  unsigned int  : 1;
  unsigned int icie5 : 1;
  unsigned int  : 2;
};
#line 1632
struct __reg_NEMCR {
  unsigned int  : 4;
  unsigned int aeam : 2;
  unsigned int eneam : 1;
  unsigned int  : 1;
};
#line 1654
struct __reg_ADCSRC {
  unsigned int adsut : 5;
  unsigned int res0 : 1;
  unsigned int adtht : 2;
};
#line 1689
struct __reg_ADCSRA {
  unsigned int adps : 3;
  unsigned int adie : 1;
  unsigned int adif : 1;
  unsigned int adate : 1;
  unsigned int adsc : 1;
  unsigned int aden : 1;
};
#line 1718
struct __reg_ADCSRB {
  unsigned int adts : 3;
  unsigned int mux5 : 1;
  unsigned int acch : 1;
  unsigned int refok : 1;
  unsigned int acme : 1;
  unsigned int avddok : 1;
};
#line 1747
struct __reg_ADMUX {
  unsigned int mux : 5;
  unsigned int adlar : 1;
  unsigned int refs : 2;
};
#line 1773
struct __reg_DIDR2 {
  unsigned int adc8d : 1;
  unsigned int adc9d : 1;
  unsigned int adc10d : 1;
  unsigned int adc11d : 1;
  unsigned int adc12d : 1;
  unsigned int adc13d : 1;
  unsigned int adc14d : 1;
  unsigned int adc15d : 1;
};
#line 1804
struct __reg_DIDR0 {
  unsigned int adc0d : 1;
  unsigned int adc1d : 1;
  unsigned int adc2d : 1;
  unsigned int adc3d : 1;
  unsigned int adc4d : 1;
  unsigned int adc5d : 1;
  unsigned int adc6d : 1;
  unsigned int adc7d : 1;
};
#line 1835
struct __reg_DIDR1 {
  unsigned int ain0d : 1;
  unsigned int ain1d : 1;
  unsigned int  : 6;
};
#line 1855
struct __reg_TCCR1A {
  unsigned int wgm1 : 2;
  unsigned int com1c : 2;
  unsigned int com1b : 2;
  unsigned int com1a : 2;
};
#line 1882
struct __reg_TCCR1B {
  unsigned int cs1 : 3;
  unsigned int wgm1 : 2;
  unsigned int  : 1;
  unsigned int ices1 : 1;
  unsigned int icnc1 : 1;
};
#line 1909
struct __reg_TCCR1C {
  unsigned int  : 5;
  unsigned int foc1c : 1;
  unsigned int foc1b : 1;
  unsigned int foc1a : 1;
};
#line 1956
struct __reg_TCCR3A {
  unsigned int wgm3 : 2;
  unsigned int com3c : 2;
  unsigned int com3b : 2;
  unsigned int com3a : 2;
};
#line 1983
struct __reg_TCCR3B {
  unsigned int cs3 : 3;
  unsigned int wgm3 : 2;
  unsigned int  : 1;
  unsigned int ices3 : 1;
  unsigned int icnc3 : 1;
};
#line 2010
struct __reg_TCCR3C {
  unsigned int  : 5;
  unsigned int foc3c : 1;
  unsigned int foc3b : 1;
  unsigned int foc3a : 1;
};
#line 2057
struct __reg_TCCR4A {
  unsigned int wgm4 : 2;
  unsigned int com4c : 2;
  unsigned int com4b : 2;
  unsigned int com4a : 2;
};
#line 2084
struct __reg_TCCR4B {
  unsigned int cs4 : 3;
  unsigned int wgm4 : 2;
  unsigned int  : 1;
  unsigned int ices4 : 1;
  unsigned int icnc4 : 1;
};
#line 2111
struct __reg_TCCR4C {
  unsigned int  : 5;
  unsigned int foc4c : 1;
  unsigned int foc4b : 1;
  unsigned int foc4a : 1;
};
#line 2158
struct __reg_TCCR2A {
  unsigned int wgm2 : 2;
  unsigned int  : 2;
  unsigned int com2b : 2;
  unsigned int com2a : 2;
};
#line 2183
struct __reg_TCCR2B {
  unsigned int cs2 : 3;
  unsigned int wgm22 : 1;
  unsigned int  : 2;
  unsigned int foc2b : 1;
  unsigned int foc2a : 1;
};
#line 2251
struct __reg_ASSR {
  unsigned int tcr2bub : 1;
  unsigned int tcr2aub : 1;
  unsigned int ocr2bub : 1;
  unsigned int ocr2aub : 1;
  unsigned int tcn2ub : 1;
  unsigned int as2 : 1;
  unsigned int exclk : 1;
  unsigned int exclkamr : 1;
};
#line 2296
struct __reg_TWSR {
  unsigned int twps : 2;
  unsigned int  : 1;
  unsigned int tws : 5;
};
#line 2321
struct __reg_TWAR {
  unsigned int twgce : 1;
  unsigned int twa : 7;
};
#line 2360
struct __reg_TWCR {
  unsigned int twie : 1;
  unsigned int  : 1;
  unsigned int twen : 1;
  unsigned int twwc : 1;
  unsigned int twsto : 1;
  unsigned int twsta : 1;
  unsigned int twea : 1;
  unsigned int twint : 1;
};
#line 2390
struct __reg_TWAMR {
  unsigned int  : 1;
  unsigned int twam : 7;
};
#line 2421
struct __reg_UCSR0A {
  unsigned int mpcm0 : 1;
  unsigned int u2x0 : 1;
  unsigned int upe0 : 1;
  unsigned int dor0 : 1;
  unsigned int fe0 : 1;
  unsigned int udre0 : 1;
  unsigned int txc0 : 1;
  unsigned int rxc0 : 1;
};
#line 2452
struct __reg_UCSR0B {
  unsigned int txb80 : 1;
  unsigned int rxb80 : 1;
  unsigned int ucsz02 : 1;
  unsigned int txen0 : 1;
  unsigned int rxen0 : 1;
  unsigned int udrie0 : 1;
  unsigned int txcie0 : 1;
  unsigned int rxcie0 : 1;
};
#line 2483
struct __reg_UCSR0C {
  unsigned int ucpol0 : 1;
  unsigned int ucsz0 : 2;
  unsigned int ucpha0 : 1;
  unsigned int udord0 : 1;
  unsigned int usbs0 : 1;
  unsigned int upm0 : 2;
  unsigned int umsel0 : 2;
};
#line 2538
struct __reg_UCSR1A {
  unsigned int mpcm1 : 1;
  unsigned int u2x1 : 1;
  unsigned int upe1 : 1;
  unsigned int dor1 : 1;
  unsigned int fe1 : 1;
  unsigned int udre1 : 1;
  unsigned int txc1 : 1;
  unsigned int rxc1 : 1;
};
#line 2569
struct __reg_UCSR1B {
  unsigned int txb81 : 1;
  unsigned int rxb81 : 1;
  unsigned int ucsz12 : 1;
  unsigned int txen1 : 1;
  unsigned int rxen1 : 1;
  unsigned int udrie1 : 1;
  unsigned int txcie1 : 1;
  unsigned int rxcie1 : 1;
};
#line 2600
struct __reg_UCSR1C {
  unsigned int ucpol1 : 1;
  unsigned int ucsz1 : 2;
  unsigned int ucpha1 : 1;
  unsigned int udord1 : 1;
  unsigned int usbs1 : 1;
  unsigned int upm1 : 2;
  unsigned int umsel1 : 2;
};
#line 2653
struct __reg_SCCR0 {
  unsigned int sccmp : 3;
  unsigned int sctse : 1;
  unsigned int sccksel : 1;
  unsigned int scen : 1;
  unsigned int scmbts : 1;
  unsigned int scres : 1;
};
#line 2682
struct __reg_SCCR1 {
  unsigned int scenbo : 1;
  unsigned int  : 7;
};
#line 2700
struct __reg_SCSR {
  unsigned int scbsy : 1;
  unsigned int  : 7;
};
#line 2718
struct __reg_SCIRQM {
  unsigned int irqmcp : 3;
  unsigned int irqmof : 1;
  unsigned int irqmbo : 1;
  unsigned int  : 3;
};
#line 2742
struct __reg_SCIRQS {
  unsigned int irqscp : 3;
  unsigned int irqsof : 1;
  unsigned int irqsbo : 1;
  unsigned int  : 3;
};
#line 2766
struct __reg_SCCNTLL {
  unsigned int sccntll : 8;
};
#line 2790
struct __reg_SCCNTLH {
  unsigned int sccntlh : 8;
};
#line 2814
struct __reg_SCCNTHL {
  unsigned int sccnthl : 8;
};
#line 2838
struct __reg_SCCNTHH {
  unsigned int sccnthh : 8;
};
#line 2862
struct __reg_SCBTSRLL {
  unsigned int scbtsrll : 8;
};
#line 2886
struct __reg_SCBTSRLH {
  unsigned int scbtsrlh : 8;
};
#line 2910
struct __reg_SCBTSRHL {
  unsigned int scbtsrhl : 8;
};
#line 2934
struct __reg_SCBTSRHH {
  unsigned int scbtsrhh : 8;
};
#line 2958
struct __reg_SCTSRLL {
  unsigned int sctsrll : 8;
};
#line 2982
struct __reg_SCTSRLH {
  unsigned int sctsrlh : 8;
};
#line 3006
struct __reg_SCTSRHL {
  unsigned int sctsrhl : 8;
};
#line 3030
struct __reg_SCTSRHH {
  unsigned int sctsrhh : 8;
};
#line 3054
struct __reg_SCOCR3LL {
  unsigned int scocr3ll : 8;
};
#line 3078
struct __reg_SCOCR3LH {
  unsigned int scocr3lh : 8;
};
#line 3102
struct __reg_SCOCR3HL {
  unsigned int scocr3hl : 8;
};
#line 3126
struct __reg_SCOCR3HH {
  unsigned int scocr3hh : 8;
};
#line 3150
struct __reg_SCOCR2LL {
  unsigned int scocr2ll : 8;
};
#line 3174
struct __reg_SCOCR2LH {
  unsigned int scocr2lh : 8;
};
#line 3198
struct __reg_SCOCR2HL {
  unsigned int scocr2hl : 8;
};
#line 3222
struct __reg_SCOCR2HH {
  unsigned int scocr2hh : 8;
};
#line 3246
struct __reg_SCOCR1LL {
  unsigned int scocr1ll : 8;
};
#line 3270
struct __reg_SCOCR1LH {
  unsigned int scocr1lh : 8;
};
#line 3294
struct __reg_SCOCR1HL {
  unsigned int scocr1hl : 8;
};
#line 3318
struct __reg_SCOCR1HH {
  unsigned int scocr1hh : 8;
};
#line 3342
struct __reg_TCCR5A {
  unsigned int wgm5 : 2;
  unsigned int com5c : 2;
  unsigned int com5b : 2;
  unsigned int com5a : 2;
};
#line 3369
struct __reg_TCCR5B {
  unsigned int cs5 : 3;
  unsigned int wgm5 : 2;
  unsigned int  : 1;
  unsigned int ices5 : 1;
  unsigned int icnc5 : 1;
};
#line 3396
struct __reg_TCCR5C {
  unsigned int  : 5;
  unsigned int foc5c : 1;
  unsigned int foc5b : 1;
  unsigned int foc5a : 1;
};
#line 3443
struct __reg_LLCR {
  unsigned int llencal : 1;
  unsigned int llshort : 1;
  unsigned int lltco : 1;
  unsigned int llcal : 1;
  unsigned int llcomp : 1;
  unsigned int lldone : 1;
  unsigned int  : 2;
};
#line 3471
struct __reg_LLDRL {
  unsigned int lldrl : 4;
  unsigned int  : 4;
};
#line 3492
struct __reg_LLDRH {
  unsigned int lldrh : 5;
  unsigned int  : 3;
};
#line 3514
struct __reg_DRTRAM3 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3535
struct __reg_DRTRAM2 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3556
struct __reg_DRTRAM1 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3577
struct __reg_DRTRAM0 {
  unsigned int  : 4;
  unsigned int endrt : 1;
  unsigned int drtswok : 1;
  unsigned int  : 2;
};
#line 3598
struct __reg_DPDS0 {
  unsigned int pbdrv : 2;
  unsigned int pddrv : 2;
  unsigned int pedrv : 2;
  unsigned int pfdrv : 2;
};
#line 3625
struct __reg_DPDS1 {
  unsigned int pgdrv : 2;
  unsigned int  : 6;
};
#line 3644
struct __reg_TRXPR {
  unsigned int trxrst : 1;
  unsigned int slptr : 1;
  unsigned int  : 6;
};
#line 3664
struct __reg_AES_CTRL {
  unsigned int  : 2;
  unsigned int aes_im : 1;
  unsigned int aes_dir : 1;
  unsigned int  : 1;
  unsigned int aes_mode : 1;
  unsigned int  : 1;
  unsigned int aes_request : 1;
};
#line 3697
struct __reg_AES_STATUS {
  unsigned int aes_done : 1;
  unsigned int  : 6;
  unsigned int aes_er : 1;
};
#line 3717
struct __reg_AES_STATE {
  unsigned int aes_state : 8;
};
#line 3741
struct __reg_AES_KEY {
  unsigned int aes_key : 8;
};
#line 3765
struct __reg_TRX_STATUS {
  unsigned int trx_status : 5;
  unsigned int tst_status : 1;
  unsigned int cca_status : 1;
  unsigned int cca_done : 1;
};
#line 3813
struct __reg_TRX_STATE {
  unsigned int trx_cmd : 5;
  unsigned int trac_status : 3;
};
#line 3859
struct __reg_TRX_CTRL_1 {
  unsigned int  : 5;
  unsigned int tx_auto_crc_on : 1;
  unsigned int irq_2_ext_en : 1;
  unsigned int pa_ext_en : 1;
};
#line 3881
struct __reg_PHY_TX_PWR {
  unsigned int tx_pwr : 4;
  unsigned int pa_lt : 2;
  unsigned int pa_buf_lt : 2;
};
#line 3918
struct __reg_PHY_RSSI {
  unsigned int rssi : 5;
  unsigned int rnd_value : 2;
  unsigned int rx_crc_valid : 1;
};
#line 3952
struct __reg_PHY_ED_LEVEL {
  unsigned int ed_level : 8;
};
#line 3983
struct __reg_PHY_CC_CCA {
  unsigned int channel : 5;
  unsigned int cca_mode : 2;
  unsigned int cca_request : 1;
};
#line 4032
struct __reg_CCA_THRES {
  unsigned int cca_ed_thres : 4;
  unsigned int cca_cs_thres : 4;
};
#line 4057
struct __reg_RX_CTRL {
  unsigned int pdt_thres : 4;
  unsigned int  : 4;
};
#line 4083
struct __reg_SFD_VALUE {
  unsigned int sfd_value : 8;
};
#line 4111
struct __reg_TRX_CTRL_2 {
  unsigned int oqpsk_data_rate : 2;
  unsigned int  : 5;
  unsigned int rx_safe_mode : 1;
};
#line 4139
struct __reg_ANT_DIV {
  unsigned int ant_ctrl : 2;
  unsigned int ant_ext_sw_en : 1;
  unsigned int ant_div_en : 1;
  unsigned int  : 3;
  unsigned int ant_sel : 1;
};
#line 4174
struct __reg_IRQ_MASK {
  unsigned int pll_lock_en : 1;
  unsigned int pll_unlock_en : 1;
  unsigned int rx_start_en : 1;
  unsigned int rx_end_en : 1;
  unsigned int cca_ed_done_en : 1;
  unsigned int ami_en : 1;
  unsigned int tx_end_en : 1;
  unsigned int awake_en : 1;
};
#line 4205
struct __reg_IRQ_STATUS {
  unsigned int pll_lock : 1;
  unsigned int pll_unlock : 1;
  unsigned int rx_start : 1;
  unsigned int rx_end : 1;
  unsigned int cca_ed_done : 1;
  unsigned int ami : 1;
  unsigned int tx_end : 1;
  unsigned int awake : 1;
};
#line 4236
struct __reg_VREG_CTRL {
  unsigned int  : 2;
  unsigned int dvdd_ok : 1;
  unsigned int dvreg_ext : 1;
  unsigned int  : 2;
  unsigned int avdd_ok : 1;
  unsigned int avreg_ext : 1;
};
#line 4268
struct __reg_BATMON {
  unsigned int batmon_vth : 4;
  unsigned int batmon_hr : 1;
  unsigned int batmon_ok : 1;
  unsigned int bat_low_en : 1;
  unsigned int bat_low : 1;
};
#line 4301
struct __reg_XOSC_CTRL {
  unsigned int xtal_trim : 4;
  unsigned int xtal_mode : 4;
};
#line 4331
struct __reg_RX_SYN {
  unsigned int rx_pdt_level : 4;
  unsigned int  : 3;
  unsigned int rx_pdt_dis : 1;
};
#line 4359
struct __reg_XAH_CTRL_1 {
  unsigned int  : 1;
  unsigned int aack_prom_mode : 1;
  unsigned int aack_ack_time : 1;
  unsigned int  : 1;
  unsigned int aack_upld_res_ft : 1;
  unsigned int aack_fltr_res_ft : 1;
  unsigned int  : 2;
};
#line 4390
struct __reg_FTN_CTRL {
  unsigned int  : 7;
  unsigned int ftn_start : 1;
};
#line 4408
struct __reg_PLL_CF {
  unsigned int  : 7;
  unsigned int pll_cf_start : 1;
};
#line 4426
struct __reg_PLL_DCU {
  unsigned int  : 7;
  unsigned int pll_dcu_start : 1;
};
#line 4444
struct __reg_PART_NUM {
  unsigned int part_num : 8;
};
#line 4472
struct __reg_VERSION_NUM {
  unsigned int version_num : 8;
};
#line 4501
struct __reg_MAN_ID_0 {
  unsigned int man_id_0 : 8;
};
#line 4529
struct __reg_MAN_ID_1 {
  unsigned int man_id_1 : 8;
};
#line 4557
struct __reg_SHORT_ADDR_0 {
  unsigned int short_addr_0 : 8;
};
#line 4581
struct __reg_SHORT_ADDR_1 {
  unsigned int short_addr_1 : 8;
};
#line 4605
struct __reg_PAN_ID_0 {
  unsigned int pan_id_0 : 8;
};
#line 4629
struct __reg_PAN_ID_1 {
  unsigned int pan_id_1 : 8;
};
#line 4653
struct __reg_IEEE_ADDR_0 {
  unsigned int ieee_addr_0 : 8;
};
#line 4677
struct __reg_IEEE_ADDR_1 {
  unsigned int ieee_addr_1 : 8;
};
#line 4701
struct __reg_IEEE_ADDR_2 {
  unsigned int ieee_addr_2 : 8;
};
#line 4725
struct __reg_IEEE_ADDR_3 {
  unsigned int ieee_addr_3 : 8;
};
#line 4749
struct __reg_IEEE_ADDR_4 {
  unsigned int ieee_addr_4 : 8;
};
#line 4773
struct __reg_IEEE_ADDR_5 {
  unsigned int ieee_addr_5 : 8;
};
#line 4797
struct __reg_IEEE_ADDR_6 {
  unsigned int ieee_addr_6 : 8;
};
#line 4821
struct __reg_IEEE_ADDR_7 {
  unsigned int ieee_addr_7 : 8;
};
#line 4845
struct __reg_XAH_CTRL_0 {
  unsigned int slotted_operation : 1;
  unsigned int max_csma_retries : 3;
  unsigned int max_frame_retries : 4;
};
#line 4876
struct __reg_CSMA_SEED_0 {
  unsigned int csma_seed_0 : 8;
};
#line 4900
struct __reg_CSMA_SEED_1 {
  unsigned int csma_seed_1 : 3;
  unsigned int aack_i_am_coord : 1;
  unsigned int aack_dis_ack : 1;
  unsigned int aack_set_pd : 1;
  unsigned int aack_fvn_mode : 2;
};
#line 4928
struct __reg_CSMA_BE {
  unsigned int min_be : 4;
  unsigned int max_be : 4;
};
#line 4953
struct __reg_TST_CTRL_DIGI {
  unsigned int tst_ctrl_dig : 4;
  unsigned int  : 4;
};
#line 4974
struct __reg_TST_RX_LENGTH {
  unsigned int rx_length : 8;
};
# 239 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 234
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos-main/src/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 211 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 113 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 133
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 143
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 178
#line 170
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 62 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVDD = 1, 
  ATM128_ADC_VREF_1_5 = 2, 
  ATM128_ADC_VREF_1_6 = 3, 
  ATM128_ADC_VREF_AVCC = ATM128_ADC_VREF_AVDD
};


enum __nesc_unnamed4250 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4251 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND, 
  ATM128_ADC_INT_TEMP = 41, 
  ATM128_ADC_INT_VDRTBBP = 52, 
  ATM128_ADC_INT_VDRTBBN = 61
};







#line 117
typedef struct __nesc_unnamed4252 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4253 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4254 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_AUTO_TRIGGER_OFF = 0, 
  ATM128_ADC_AUTO_TRIGGER_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 179
typedef struct __nesc_unnamed4260 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;










#line 190
typedef struct __nesc_unnamed4261 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t acch : 1;
  uint8_t refok : 1;
  uint8_t acme : 1;
  uint8_t avddok : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 15 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/hardware.h"
enum __nesc_unnamed4262 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/opt/tinyos-main/src/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4263 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 52 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/packet_types.h"
#line 44
typedef struct status_packet {

  uint8_t historyEnable : 1;
  uint8_t burstEnable : 1;
  uint8_t reserved : 4;
  uint8_t intervalType : 2;
  uint8_t burstInterval : 8;
  uint16_t node_id;
} status_packet_t;

enum __nesc_unnamed4264 {

  INTERVAL_TYPE_SECONDS = 0, 
  INTERVAL_TYPE_MINUTES, 
  INTERVAL_TYPE_HOURS, 
  INTERVAL_TYPE_DAYS
};










#line 62
typedef struct data_packet {

  uint16_t source;
  uint16_t data1;
  uint16_t data2;
  uint16_t data3;
  uint16_t data4;
  uint16_t data5;
  uint16_t seqNo;
} data_packet_t;








#line 73
typedef struct command_packet {
  uint8_t WE : 1;
  uint8_t HE : 1;
  uint8_t BE : 1;
  uint8_t opcode : 5;
  uint8_t value;
  uint16_t address;
} command_packet_t;

enum __nesc_unnamed4265 {

  COMMAND_CONFIGURE = 0, 
  COMMAND_ECHO, 
  COMMAND_READ_DATA, 
  COMMAND_READ_HISTORY, 
  COMMAND_READ_STATUS, 
  COMMAND_INTERVAL_SECONDS, 
  COMMAND_INTERVAL_MINUTES, 
  COMMAND_INTERVAL_HOURS, 
  COMMAND_INTERVAL_DAYS
};

enum __nesc_unnamed4266 {

  PACKET_ERROR = 0, 
  PACKET_COMMAND, 
  PACKET_DATA, 
  PACKET_STATUS
};
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4267 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4268 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4269 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4270 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
typedef struct T62khz {
} 
#line 39
T62khz;







enum __nesc_unnamed4271 {


  ATMRFA1_CLK8_OFF = 0, 
  ATMRFA1_CLK8_NORMAL = 1, 
  ATMRFA1_CLK8_DIVIDE_8 = 2, 
  ATMRFA1_CLK8_DIVIDE_32 = 3, 
  ATMRFA1_CLK8_DIVIDE_64 = 4, 
  ATMRFA1_CLK8_DIVIDE_128 = 5, 
  ATMRFA1_CLK8_DIVIDE_256 = 6, 
  ATMRFA1_CLK8_DIVIDE_1024 = 7, 


  ATMRFA1_WGM8_NORMAL = 0 << 3, 
  ATMRFA1_WGM8_PWM = 1 << 3, 
  ATMRFA1_WGM8_CTC = 2 << 3, 
  ATMRFA1_WGM8_PWM_FAST = 3 << 3, 
  ATMRFA1_WGM8_COMPARE_HIGH = 5 << 3, 
  ATMRFA1_WGM8_COMPARE_LOW = 7 << 3, 


  ATMRFA1_ASYNC_OFF = 0 << 6, 
  ATMRFA1_ASYNC_ON = 1 << 6, 
  ATMRFA1_ASYNC_EXT = 3 << 6
};


enum __nesc_unnamed4272 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4273 {


  ATMRFA1_CLK16_OFF = 0, 
  ATMRFA1_CLK16_NORMAL = 1, 
  ATMRFA1_CLK16_DIVIDE_8 = 2, 
  ATMRFA1_CLK16_DIVIDE_64 = 3, 
  ATMRFA1_CLK16_DIVIDE_256 = 4, 
  ATMRFA1_CLK16_DIVIDE_1024 = 5, 
  ATMRFA1_CLK16_EXTERNAL_FALL = 6, 
  ATMRFA1_CLK16_EXTERNAL_RISE = 7, 


  ATMRFA1_WGM16_NORMAL = 0 << 3, 
  ATMRFA1_WGM16_PWM_8BIT = 1 << 3, 
  ATMRFA1_WGM16_PWM_9BIT = 2 << 3, 
  ATMRFA1_WGM16_PWM_10BIT = 3 << 3, 
  ATMRFA1_WGM16_CTC_COMPARE = 4 << 3, 
  ATMRFA1_WGM16_PWM_FAST_8BIT = 5 << 3, 
  ATMRFA1_WGM16_PWM_FAST_9BIT = 6 << 3, 
  ATMRFA1_WGM16_PWM_FAST_10BIT = 7 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_LOW = 8 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_LOW = 9 << 3, 
  ATMRFA1_WGM16_PWM_CAPTURE_HIGH = 10 << 3, 
  ATMRFA1_WGM16_PWM_COMPARE_HIGH = 11 << 3, 
  ATMRFA1_WGM16_CTC_CAPTURE = 12 << 3, 
  ATMRFA1_WGM16_RESERVED = 13 << 3, 
  ATMRFA1_WGM16_PWM_FAST_CAPTURE = 14 << 3, 
  ATMRFA1_WGM16_PWM_FAST_COMPARE = 15 << 3
};


enum __nesc_unnamed4274 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4275 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4276 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4277 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4278 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 43 "/usr/lib/gcc/avr/4.1.2/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
#line 105
typedef __gnuc_va_list va_list;
# 242 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/stdio.h" 3
struct __file {
  char *buf;
  unsigned char unget;
  uint8_t flags;
#line 261
  int size;
  int len;
  int (*put)(char arg_0x4063b010, struct __file *arg_0x4063b1f8);
  int (*get)(struct __file *arg_0x4063b5e8);
  void *udata;
};
#line 405
struct __file;
#line 417
struct __file;
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/TimerConfig.h"
typedef struct T16mhz {
} 
#line 44
T16mhz;
typedef struct T8mhz {
} 
#line 45
T8mhz;
typedef struct T4mhz {
} 
#line 46
T4mhz;
typedef struct T2mhz {
} 
#line 47
T2mhz;


typedef T2mhz TMcu;
#line 68
typedef T32khz TRtc;
typedef TMilli DummyNotificationReceiverP__Timer0__precision_tag;
typedef command_packet_t DummyNotificationReceiverP__CommandNotification__val_t;
typedef command_packet_t DummyNotificationReceiverP__ForwardCommand__data_type;
typedef TMilli DummyNotificationReceiverP__Timer1__precision_tag;
typedef data_packet_t DummyNotificationReceiverP__ForwardData__data_type;
typedef status_packet_t DummyNotificationReceiverP__ForwardStatus__data_type;
typedef TMilli Atm128Rfa1SerialP__Counter__precision_tag;
typedef uint32_t Atm128Rfa1SerialP__Counter__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__BeaconCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef status_packet_t SerialPacketForwarderP__StatusQueue__t;
typedef command_packet_t SerialPacketForwarderP__CommandNotification__val_t;
typedef command_packet_t SerialPacketForwarderP__ForwardCommand__data_type;
typedef data_packet_t SerialPacketForwarderP__DataQueue__t;
typedef data_packet_t SerialPacketForwarderP__ForwardData__data_type;
typedef command_packet_t SerialPacketForwarderP__CommandQueue__t;
typedef status_packet_t SerialPacketForwarderP__ForwardStatus__data_type;
typedef data_packet_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t;
typedef /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__t;
typedef command_packet_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t;
typedef /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__t;
typedef status_packet_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t;
typedef /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__t;
typedef T62khz /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type;
typedef TMilli /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type;
typedef T62khz /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_precision_tag /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type;
typedef TMilli /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void DummyNotificationReceiverP__Timer0__fired(void );
# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
static void DummyNotificationReceiverP__Boot__booted(void );
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void DummyNotificationReceiverP__CommandNotification__notify(DummyNotificationReceiverP__CommandNotification__val_t val);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void DummyNotificationReceiverP__Timer1__fired(void );
# 42 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );

static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );





static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
static error_t Atm128Rfa1SerialP__Uart1Byte__send(uint8_t byte);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void Atm128Rfa1SerialP__sendBlockingDoneTask__runTask(void );
#line 75
static void Atm128Rfa1SerialP__sendDoneTask__runTask(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static error_t Atm128Rfa1SerialP__Uart1Stream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void Atm128Rfa1SerialP__unexpectedByteReceivedTask__runTask(void );
# 99 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static void Atm128Rfa1SerialP__Uart1StreamBlocking__default__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void Atm128Rfa1SerialP__Uart1StreamBlocking__default__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t Atm128Rfa1SerialP__Uart1Init__init(void );
# 20 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
static void Atm128Rfa1SerialP__Uart1Interrupts__txInterruptHandler(void );
#line 19
static void Atm128Rfa1SerialP__Uart1Interrupts__rxInterruptHandler(uint8_t byte);
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void Atm128Rfa1SerialP__Counter__overflow(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t Atm128Rfa1SerialP__Uart1Control__start(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Atm128Rfa1SerialP__Uart1PowerOverride__lowestState(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void Atm128Rfa1SerialP__receiveBlockingDoneTask__runTask(void );
#line 75
static void Atm128Rfa1SerialP__receiveDoneTask__runTask(void );
# 15 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
static bool Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__isTxInterruptPending(void );
#line 5
static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__enableTxInterrupt(void );





static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearTxInterrupt(void );
#line 8
static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__disableTxInterrupt(void );








static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__setSendData(void );
#line 12
static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearRxInterrupt(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Toggle(void );
#line 83
static void LedsP__Leds__led1Toggle(void );
# 76 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareA__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareA__set(HplAtmRfa1TimerMacP__CompareA__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareA__start(void );


static void HplAtmRfa1TimerMacP__CompareA__stop(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__default__fired(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 51
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 59
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__default__fired(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403c8b28);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403c8b28);
# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialPacketForwarderP__processReceiveBufferTask__runTask(void );
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static error_t SerialPacketForwarderP__CommandNotification__enable(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t SerialPacketForwarderP__ForwardCommand__setNow(SerialPacketForwarderP__ForwardCommand__data_type val);
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static void SerialPacketForwarderP__UartStream__receivedByte(uint8_t byte);
#line 99
static void SerialPacketForwarderP__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void SerialPacketForwarderP__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t SerialPacketForwarderP__ForwardData__setNow(SerialPacketForwarderP__ForwardData__data_type val);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t SerialPacketForwarderP__SerialPacketForwarderInit__init(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t SerialPacketForwarderP__ForwardStatus__setNow(SerialPacketForwarderP__ForwardStatus__data_type val);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialPacketForwarderP__forwardNextPacketTask__runTask(void );
# 10 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToStatusPacket(status_packet_t *sp, uint8_t *buf);





static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 14
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf);
#line 13
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 8
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToDataPacket(data_packet_t *dp, uint8_t *buf);


static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf);
#line 6
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(uint8_t c);
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__t  

/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__t  

/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__size(void );
#line 73
static 
#line 71
/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__t  

/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__t  

/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__size(void );
#line 73
static 
#line 71
/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__t  

/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__t  

/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__size(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );
# 103 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4077d8f0);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4077d8f0, 
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 64
static void DummyNotificationReceiverP__Timer0__startPeriodic(uint32_t dt);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static error_t DummyNotificationReceiverP__CommandNotification__enable(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t DummyNotificationReceiverP__ForwardCommand__setNow(DummyNotificationReceiverP__ForwardCommand__data_type val);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void DummyNotificationReceiverP__Timer1__startPeriodic(uint32_t dt);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
static void DummyNotificationReceiverP__Leds__led1Toggle(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t DummyNotificationReceiverP__ForwardData__setNow(DummyNotificationReceiverP__ForwardData__data_type val);
#line 53
static error_t DummyNotificationReceiverP__ForwardStatus__setNow(DummyNotificationReceiverP__ForwardStatus__data_type val);
# 25 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/DummyNotificationReceiverP.nc"
status_packet_t DummyNotificationReceiverP__statusPacket;
data_packet_t DummyNotificationReceiverP__dataPacket;
bool DummyNotificationReceiverP__commandTaken = FALSE;
command_packet_t DummyNotificationReceiverP__comPack;
static inline void DummyNotificationReceiverP__Boot__booted(void );
#line 49
static inline void DummyNotificationReceiverP__CommandNotification__notify(command_packet_t val);






static inline void DummyNotificationReceiverP__Timer0__fired(void );
#line 68
static inline void DummyNotificationReceiverP__Timer1__fired(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );

static inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__RadioInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
#line 62
static error_t PlatformP__McuInit__init(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformP.nc"
static inline error_t PlatformP__powerInit(void );






static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t McuInitP__SerialInit__init(void );
#line 62
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 75
static inline error_t McuInitP__Init__init(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4279 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t Atm128Rfa1SerialP__sendDoneTask__postTask(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static void Atm128Rfa1SerialP__Uart1Stream__receivedByte(uint8_t byte);
#line 99
static void Atm128Rfa1SerialP__Uart1Stream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void Atm128Rfa1SerialP__Uart1Stream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
#line 99
static void Atm128Rfa1SerialP__Uart1StreamBlocking__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void Atm128Rfa1SerialP__Uart1StreamBlocking__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 15 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
static bool Atm128Rfa1SerialP__Uart1Interrupts__isTxInterruptPending(void );
#line 5
static void Atm128Rfa1SerialP__Uart1Interrupts__enableTxInterrupt(void );





static void Atm128Rfa1SerialP__Uart1Interrupts__clearTxInterrupt(void );
#line 8
static void Atm128Rfa1SerialP__Uart1Interrupts__disableTxInterrupt(void );








static void Atm128Rfa1SerialP__Uart1Interrupts__setSendData(void );
#line 12
static void Atm128Rfa1SerialP__Uart1Interrupts__clearRxInterrupt(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t Atm128Rfa1SerialP__receiveDoneTask__postTask(void );
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
enum Atm128Rfa1SerialP____nesc_unnamed4280 {
#line 40
  Atm128Rfa1SerialP__sendBlockingDoneTask = 0U
};
#line 40
typedef int Atm128Rfa1SerialP____nesc_sillytask_sendBlockingDoneTask[Atm128Rfa1SerialP__sendBlockingDoneTask];
enum Atm128Rfa1SerialP____nesc_unnamed4281 {
#line 41
  Atm128Rfa1SerialP__receiveBlockingDoneTask = 1U
};
#line 41
typedef int Atm128Rfa1SerialP____nesc_sillytask_receiveBlockingDoneTask[Atm128Rfa1SerialP__receiveBlockingDoneTask];

enum Atm128Rfa1SerialP____nesc_unnamed4282 {
#line 43
  Atm128Rfa1SerialP__sendDoneTask = 2U
};
#line 43
typedef int Atm128Rfa1SerialP____nesc_sillytask_sendDoneTask[Atm128Rfa1SerialP__sendDoneTask];
enum Atm128Rfa1SerialP____nesc_unnamed4283 {
#line 44
  Atm128Rfa1SerialP__receiveDoneTask = 3U
};
#line 44
typedef int Atm128Rfa1SerialP____nesc_sillytask_receiveDoneTask[Atm128Rfa1SerialP__receiveDoneTask];

enum Atm128Rfa1SerialP____nesc_unnamed4284 {
#line 46
  Atm128Rfa1SerialP__unexpectedByteReceivedTask = 4U
};
#line 46
typedef int Atm128Rfa1SerialP____nesc_sillytask_unexpectedByteReceivedTask[Atm128Rfa1SerialP__unexpectedByteReceivedTask];
#line 29
volatile bool Atm128Rfa1SerialP__started;
volatile bool Atm128Rfa1SerialP__rxBusy;
#line 30
volatile bool Atm128Rfa1SerialP__txBusy;
uint8_t *Atm128Rfa1SerialP__txBuf;
#line 31
uint8_t *Atm128Rfa1SerialP__rxBuf;

uint8_t Atm128Rfa1SerialP__txTmpBuf[64];

uint16_t Atm128Rfa1SerialP__txLen;
#line 35
uint16_t Atm128Rfa1SerialP__rxLen;
uint16_t Atm128Rfa1SerialP__txPos;
#line 36
uint16_t Atm128Rfa1SerialP__rxPos;
error_t Atm128Rfa1SerialP__txResult;
#line 37
error_t Atm128Rfa1SerialP__rxResult;
uint8_t Atm128Rfa1SerialP__m_byte_time;
#line 38
uint8_t Atm128Rfa1SerialP__rxUnexpectedByte;









static error_t Atm128Rfa1SerialP__Uart1Control__start(void );
#line 76
static error_t Atm128Rfa1SerialP__Uart1Init__init(void );
#line 191
static inline error_t Atm128Rfa1SerialP__Uart1Byte__send(uint8_t byte);
#line 260
static inline void Atm128Rfa1SerialP__Uart1Interrupts__rxInterruptHandler(uint8_t byte);
#line 287
static inline void Atm128Rfa1SerialP__Uart1Interrupts__txInterruptHandler(void );
#line 312
static error_t Atm128Rfa1SerialP__Uart1Stream__send(uint8_t *buf, uint16_t len);
#line 406
static inline void Atm128Rfa1SerialP__Uart1StreamBlocking__default__sendDone(uint8_t *buf, uint16_t len, error_t err);

static inline void Atm128Rfa1SerialP__Uart1StreamBlocking__default__receiveDone(uint8_t *buf, uint16_t len, error_t error);





static inline void Atm128Rfa1SerialP__sendBlockingDoneTask__runTask(void );




static inline void Atm128Rfa1SerialP__receiveBlockingDoneTask__runTask(void );




static inline void Atm128Rfa1SerialP__sendDoneTask__runTask(void );




static inline void Atm128Rfa1SerialP__receiveDoneTask__runTask(void );
#line 441
static inline void Atm128Rfa1SerialP__unexpectedByteReceivedTask__runTask(void );








static inline mcu_power_t Atm128Rfa1SerialP__Uart1PowerOverride__lowestState(void );







static inline void Atm128Rfa1SerialP__Counter__overflow(void );
# 20 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__txInterruptHandler(void );
#line 19
static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__rxInterruptHandler(uint8_t byte);
# 12 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
uint8_t Atm128Rfa1Uart1InterruptsP__privReceivedByte = 0;
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__enableTxInterrupt(void );





static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearRxInterrupt(void );









static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearTxInterrupt(void );









static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__disableTxInterrupt(void );




static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__setSendData(void );




static inline bool Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__isTxInterruptPending(void );
#line 63
void __vector_36(void ) __attribute((signal))   ;
#line 75
void __vector_38(void ) __attribute((signal))   ;
# 42 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );

static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 72
static inline void LedsP__Leds__led0Toggle(void );
#line 86
static inline void LedsP__Leds__led1Toggle(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 98 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

int8_t McuSleepC__powerState = -1;

static inline void McuSleepC__McuSleep__sleep(void );
#line 135
static inline void McuSleepC__McuPowerState__update(void );
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4285 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 6, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode);
#line 51
static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test(void );
#line 40
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get(void );
#line 59
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );







static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );




static inline bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareA__fired(void );
#line 48
static void HplAtmRfa1TimerMacP__CompareB__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__overflow(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtmRfa1TimerMacP__McuPowerState__update(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareC__fired(void );
# 68 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
#line 58
typedef union HplAtmRfa1TimerMacP__reg32_t {

  uint32_t full;
  struct  {

    uint8_t ll;
    uint8_t lh;
    uint8_t hl;
    uint8_t hh;
  } ;
} HplAtmRfa1TimerMacP__reg32_t;



static uint32_t HplAtmRfa1TimerMacP__Counter__get(void );
#line 109
void __vector_68(void ) __attribute((signal))   ;

static inline bool HplAtmRfa1TimerMacP__Counter__test(void );





static inline void HplAtmRfa1TimerMacP__Counter__start(void );
#line 131
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 167
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value);
#line 186
void __vector_65(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareA__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareA__start(void );






static inline void HplAtmRfa1TimerMacP__CompareA__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode);
#line 264
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void );

void __vector_66(void ) __attribute((signal))   ;
#line 344
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
#line 495
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void );
# 38 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403c8b28);
# 76 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4286 {

  SchedulerBasicP__NUM_TASKS = 9U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialPacketForwarderP__processReceiveBufferTask__postTask(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
static error_t SerialPacketForwarderP__UartByte__send(uint8_t byte);
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
SerialPacketForwarderP__StatusQueue__t  

SerialPacketForwarderP__StatusQueue__head(void );
#line 90
static error_t SerialPacketForwarderP__StatusQueue__enqueue(
#line 86
SerialPacketForwarderP__StatusQueue__t  newVal);
#line 81
static 
#line 79
SerialPacketForwarderP__StatusQueue__t  

SerialPacketForwarderP__StatusQueue__dequeue(void );
#line 50
static bool SerialPacketForwarderP__StatusQueue__empty(void );
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void SerialPacketForwarderP__CommandNotification__notify(SerialPacketForwarderP__CommandNotification__val_t val);
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
SerialPacketForwarderP__DataQueue__t  

SerialPacketForwarderP__DataQueue__head(void );
#line 90
static error_t SerialPacketForwarderP__DataQueue__enqueue(
#line 86
SerialPacketForwarderP__DataQueue__t  newVal);
#line 81
static 
#line 79
SerialPacketForwarderP__DataQueue__t  

SerialPacketForwarderP__DataQueue__dequeue(void );
#line 50
static bool SerialPacketForwarderP__DataQueue__empty(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static error_t SerialPacketForwarderP__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
static void SerialPacketForwarderP__Leds__led0Toggle(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
SerialPacketForwarderP__CommandQueue__t  

SerialPacketForwarderP__CommandQueue__head(void );
#line 90
static error_t SerialPacketForwarderP__CommandQueue__enqueue(
#line 86
SerialPacketForwarderP__CommandQueue__t  newVal);
#line 81
static 
#line 79
SerialPacketForwarderP__CommandQueue__t  

SerialPacketForwarderP__CommandQueue__dequeue(void );
#line 50
static bool SerialPacketForwarderP__CommandQueue__empty(void );
# 16 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
static uint8_t SerialPacketForwarderP__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 14
static uint8_t SerialPacketForwarderP__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf);
#line 13
static uint8_t SerialPacketForwarderP__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 8
static uint8_t SerialPacketForwarderP__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);
static uint8_t SerialPacketForwarderP__PacketTypes__strToDataPacket(data_packet_t *dp, uint8_t *buf);


static uint8_t SerialPacketForwarderP__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf);
#line 10
static uint8_t SerialPacketForwarderP__PacketTypes__strToStatusPacket(status_packet_t *sp, uint8_t *buf);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialPacketForwarderP__UartControl__start(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialPacketForwarderP__forwardNextPacketTask__postTask(void );
# 40 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
enum SerialPacketForwarderP____nesc_unnamed4287 {
#line 40
  SerialPacketForwarderP__processReceiveBufferTask = 5U
};
#line 40
typedef int SerialPacketForwarderP____nesc_sillytask_processReceiveBufferTask[SerialPacketForwarderP__processReceiveBufferTask];
enum SerialPacketForwarderP____nesc_unnamed4288 {
#line 41
  SerialPacketForwarderP__forwardNextPacketTask = 6U
};
#line 41
typedef int SerialPacketForwarderP____nesc_sillytask_forwardNextPacketTask[SerialPacketForwarderP__forwardNextPacketTask];


bool SerialPacketForwarderP__started;
bool SerialPacketForwarderP__enabled;

command_packet_t SerialPacketForwarderP__gCommandPacket;



char SerialPacketForwarderP__receiveBuffer[64];
uint8_t SerialPacketForwarderP__pos;


static inline error_t SerialPacketForwarderP__SerialPacketForwarderInit__init(void );
#line 69
static error_t SerialPacketForwarderP__CommandNotification__enable(void );






static inline void SerialPacketForwarderP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);



static void SerialPacketForwarderP__UartStream__receivedByte(uint8_t byte);
#line 108
static inline void SerialPacketForwarderP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);



static inline void SerialPacketForwarderP__processReceiveBufferTask__runTask(void );
#line 153
static inline error_t SerialPacketForwarderP__ForwardCommand__setNow(command_packet_t val);







static inline error_t SerialPacketForwarderP__ForwardData__setNow(data_packet_t val);







static inline error_t SerialPacketForwarderP__ForwardStatus__setNow(status_packet_t val);







static inline void SerialPacketForwarderP__forwardNextPacketTask__runTask(void );
# 18 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[16] = "0123456789abcdef";

static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(uint8_t c);









static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);
#line 60
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToDataPacket(data_packet_t *dp, uint8_t *buf);
#line 107
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToStatusPacket(status_packet_t *sp, uint8_t *buf);
#line 135
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 153
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 194
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *cp, uint8_t *buf);
#line 218
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *sp, uint8_t *buf);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
/*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t  /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue[255];
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__head = 0;
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__tail = 0;
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__size = 0;

static inline bool /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__head(void );



static inline void /*SerialPacketForwarderC.DataQueue*/QueueC__0__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__enqueue(/*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t newVal);
#line 48
/*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t  /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue[32];
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__head = 0;
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__tail = 0;
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__size = 0;

static inline bool /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__head(void );



static inline void /*SerialPacketForwarderC.CommandQueue*/QueueC__1__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__enqueue(/*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t newVal);
#line 48
/*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t  /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue[32];
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__head = 0;
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__tail = 0;
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__size = 0;

static inline bool /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__head(void );



static inline void /*SerialPacketForwarderC.StatusQueue*/QueueC__2__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__enqueue(/*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t newVal);
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void );
#line 43
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value);
#line 59
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void );


static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void );
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void );





static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void );










static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time);






static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt);
#line 125
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void );
# 77 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0;
/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4289 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type ) - 1 - 6, 
  TransformAlarmC__0__MAX_DELAY = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )1 << /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void );




static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void );










static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void );




static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void );
#line 147
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt);
#line 162
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4290 {
#line 74
  AlarmToTimerC__0__fired = 7U
};
#line 74
typedef int /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4077d8f0);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4291 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 8U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4292 {

  VirtualizeTimerC__0__NUM_TIMERS = 2U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4293 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 117 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 117
{
   __asm volatile ("cli");}

#line 134
#line 133
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 137
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 143
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 19 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearRxInterrupt(void )
{
  * (volatile uint8_t *)0xC8 &= ~(1 << 7);
}

# 12 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1SerialP__Uart1Interrupts__clearRxInterrupt(void ){
#line 12
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearRxInterrupt();
#line 12
}
#line 12
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void Atm128Rfa1SerialP__Uart1Stream__receivedByte(uint8_t byte){
#line 79
  SerialPacketForwarderP__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128Rfa1SerialP__receiveDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128Rfa1SerialP__receiveDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 260 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__Uart1Interrupts__rxInterruptHandler(uint8_t byte)
{
  if (Atm128Rfa1SerialP__rxBuf) 
    {
      if (Atm128Rfa1SerialP__rxPos < Atm128Rfa1SerialP__rxLen) 
        {
          Atm128Rfa1SerialP__rxBuf[Atm128Rfa1SerialP__rxPos] = byte;
          Atm128Rfa1SerialP__rxPos++;
          if (Atm128Rfa1SerialP__rxPos == Atm128Rfa1SerialP__rxLen) 
            {
              Atm128Rfa1SerialP__receiveDoneTask__postTask();
            }
        }
    }
  else 
    {
      Atm128Rfa1SerialP__rxUnexpectedByte = byte;
      Atm128Rfa1SerialP__Uart1Stream__receivedByte(Atm128Rfa1SerialP__rxUnexpectedByte);
    }





  Atm128Rfa1SerialP__Uart1Interrupts__clearRxInterrupt();
}

# 19 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__rxInterruptHandler(uint8_t byte){
#line 19
  Atm128Rfa1SerialP__Uart1Interrupts__rxInterruptHandler(byte);
#line 19
}
#line 19
# 97 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 13 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__enableTxInterrupt(void )
{
  * (volatile uint8_t *)0xC8 |= 1 << 6;
  * (volatile uint8_t *)0xC9 |= 1 << 6;
}

# 5 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1SerialP__Uart1Interrupts__enableTxInterrupt(void ){
#line 5
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__enableTxInterrupt();
#line 5
}
#line 5
# 29 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearTxInterrupt(void )
{
  * (volatile uint8_t *)0xC8 &= ~(1 << 6);
}

# 11 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1SerialP__Uart1Interrupts__clearTxInterrupt(void ){
#line 11
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__clearTxInterrupt();
#line 11
}
#line 11
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline bool Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__isTxInterruptPending(void )
{
  return (* (volatile uint8_t *)0xC8 & (1 << 6)) != 0;
}

# 15 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static bool Atm128Rfa1SerialP__Uart1Interrupts__isTxInterruptPending(void ){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  __nesc_result = Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__isTxInterruptPending();
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__setSendData(void )
{
  * (volatile uint8_t *)0xC8 |= 1 << 6;
}

# 17 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1SerialP__Uart1Interrupts__setSendData(void ){
#line 17
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__setSendData();
#line 17
}
#line 17
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
static inline void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__disableTxInterrupt(void )
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 6);
}

# 8 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1SerialP__Uart1Interrupts__disableTxInterrupt(void ){
#line 8
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__disableTxInterrupt();
#line 8
}
#line 8
# 191 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline error_t Atm128Rfa1SerialP__Uart1Byte__send(uint8_t byte)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (!Atm128Rfa1SerialP__started) 
        {
          unsigned char __nesc_temp = 
#line 196
          FAIL;

          {
#line 196
            __nesc_atomic_end(__nesc_atomic); 
#line 196
            return __nesc_temp;
          }
        }
    }
#line 199
    __nesc_atomic_end(__nesc_atomic); }
#line 198
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (Atm128Rfa1SerialP__txBusy) 
        {
          unsigned char __nesc_temp = 
#line 201
          EBUSY;

          {
#line 201
            __nesc_atomic_end(__nesc_atomic); 
#line 201
            return __nesc_temp;
          }
        }
#line 202
      Atm128Rfa1SerialP__txBusy = TRUE;
    }
#line 203
    __nesc_atomic_end(__nesc_atomic); }
  Atm128Rfa1SerialP__Uart1Interrupts__clearTxInterrupt();
  Atm128Rfa1SerialP__Uart1Interrupts__disableTxInterrupt();
  * (volatile uint8_t *)0xCE = byte;
  Atm128Rfa1SerialP__Uart1Interrupts__setSendData();
  while (!Atm128Rfa1SerialP__Uart1Interrupts__isTxInterruptPending()) ;
  Atm128Rfa1SerialP__Uart1Interrupts__clearTxInterrupt();
  Atm128Rfa1SerialP__Uart1Interrupts__enableTxInterrupt();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128Rfa1SerialP__txBusy = FALSE;
    }
#line 214
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
inline static error_t SerialPacketForwarderP__UartByte__send(uint8_t byte){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = Atm128Rfa1SerialP__Uart1Byte__send(byte);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialPacketForwarderP__processReceiveBufferTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialPacketForwarderP__processReceiveBufferTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t Atm128Rfa1SerialP__sendDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128Rfa1SerialP__sendDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 287 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__Uart1Interrupts__txInterruptHandler(void )
{
  if (Atm128Rfa1SerialP__txBuf != (void *)0) 
    {
      if (Atm128Rfa1SerialP__txPos < Atm128Rfa1SerialP__txLen) 
        {
          while (!((* (volatile uint8_t *)0xC8 & (1 << 5)) != 0)) ;
          * (volatile uint8_t *)0xCE = Atm128Rfa1SerialP__txBuf[Atm128Rfa1SerialP__txPos];
          Atm128Rfa1SerialP__txPos++;
        }
      else {
#line 297
        if (Atm128Rfa1SerialP__txPos == Atm128Rfa1SerialP__txLen) 
          {
            Atm128Rfa1SerialP__txLen = 0;
            Atm128Rfa1SerialP__txPos = 0;
            Atm128Rfa1SerialP__txBuf = (void *)0;
            /* atomic removed: atomic calls only */
            {
              Atm128Rfa1SerialP__txBusy = FALSE;
            }
            Atm128Rfa1SerialP__sendDoneTask__postTask();
          }
        }
    }
#line 309
  Atm128Rfa1SerialP__Uart1Interrupts__clearTxInterrupt();
}

# 20 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/SerialInterrupts.nc"
inline static void Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__txInterruptHandler(void ){
#line 20
  Atm128Rfa1SerialP__Uart1Interrupts__txInterruptHandler();
#line 20
}
#line 20
# 458 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__Counter__overflow(void )
#line 458
{
}

# 177 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__overflow();
#line 82
  Atm128Rfa1SerialP__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper++;
    if ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper & /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow();
}

# 125 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void )
#line 125
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 48
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow();
#line 48
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow();
#line 48
}
#line 48
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 162 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt == 0) 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired(void ){
#line 78
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
{
  McuSleepC__powerState = -1;
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtmRfa1TimerMacP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 201 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 0);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareA__stop();
#line 62
}
#line 62
# 63 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__fired();
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareA__fired(void ){
#line 48
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__fired();
#line 48
}
#line 48
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void )
{
  return /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__get();
}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 111 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline bool HplAtmRfa1TimerMacP__Counter__test(void )
#line 111
{
#line 111
  return * (volatile uint8_t *)0xE0 & (1 << 3);
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = HplAtmRfa1TimerMacP__Counter__test();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 71 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void )
{
  /* atomic removed: atomic calls only */
#line 73
  {
    unsigned char __nesc_temp = 
#line 73
    /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__test();

#line 73
    return __nesc_temp;
  }
}

# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 194 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 0;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareA__start();
#line 59
}
#line 59
# 190 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__reset(void )
#line 190
{
#line 190
  * (volatile uint8_t *)0xE0 = 1 << 0;
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareA__reset();
#line 54
}
#line 54
# 167 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF8 = time.hh;
    * (volatile uint8_t *)0xF7 = time.hl;
    * (volatile uint8_t *)0xF6 = time.lh;
    * (volatile uint8_t *)0xF5 = time.ll;
  }
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareA__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type time)
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__set(time);
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__reset();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__start();
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__Counter__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 87 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type nt0, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type ndt)
{
  /* atomic removed: atomic calls only */
  {

    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type n = /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__get() + 2;


    if ((/*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type )(n - nt0) < ndt) {
      n = nt0 + ndt;
      }
    /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__setAlarm(n);
  }
}

# 103 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 264 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__default__fired(void )
#line 264
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareB__default__fired();
#line 48
}
#line 48
# 344 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void )
#line 344
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareC__fired(void ){
#line 48
  HplAtmRfa1TimerMacP__CompareC__default__fired();
#line 48
}
#line 48
# 124 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 38 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioOffP.nc"
static inline error_t RFA1RadioOffP__RFA1RadioOff__init(void )
#line 38
{
  if (!0U) {
      * (volatile uint8_t *)0x139 |= 1 << 1;
    }
  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__RadioInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioOffP__RFA1RadioOff__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/opt/tinyos-main/src/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformP.nc"
static inline error_t PlatformP__powerInit(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 0;
  }
  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )46U |= 1 << 4;
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )46U |= 1 << 3;
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )46U |= 1 << 2;
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )45U |= 1 << 4;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )45U |= 1 << 3;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )45U |= 1 << 2;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput();
#line 46
}
#line 46
# 52 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
inline static error_t McuInitP__SerialInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Atm128Rfa1SerialP__Uart1Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 117 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 3;
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start(void ){
#line 59
  HplAtmRfa1TimerMacP__Counter__start();
#line 59
}
#line 59
# 131 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode)
{
  mode &= (1 << 5) | (1 << 4);


  if ((mode & (1 << 4)) != 0) {
    * (volatile uint8_t *)0xB6 = 1 << 5;
    }
  /* atomic removed: atomic calls only */
#line 139
  * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~((1 << 5) | (1 << 4))) | mode;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__Counter__setMode(mode);
#line 70
}
#line 70
# 51 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void )
{
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__setMode(48);
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__start();

  return SUCCESS;
}

# 212 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareA__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 0))
     | ((mode & 0x1) << 0);
  }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareA__setMode(mode);
#line 70
}
#line 70
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 72 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 72
{
  /* atomic removed: atomic calls only */


  {
    uint8_t wraps_ok = 0;
    uint8_t wraps = 255;
    uint16_t now;
    uint16_t prev_cycles_min = 0xffff;
    uint16_t prev_cycles_max = 0;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = 1 << 0;


    while (wraps_ok < 50 && --wraps != 0) 
      {
        while (* (volatile uint8_t *)0xB2 != 0) 
          ;

        now = * (volatile uint16_t *)0x84;

        while (* (volatile uint8_t *)0xB2 != 64) 
          ;

        MeasureClockC__cycles = * (volatile uint16_t *)0x84 - now;

        if (prev_cycles_min < MeasureClockC__cycles) {
          prev_cycles_min = MeasureClockC__cycles;
          }
#line 103
        if (prev_cycles_max > MeasureClockC__cycles) {
          prev_cycles_max = MeasureClockC__cycles;
          }
        if (prev_cycles_max - prev_cycles_min <= 1) {
            wraps_ok++;
          }
        else 
#line 108
          {
            wraps_ok = 0;
            prev_cycles_min = 0xffff;
            prev_cycles_max = 0;
          }
      }


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    while (* (volatile uint8_t *)0xB6 & ((1 << 1) | (1 << 0))) 
      ;
  }

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;


    * (volatile uint8_t *)0x61 = 0x0F;
  }
#line 72
  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());
  ok = ecombine(ok, McuInitP__SerialInit__init());
  return ok;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP__McuInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = McuInitP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 58 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x35 + 0x20) |= 1 << 7;

  ok = PlatformP__McuInit__init();
  ok = ecombine(ok, PlatformP__LedsInit__init());
  ok = ecombine(ok, PlatformP__powerInit());
  ok = ecombine(ok, PlatformP__RadioInit__init());

  return ok;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 103 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 69 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
}

# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t SerialPacketForwarderP__forwardNextPacketTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialPacketForwarderP__forwardNextPacketTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.DataQueue*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 255;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__0__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__enqueue(/*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__size() < /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue[/*SerialPacketForwarderC.DataQueue*/QueueC__0__tail] = newVal;
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__tail++;
      if (/*SerialPacketForwarderC.DataQueue*/QueueC__0__tail == 255) {
#line 102
        /*SerialPacketForwarderC.DataQueue*/QueueC__0__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__size++;
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t SerialPacketForwarderP__DataQueue__enqueue(SerialPacketForwarderP__DataQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 161 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__ForwardData__setNow(data_packet_t val)
{
  error_t err = SerialPacketForwarderP__DataQueue__enqueue(val);

#line 164
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 166
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t DummyNotificationReceiverP__ForwardData__setNow(DummyNotificationReceiverP__ForwardData__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = SerialPacketForwarderP__ForwardData__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 56 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/DummyNotificationReceiverP.nc"
static inline void DummyNotificationReceiverP__Timer0__fired(void )
{
  DummyNotificationReceiverP__dataPacket.data1++;
  DummyNotificationReceiverP__dataPacket.data2++;
  DummyNotificationReceiverP__dataPacket.data3++;
  DummyNotificationReceiverP__dataPacket.data4++;
  DummyNotificationReceiverP__dataPacket.data5++;
  DummyNotificationReceiverP__dataPacket.seqNo++;
  DummyNotificationReceiverP__dataPacket.source = 0x0002;
  DummyNotificationReceiverP__ForwardData__setNow(DummyNotificationReceiverP__dataPacket);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.CommandQueue*/QueueC__1__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 32;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__1__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__enqueue(/*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__size() < /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue[/*SerialPacketForwarderC.CommandQueue*/QueueC__1__tail] = newVal;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__tail++;
      if (/*SerialPacketForwarderC.CommandQueue*/QueueC__1__tail == 32) {
#line 102
        /*SerialPacketForwarderC.CommandQueue*/QueueC__1__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__size++;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t SerialPacketForwarderP__CommandQueue__enqueue(SerialPacketForwarderP__CommandQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 153 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__ForwardCommand__setNow(command_packet_t val)
{
  error_t err = SerialPacketForwarderP__CommandQueue__enqueue(val);

#line 156
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 158
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t DummyNotificationReceiverP__ForwardCommand__setNow(DummyNotificationReceiverP__ForwardCommand__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = SerialPacketForwarderP__ForwardCommand__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.StatusQueue*/QueueC__2__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__maxSize(void )
#line 61
{
  return 32;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__2__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__enqueue(/*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__size() < /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue[/*SerialPacketForwarderC.StatusQueue*/QueueC__2__tail] = newVal;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__tail++;
      if (/*SerialPacketForwarderC.StatusQueue*/QueueC__2__tail == 32) {
#line 102
        /*SerialPacketForwarderC.StatusQueue*/QueueC__2__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__size++;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t SerialPacketForwarderP__StatusQueue__enqueue(SerialPacketForwarderP__StatusQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 169 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__ForwardStatus__setNow(status_packet_t val)
{
  error_t err = SerialPacketForwarderP__StatusQueue__enqueue(val);

#line 172
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 174
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t DummyNotificationReceiverP__ForwardStatus__setNow(DummyNotificationReceiverP__ForwardStatus__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = SerialPacketForwarderP__ForwardStatus__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/DummyNotificationReceiverP.nc"
static inline void DummyNotificationReceiverP__Timer1__fired(void )
{
  DummyNotificationReceiverP__statusPacket.historyEnable = 1;
  DummyNotificationReceiverP__statusPacket.burstEnable = 1;
  DummyNotificationReceiverP__statusPacket.burstInterval = 16;
  DummyNotificationReceiverP__statusPacket.intervalType = INTERVAL_TYPE_DAYS;
  DummyNotificationReceiverP__statusPacket.node_id = 0x0002;
  while (DummyNotificationReceiverP__ForwardStatus__setNow(DummyNotificationReceiverP__statusPacket) != SUCCESS) ;
  if (DummyNotificationReceiverP__commandTaken) 
    {
      while (DummyNotificationReceiverP__ForwardCommand__setNow(DummyNotificationReceiverP__comPack) != SUCCESS) ;
      DummyNotificationReceiverP__commandTaken = FALSE;
    }
}

# 204 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x4077d8f0){
#line 83
  switch (arg_0x4077d8f0) {
#line 83
    case 0U:
#line 83
      DummyNotificationReceiverP__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      DummyNotificationReceiverP__Timer1__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x4077d8f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 139 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 91 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static inline /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type __nesc_temp = 
#line 93
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;

      {
#line 93
        __nesc_atomic_end(__nesc_atomic); 
#line 93
        return __nesc_temp;
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__1__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__CommandQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__2__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__StatusQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__DataQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue[/*SerialPacketForwarderC.CommandQueue*/QueueC__1__head];
}

#line 85
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.CommandQueue*/QueueC__1__queue_t t = /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__empty()) {
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__head++;
      if (/*SerialPacketForwarderC.CommandQueue*/QueueC__1__head == 32) {
#line 90
        /*SerialPacketForwarderC.CommandQueue*/QueueC__1__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__size--;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__1__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__CommandQueue__t  SerialPacketForwarderP__CommandQueue__dequeue(void ){
#line 81
  struct command_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 48 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static error_t SerialPacketForwarderP__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = Atm128Rfa1SerialP__Uart1Stream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 194 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *cp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[PACKET_COMMAND];
  buf[i++] = ':';

  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->WE];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->HE];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->BE];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(cp->opcode >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->opcode & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(cp->value >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->value & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((cp->address >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(cp->address >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(cp->address >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[cp->address & 0x0F];

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 12 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(dp, buf);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__CommandQueue__t  SerialPacketForwarderP__CommandQueue__head(void ){
#line 73
  struct command_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__1__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue[/*SerialPacketForwarderC.StatusQueue*/QueueC__2__head];
}

#line 85
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.StatusQueue*/QueueC__2__queue_t t = /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__empty()) {
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__head++;
      if (/*SerialPacketForwarderC.StatusQueue*/QueueC__2__head == 32) {
#line 90
        /*SerialPacketForwarderC.StatusQueue*/QueueC__2__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__size--;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__2__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__StatusQueue__t  SerialPacketForwarderP__StatusQueue__dequeue(void ){
#line 81
  struct status_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 218 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *sp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[PACKET_STATUS];
  buf[i++] = ':';

  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((sp->node_id >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(sp->node_id >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(sp->node_id >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[sp->node_id & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(sp->burstInterval >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[sp->burstInterval & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[sp->intervalType];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[sp->historyEnable];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[sp->burstEnable];

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 14 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(dp, buf);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__StatusQueue__t  SerialPacketForwarderP__StatusQueue__head(void ){
#line 73
  struct status_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__2__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue[/*SerialPacketForwarderC.DataQueue*/QueueC__0__head];
}

#line 85
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.DataQueue*/QueueC__0__queue_t t = /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__empty()) {
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__head++;
      if (/*SerialPacketForwarderC.DataQueue*/QueueC__0__head == 255) {
#line 90
        /*SerialPacketForwarderC.DataQueue*/QueueC__0__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__size--;
      /*SerialPacketForwarderC.DataQueue*/QueueC__0__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__DataQueue__t  SerialPacketForwarderP__DataQueue__dequeue(void ){
#line 81
  struct data_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 153 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[PACKET_DATA];
  buf[i++] = ':';

  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->data1 >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data1 >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data1 >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->data1 & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->data2 >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data2 >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data2 >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->data2 & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->data3 >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data3 >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data3 >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->data3 & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->data4 >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data4 >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data4 >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->data4 & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->data5 >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data5 >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->data5 >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->data5 & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->source >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->source >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->source >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->source & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[((dp->seqNo >> 8) >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->seqNo >> 8) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[(dp->seqNo >> 4) & 0x0F];
  buf[i++] = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__hexTable[dp->seqNo & 0x0F];

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 13 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf){
#line 13
  unsigned char __nesc_result;
#line 13

#line 13
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(dp, buf);
#line 13

#line 13
  return __nesc_result;
#line 13
}
#line 13
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__DataQueue__t  SerialPacketForwarderP__DataQueue__head(void ){
#line 73
  struct data_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 177 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__forwardNextPacketTask__runTask(void )
{
  uint8_t localBuf[64];
  uint8_t len;
  status_packet_t localStatusPacket;
  data_packet_t localDataPacket;
  command_packet_t localCommandPacket;

#line 184
  if (!SerialPacketForwarderP__DataQueue__empty()) 
    {
      localDataPacket = SerialPacketForwarderP__DataQueue__head();
      len = SerialPacketForwarderP__PacketTypes__dataPacketToStr(&localDataPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__DataQueue__dequeue();
        }
      else {
#line 191
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 193
  if (!SerialPacketForwarderP__StatusQueue__empty()) 
    {
      localStatusPacket = SerialPacketForwarderP__StatusQueue__head();
      len = SerialPacketForwarderP__PacketTypes__statusPacketToStr(&localStatusPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__StatusQueue__dequeue();
        }
      else {
#line 200
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 202
  if (!SerialPacketForwarderP__CommandQueue__empty()) 
    {
      localCommandPacket = SerialPacketForwarderP__CommandQueue__head();
      len = SerialPacketForwarderP__PacketTypes__commandPacketToStr(&localCommandPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__CommandQueue__dequeue();
        }
      else {
#line 209
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 211
  if ((!SerialPacketForwarderP__DataQueue__empty() || !SerialPacketForwarderP__StatusQueue__empty()) || !SerialPacketForwarderP__CommandQueue__empty()) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
}

# 107 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToStatusPacket(status_packet_t *sp, uint8_t *buf)
{

  uint8_t i = 0;
  uint8_t len = 3 + 4 + 2 + 3 + 1;

#line 112
  if (buf[i++] != '[') {
    return PACKET_ERROR;
    }
#line 114
  if (/*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) != PACKET_STATUS) {
    return PACKET_ERROR;
    }
#line 116
  if (buf[i++] != ':') {
    return PACKET_ERROR;
    }
#line 118
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
  sp->node_id = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  sp->node_id |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  sp->node_id |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  sp->node_id |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  sp->burstInterval = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  sp->burstInterval |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  sp->intervalType = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  sp->historyEnable = buf[i++] & 0x01;
  sp->burstEnable = buf[i++] & 0x01;

  if (buf[i] != ']') {
    return PACKET_ERROR;
    }
#line 133
  return PACKET_STATUS;
}

# 10 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__strToStatusPacket(status_packet_t *sp, uint8_t *buf){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToStatusPacket(sp, buf);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 60 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToDataPacket(data_packet_t *dp, uint8_t *buf)
{

  uint8_t i = 0;
  uint8_t len = 3 + 7 * 4 + 1;

#line 65
  if (buf[i++] != '[') {
    return PACKET_ERROR;
    }
#line 67
  if (/*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) != PACKET_DATA) {
    return PACKET_ERROR;
    }
#line 69
  if (buf[i++] != ':') {
    return PACKET_ERROR;
    }
#line 71
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
  dp->data1 = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->data1 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->data1 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->data1 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->data2 = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->data2 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->data2 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->data2 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->data3 = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->data3 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->data3 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->data3 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->data4 = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->data4 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->data4 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->data4 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->data5 = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->data5 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->data5 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->data5 |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->source = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->source |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->source |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->source |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  dp->seqNo = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  dp->seqNo |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  dp->seqNo |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  dp->seqNo |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);

  if (buf[i] != ']') {
    return PACKET_ERROR;
    }
#line 105
  return PACKET_DATA;
}

# 9 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__strToDataPacket(data_packet_t *dp, uint8_t *buf){
#line 9
  unsigned char __nesc_result;
#line 9

#line 9
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToDataPacket(dp, buf);
#line 9

#line 9
  return __nesc_result;
#line 9
}
#line 9
# 57 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )46U ^= 1 << 3;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__toggle();
#line 42
}
#line 42
# 86 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 86
{
  LedsP__Led1__toggle();
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void DummyNotificationReceiverP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 49 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/DummyNotificationReceiverP.nc"
static inline void DummyNotificationReceiverP__CommandNotification__notify(command_packet_t val)
{
  DummyNotificationReceiverP__comPack = val;
  DummyNotificationReceiverP__commandTaken = TRUE;
  DummyNotificationReceiverP__Leds__led1Toggle();
}

# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static void SerialPacketForwarderP__CommandNotification__notify(SerialPacketForwarderP__CommandNotification__val_t val){
#line 74
  DummyNotificationReceiverP__CommandNotification__notify(val);
#line 74
}
#line 74
# 30 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf)
{

  uint8_t i = 0;
  uint8_t len = 3 + 3 + 2 + 2 + 4 + 1;

#line 35
  if (buf[i++] != '[') {
    return PACKET_ERROR;
    }
#line 37
  if (/*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) != PACKET_COMMAND) {
    return PACKET_ERROR;
    }
#line 39
  if (buf[i++] != ':') {
    return PACKET_ERROR;
    }
#line 41
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
  cp->WE = buf[i++] != 0;
  cp->HE = buf[i++] != 0;
  cp->BE = buf[i++] != 0;
  cp->opcode = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  cp->opcode |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  cp->value = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  cp->value |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);
  cp->address = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 12;
  cp->address |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 8;
  cp->address |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]) << 4;
  cp->address |= /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[i++]);

  if (buf[i] != ']') {
    return PACKET_ERROR;
    }
#line 58
  return PACKET_COMMAND;
}

# 8 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf){
#line 8
  unsigned char __nesc_result;
#line 8

#line 8
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(cp, buf);
#line 8

#line 8
  return __nesc_result;
#line 8
}
#line 8
# 57 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )46U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__toggle();
#line 42
}
#line 42
# 72 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 72
{
  LedsP__Led0__toggle();
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void SerialPacketForwarderP__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 135 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf)
{
  int len;
#line 137
  int type;

#line 138
  if (buf[0] != '[') {
    return PACKET_ERROR;
    }
#line 140
  if (buf[2] != ':') {
    return PACKET_ERROR;
    }
#line 142
  switch ((type = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(buf[1]))) 
    {
      case PACKET_COMMAND: len = 3 + 3 + 2 + 2 + 4 + 1;
#line 144
      break;
      case PACKET_DATA: len = 3 + 7 * 4 + 1;
#line 145
      break;
      case PACKET_STATUS: len = 3 + 4 + 2 + 3 + 1;
#line 146
      break;
      default: return PACKET_ERROR;
    }
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
#line 151
  return type;
}

# 16 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__getTypeOfPacket(uint8_t *buf){
#line 16
  unsigned char __nesc_result;
#line 16

#line 16
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(buf);
#line 16

#line 16
  return __nesc_result;
#line 16
}
#line 16
# 112 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__processReceiveBufferTask__runTask(void )
{

  uint8_t localBuf[64];
  uint8_t type;
  data_packet_t localDataPacket;
  command_packet_t localCommandPacket;
  status_packet_t localStatusPacket;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      strncpy((char *)localBuf, (char *)SerialPacketForwarderP__receiveBuffer, SerialPacketForwarderP__pos);
      localBuf[SerialPacketForwarderP__pos] = 0;
    }
#line 124
    __nesc_atomic_end(__nesc_atomic); }
  type = SerialPacketForwarderP__PacketTypes__getTypeOfPacket(localBuf);
  if (type != PACKET_ERROR) 
    {
      SerialPacketForwarderP__Leds__led0Toggle();
    }
  if (type == PACKET_COMMAND) 
    {
      type = SerialPacketForwarderP__PacketTypes__strToCommandPacket(&localCommandPacket, localBuf);
      if (type == PACKET_ERROR) {
        return;
        }
      SerialPacketForwarderP__gCommandPacket = localCommandPacket;
      SerialPacketForwarderP__CommandNotification__notify(SerialPacketForwarderP__gCommandPacket);
    }
  else {
#line 139
    if (type == PACKET_DATA) 
      {
        type = SerialPacketForwarderP__PacketTypes__strToDataPacket(&localDataPacket, localBuf);
        if (type == PACKET_ERROR) {
          return;
          }
      }
    else {
#line 145
      if (type == PACKET_STATUS) 
        {
          type = SerialPacketForwarderP__PacketTypes__strToStatusPacket(&localStatusPacket, localBuf);
          if (type == PACKET_ERROR) {
            return;
            }
        }
      }
    }
}

# 441 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__unexpectedByteReceivedTask__runTask(void )
{
  uint8_t localUnexpectedByte;

#line 444
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 444
    {
      localUnexpectedByte = Atm128Rfa1SerialP__rxUnexpectedByte;
    }
#line 446
    __nesc_atomic_end(__nesc_atomic); }
  Atm128Rfa1SerialP__Uart1Stream__receivedByte(localUnexpectedByte);
}

# 76 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
{
}

# 99 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void Atm128Rfa1SerialP__Uart1Stream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  SerialPacketForwarderP__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 429 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__receiveDoneTask__runTask(void )
{
  Atm128Rfa1SerialP__Uart1Stream__receiveDone(Atm128Rfa1SerialP__rxBuf, Atm128Rfa1SerialP__rxLen, Atm128Rfa1SerialP__rxResult);
  Atm128Rfa1SerialP__rxBuf = (void *)0;
  Atm128Rfa1SerialP__rxLen = 0;
  Atm128Rfa1SerialP__rxPos = 0;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128Rfa1SerialP__rxBusy = FALSE;
    }
#line 438
    __nesc_atomic_end(__nesc_atomic); }
}

# 108 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
{
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void Atm128Rfa1SerialP__Uart1Stream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  SerialPacketForwarderP__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 424 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__sendDoneTask__runTask(void )
{
  Atm128Rfa1SerialP__Uart1Stream__sendDone(Atm128Rfa1SerialP__txBuf, Atm128Rfa1SerialP__txLen, Atm128Rfa1SerialP__txResult);
}

#line 408
static inline void Atm128Rfa1SerialP__Uart1StreamBlocking__default__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 408
{
}

# 99 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void Atm128Rfa1SerialP__Uart1StreamBlocking__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  Atm128Rfa1SerialP__Uart1StreamBlocking__default__receiveDone(buf, len, error);
#line 99
}
#line 99
# 419 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__receiveBlockingDoneTask__runTask(void )
{
  Atm128Rfa1SerialP__Uart1StreamBlocking__receiveDone(Atm128Rfa1SerialP__rxBuf, Atm128Rfa1SerialP__rxLen, Atm128Rfa1SerialP__rxResult);
}

#line 406
static inline void Atm128Rfa1SerialP__Uart1StreamBlocking__default__sendDone(uint8_t *buf, uint16_t len, error_t err)
#line 406
{
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void Atm128Rfa1SerialP__Uart1StreamBlocking__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  Atm128Rfa1SerialP__Uart1StreamBlocking__default__sendDone(buf, len, error);
#line 57
}
#line 57
# 414 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline void Atm128Rfa1SerialP__sendBlockingDoneTask__runTask(void )
{
  Atm128Rfa1SerialP__Uart1StreamBlocking__sendDone(Atm128Rfa1SerialP__txBuf, Atm128Rfa1SerialP__txLen, Atm128Rfa1SerialP__txResult);
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialPacketForwarderP__UartControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128Rfa1SerialP__Uart1Control__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 55 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__SerialPacketForwarderInit__init(void )
{
  SerialPacketForwarderP__UartControl__start();
  SerialPacketForwarderP__CommandNotification__enable();
  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialPacketForwarderP__SerialPacketForwarderInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 113 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 113
{
   __asm volatile ("sei");}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void DummyNotificationReceiverP__Timer1__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
inline static void DummyNotificationReceiverP__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static error_t DummyNotificationReceiverP__CommandNotification__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = SerialPacketForwarderP__CommandNotification__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 29 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/DummyNotificationReceiverP.nc"
static inline void DummyNotificationReceiverP__Boot__booted(void )
{
  DummyNotificationReceiverP__statusPacket.node_id = 0x0002;
  DummyNotificationReceiverP__statusPacket.burstEnable = 1;
  DummyNotificationReceiverP__statusPacket.burstInterval = 16;
  DummyNotificationReceiverP__statusPacket.historyEnable = 1;
  DummyNotificationReceiverP__statusPacket.intervalType = INTERVAL_TYPE_DAYS;

  DummyNotificationReceiverP__dataPacket.source = 0x0002;
  DummyNotificationReceiverP__dataPacket.data1 = 0;
  DummyNotificationReceiverP__dataPacket.data2 = 0;
  DummyNotificationReceiverP__dataPacket.data3 = 0;
  DummyNotificationReceiverP__dataPacket.data4 = 0;
  DummyNotificationReceiverP__dataPacket.data5 = 0;
  DummyNotificationReceiverP__dataPacket.seqNo = 0;
  DummyNotificationReceiverP__CommandNotification__enable();

  DummyNotificationReceiverP__Timer0__startPeriodic(1000);
  DummyNotificationReceiverP__Timer1__startPeriodic(5000);
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  DummyNotificationReceiverP__Boot__booted();
#line 60
}
#line 60
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 165 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 165
{
  return m1 < m2 ? m1 : m2;
}

# 450 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline mcu_power_t Atm128Rfa1SerialP__Uart1PowerOverride__lowestState(void )
{
  if (Atm128Rfa1SerialP__started == TRUE) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 455
    return ATM128_POWER_DOWN;
    }
}

# 495 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline mcu_power_t HplAtmRfa1TimerMacP__McuPowerOverride__lowestState(void )
{


  if (* (volatile uint8_t *)0xDC & (1 << 5)) {
    return ATM128_POWER_SAVE;
    }
  else {
#line 502
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmRfa1TimerMacP__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, Atm128Rfa1SerialP__Uart1PowerOverride__lowestState());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 108 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 108
{

  if (McuSleepC__powerState < 0) {
      McuSleepC__powerState = McuSleepC__McuPowerOverride__lowestState();
      * (volatile uint8_t *)(0x33 + 0x20) = (* (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | __extension__ ({
#line 112
        uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[McuSleepC__powerState];
#line 112
        uint8_t __result;

#line 112
         __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }




  * (volatile uint8_t *)(0x33 + 0x20) |= 1 << 0;

   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 63 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
__attribute((signal))   void __vector_36(void )
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) 
    {
      Atm128Rfa1Uart1InterruptsP__privReceivedByte = * (volatile uint8_t *)0xCE;


      Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__rxInterruptHandler(Atm128Rfa1Uart1InterruptsP__privReceivedByte);
    }
}

# 170 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 80 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static void SerialPacketForwarderP__UartStream__receivedByte(uint8_t byte)
{
  SerialPacketForwarderP__UartByte__send(byte);
  if (byte == '[') 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
        {
          SerialPacketForwarderP__pos = 0;
          SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = byte;
        }
#line 88
        __nesc_atomic_end(__nesc_atomic); }
      SerialPacketForwarderP__started = 1;
    }
  else {
#line 91
    if (byte == ']' && SerialPacketForwarderP__started) 
      {
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 93
          {
            SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = byte;
            SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos] = 0;
          }
#line 96
          __nesc_atomic_end(__nesc_atomic); }
        SerialPacketForwarderP__started = 0;
        SerialPacketForwarderP__processReceiveBufferTask__postTask();
      }
    else {
#line 100
      if (SerialPacketForwarderP__started) 
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 102
            {
              SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = byte;
            }
#line 104
            __nesc_atomic_end(__nesc_atomic); }
        }
      }
    }
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1Uart1InterruptsP.nc"
__attribute((signal))   void __vector_38(void )
{
  Atm128Rfa1Uart1InterruptsP__Uart1Interrupts__txInterruptHandler();
}

# 109 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
__attribute((signal))   void __vector_68(void )
#line 109
{
#line 109
  HplAtmRfa1TimerMacP__Counter__overflow();
}

#line 186
__attribute((signal))   void __vector_65(void )
#line 186
{
#line 186
  HplAtmRfa1TimerMacP__CompareA__fired();
}

# 107 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm(void )
{
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type now = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Counter__get();
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type remaining;




  expires = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;


  remaining = (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = now + /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = remaining - /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 += /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = 0;
    }
  /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__AlarmFrom__startAt((/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )now << 6, 
  (/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__from_size_type )remaining << 6);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;
      /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 72 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static uint32_t HplAtmRfa1TimerMacP__Counter__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  /* atomic removed: atomic calls only */
  {
    time.ll = * (volatile uint8_t *)0xE1;
    time.lh = * (volatile uint8_t *)0xE2;
    time.hl = * (volatile uint8_t *)0xE3;
    time.hh = * (volatile uint8_t *)0xE4;
  }

  return time.full;
}

#line 266
__attribute((signal))   void __vector_66(void )
#line 266
{
#line 266
  HplAtmRfa1TimerMacP__CompareB__fired();
}

#line 346
__attribute((signal))   void __vector_67(void )
#line 346
{
#line 346
  HplAtmRfa1TimerMacP__CompareC__fired();
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 76 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static error_t Atm128Rfa1SerialP__Uart1Init__init(void )
{
  uint16_t brr = 34;

#line 79
  Atm128Rfa1SerialP__m_byte_time = 68;
  * (volatile uint8_t *)0xC8 &= ~(1 << 7);
  * (volatile uint8_t *)0xC8 &= ~(1 << 6);

  * (volatile uint8_t *)0xC8 |= 1 << 1;

  * (volatile uint8_t *)0xC9 &= ~(1 << 5);
  * (volatile uint8_t *)0xC9 &= ~(1 << 2);

  * (volatile uint8_t *)0xC9 |= 1 << 7;
  * (volatile uint8_t *)0xC9 |= 1 << 6;

  * (volatile uint8_t *)0xC9 |= 1 << 4;
  * (volatile uint8_t *)0xC9 |= 1 << 3;

  * (volatile uint8_t *)0xCA &= ~(1 << 7);
  * (volatile uint8_t *)0xCA &= ~(1 << 6);
  * (volatile uint8_t *)0xCA &= ~(1 << 5);
  * (volatile uint8_t *)0xCA &= ~(1 << 4);
  * (volatile uint8_t *)0xCA &= ~(1 << 0);

  * (volatile uint8_t *)0xCA |= 1 << 2;
  * (volatile uint8_t *)0xCA |= 1 << 1;

  * (volatile uint8_t *)0xCD = (uint8_t )(brr >> 8);
  * (volatile uint8_t *)0xCC = (uint8_t )(brr & 0xFF);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128Rfa1SerialP__rxBusy = FALSE;
      Atm128Rfa1SerialP__txBusy = FALSE;
      Atm128Rfa1SerialP__rxBuf = (void *)0;
      Atm128Rfa1SerialP__txBuf = (void *)0;
      Atm128Rfa1SerialP__rxPos = 0;
      Atm128Rfa1SerialP__txPos = 0;
      Atm128Rfa1SerialP__rxLen = 0;
      Atm128Rfa1SerialP__txLen = 0;
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 134 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403c8b28){
#line 75
  switch (arg_0x403c8b28) {
#line 75
    case Atm128Rfa1SerialP__sendBlockingDoneTask:
#line 75
      Atm128Rfa1SerialP__sendBlockingDoneTask__runTask();
#line 75
      break;
#line 75
    case Atm128Rfa1SerialP__receiveBlockingDoneTask:
#line 75
      Atm128Rfa1SerialP__receiveBlockingDoneTask__runTask();
#line 75
      break;
#line 75
    case Atm128Rfa1SerialP__sendDoneTask:
#line 75
      Atm128Rfa1SerialP__sendDoneTask__runTask();
#line 75
      break;
#line 75
    case Atm128Rfa1SerialP__receiveDoneTask:
#line 75
      Atm128Rfa1SerialP__receiveDoneTask__runTask();
#line 75
      break;
#line 75
    case Atm128Rfa1SerialP__unexpectedByteReceivedTask:
#line 75
      Atm128Rfa1SerialP__unexpectedByteReceivedTask__runTask();
#line 75
      break;
#line 75
    case SerialPacketForwarderP__processReceiveBufferTask:
#line 75
      SerialPacketForwarderP__processReceiveBufferTask__runTask();
#line 75
      break;
#line 75
    case SerialPacketForwarderP__forwardNextPacketTask:
#line 75
      SerialPacketForwarderP__forwardNextPacketTask__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403c8b28);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 147 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformAlarmC.nc"
static void /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__Alarm__startAt(/*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type t0, /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_t0 = t0;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__m_dt = dt;
      /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0__set_alarm();
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}

# 312 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static error_t Atm128Rfa1SerialP__Uart1Stream__send(uint8_t *buf, uint16_t len)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      if (!Atm128Rfa1SerialP__started) 
        {
          unsigned char __nesc_temp = 
#line 316
          FAIL;

          {
#line 316
            __nesc_atomic_end(__nesc_atomic); 
#line 316
            return __nesc_temp;
          }
        }
    }
#line 319
    __nesc_atomic_end(__nesc_atomic); }
  if (len == 0 || len > 64) {
    return FAIL;
    }
#line 322
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (Atm128Rfa1SerialP__txBusy) 
        {
          unsigned char __nesc_temp = 
#line 325
          EBUSY;

          {
#line 325
            __nesc_atomic_end(__nesc_atomic); 
#line 325
            return __nesc_temp;
          }
        }
#line 326
      Atm128Rfa1SerialP__txBusy = TRUE;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 328
    {
      strncpy((char *)Atm128Rfa1SerialP__txTmpBuf, (char *)buf, len);
    }
#line 330
    __nesc_atomic_end(__nesc_atomic); }
  Atm128Rfa1SerialP__txBuf = Atm128Rfa1SerialP__txTmpBuf;
  Atm128Rfa1SerialP__txLen = len;
  Atm128Rfa1SerialP__txPos = 0;

  * (volatile uint8_t *)0xCE = Atm128Rfa1SerialP__txBuf[Atm128Rfa1SerialP__txPos++];
  Atm128Rfa1SerialP__txResult = SUCCESS;
  return SUCCESS;
}

# 20 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/PacketTypesP.nc"
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__asciihexToNum(uint8_t c)
{
  if (c >= 'a' && c <= 'z') {
    return (uint8_t )(c - 'a' + 10);
    }
#line 24
  if (c >= 'A' && c <= 'Z') {
    return (uint8_t )(c - 'A' + 10);
    }
#line 26
  if (c >= '0' && c <= '9') {
    return (uint8_t )(c - '0');
    }
#line 28
  return 0;
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static error_t Atm128Rfa1SerialP__Uart1Control__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 50
    {
      Atm128Rfa1SerialP__started = TRUE;
    }
#line 52
    __nesc_atomic_end(__nesc_atomic); }
  return Atm128Rfa1SerialP__Uart1Init__init();
}

# 69 "/home/alpsayin/tinyos_workspace/SerialPacketForwarder/src/SerialPacketForwarderP.nc"
static error_t SerialPacketForwarderP__CommandNotification__enable(void )
{
  SerialPacketForwarderP__enabled = TRUE;
  SerialPacketForwarderP__started = FALSE;
  return SerialPacketForwarderP__UartControl__start();
}

# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

