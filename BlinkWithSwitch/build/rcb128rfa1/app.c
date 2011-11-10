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
# 105 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 125
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 135
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
#line 170
#line 162
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4249 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
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
  ATM128_ADC_SNGL_GND
};







#line 133
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
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4259 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4260 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 15 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/hardware.h"
enum __nesc_unnamed4261 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};
# 43 "/opt/tinyos-main/src/tinyos-main/tos/types/Leds.h"
enum __nesc_unnamed4262 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
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
  int (*put)(char arg_0x40422738, struct __file *arg_0x40422920);
  int (*get)(struct __file *arg_0x40422d10);
  void *udata;
};
#line 405
struct __file;
#line 417
struct __file;
# 42 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayer.h"
#line 39
typedef nx_struct rfa1_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rfa1_header_t;









#line 44
typedef struct rfa1_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rfa1_metadata_t;


enum rfa1_trx_status_enums {

  RFA1_CCA_DONE = 1 << 7, 
  RFA1_CCA_STATUS = 1 << 6, 
  RFA1_TRX_STATUS_MASK = 0x1F, 
  RFA1_P_ON = 0, 
  RFA1_BUSY_RX = 1, 
  RFA1_BUSY_TX = 2, 
  RFA1_RX_ON = 6, 
  RFA1_TRX_OFF = 8, 
  RFA1_PLL_ON = 9, 
  RFA1_SLEEP = 15, 
  RFA1_BUSY_RX_AACK = 17, 
  RFA1_BUSR_TX_ARET = 18, 
  RFA1_RX_AACK_ON = 22, 
  RFA1_TX_ARET_ON = 25, 
  RFA1_RX_ON_NOCLK = 28, 
  RFA1_AACK_ON_NOCLK = 29, 
  RFA1_BUSY_RX_AACK_NOCLK = 30, 
  RFA1_STATE_TRANSITION_IN_PROGRESS = 31, 
  RFA1_TRAC_STATUS_MASK = 0xE0, 
  RFA1_TRAC_SUCCESS = 0, 
  RFA1_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RFA1_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RFA1_TRAC_NO_ACK = 5 << 5, 
  RFA1_TRAC_INVALID = 7 << 5, 
  RFA1_TRX_CMD_MASK = 0x1F, 
  RFA1_NOP = 0, 
  RFA1_TX_START = 2, 
  RFA1_FORCE_TRX_OFF = 3
};

enum rfa1_phy_register_enums {

  RFA1_TX_PWR_MASK = 0x0F, 
  RFA1_TX_AUTO_CRC_ON = 1 << 5, 
  RFA1_RSSI_MASK = 0x1F, 
  RFA1_CCA_REQUEST = 1 << 7, 
  RFA1_CCA_MODE_0 = 0 << 5, 
  RFA1_CCA_MODE_1 = 1 << 5, 
  RFA1_CCA_MODE_2 = 2 << 5, 
  RFA1_CCA_MODE_3 = 3 << 5, 
  RFA1_CHANNEL_DEFAULT = 11, 
  RFA1_CHANNEL_MASK = 0x1F, 
  RFA1_CCA_CS_THRES_SHIFT = 4, 
  RFA1_CCA_ED_THRES_SHIFT = 0
};

enum rfa1_control_register_enums {

  RFA1_AVREG_EXT = 1 << 7, 
  RFA1_AVDD_OK = 1 << 6, 
  RFA1_DVREG_EXT = 1 << 3, 
  RFA1_DVDD_OK = 1 << 2, 
  RFA1_BATMON_OK = 1 << 5, 
  RFA1_BATMON_VHR = 1 << 4, 
  RFA1_BATMON_VTH_MASK = 0x0F, 
  RFA1_XTAL_MODE_OFF = 0 << 4, 
  RFA1_XTAL_MODE_EXTERNAL = 4 << 4, 
  RFA1_XTAL_MODE_INTERNAL = 15 << 4
};

enum rfa1_pll_register_enums {

  RFA1_PLL_CF_START = 1 << 7, 
  RFA1_PLL_DCU_START = 1 << 7
};
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer.h"
typedef struct T62khz {
} 
#line 39
T62khz;







enum __nesc_unnamed4267 {


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


enum __nesc_unnamed4268 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4269 {


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


enum __nesc_unnamed4270 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4271 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4272 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4273 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4274 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RadioConfig.h"
enum __nesc_unnamed4275 {






  RFA1_CCA_MODE_VALUE = 3, 





  RFA1_CCA_THRES_VALUE = 0xC7
};
#line 93
typedef T62khz TRadio;




typedef uint32_t tradio_size;
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 38
typedef nx_struct ieee154_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_header_t;
#line 75
enum ieee154_fcf_mask_enums {
  IEEE154_TYPE_MASK = 7, 
  IEEE154_ADDR_MASK = 3
};
# 6 "/opt/tinyos-main/src/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4276 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4277 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1Radio.h"
#line 49
typedef nx_struct rfa1packet_header_t {

  rfa1_header_t rfa1;
  ieee154_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rfa1packet_header_t;




#line 61
typedef nx_struct rfa1packet_footer_t {
} __attribute__((packed)) 

rfa1packet_footer_t;
#line 77
#line 66
typedef struct rfa1packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rfa1_metadata_t rfa1;
} rfa1packet_metadata_t;
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4278 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4279 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4280 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 43 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/platform_message.h"
#line 40
typedef union message_header {
  rfa1packet_header_t rfa1;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rfa1packet_footer_t rfa1;
} message_footer_t;



#line 49
typedef union message_metadata {
  rfa1packet_metadata_t rfa1;
} message_metadata_t;
# 19 "/opt/tinyos-main/src/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/printf/printf.h"
#line 77
typedef nx_struct printf_msg {
  nx_uint8_t buffer[28];
} __attribute__((packed)) printf_msg_t;

enum __nesc_unnamed4281 {
  AM_PRINTF_MSG = 100
};
# 6 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/MyDummyConstants.h"
enum __nesc_unnamed4282 {

  ALP = 'A', 
  TIAN = 'T', 
  ENDL = '\n'
};

enum __nesc_unnamed4283 {

  TX_BUFFER_SIZE = 64, 
  RX_BUFFER_SIZE = 64
};

unsigned char hexTable[18] = "01234567890ABCDEF";
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281Usart.h"
#line 42
typedef union __nesc_unnamed4284 {
  struct Atm1281_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm1281UsartStatus_t;
#line 69
#line 57
typedef union __nesc_unnamed4285 {
  struct Atm1281_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm1281UsartControl_t;

enum __nesc_unnamed4286 {
  ATM1281_UART_DATA_SIZE_5_BITS = 0, 
  ATM1281_UART_DATA_SIZE_6_BITS = 1, 
  ATM1281_UART_DATA_SIZE_7_BITS = 2, 
  ATM1281_UART_DATA_SIZE_8_BITS = 3
};
#line 88
#line 79
typedef union __nesc_unnamed4287 {
  uint8_t flat;
  struct Atm1281_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 2;
  } bits;
} Atm1281UsartMode_t;





enum __nesc_unnamed4288 {
  ATM1281_4800_BAUD_1MHZ = 12, 
  ATM1281_9600_BAUD_1MHZ = 6, 
  ATM1281_19200_BAUD_1MHZ = 2, 
  ATM1281_38400_BAUD_1MHZ = 1, 
  ATM1281_57600_BAUD_1MHZ = 0, 

  ATM1281_4800_BAUD_1MHZ_2X = 25, 
  ATM1281_9600_BAUD_1MHZ_2X = 12, 
  ATM1281_19200_BAUD_1MHZ_2X = 25, 
  ATM1281_38400_BAUD_1MHZ_2X = 2, 
  ATM1281_57600_BAUD_1MHZ_2X = 1, 

  ATM1281_4800_BAUD_4MHZ = 51, 
  ATM1281_9600_BAUD_4MHZ = 25, 
  ATM1281_19200_BAUD_4MHZ = 12, 
  ATM1281_38400_BAUD_4MHZ = 6, 
  ATM1281_57600_BAUD_4MHZ = 3, 
  ATM1281_115200_BAUD_4MHZ = 1, 

  ATM1281_4800_BAUD_4MHZ_2X = 103, 
  ATM1281_9600_BAUD_4MHZ_2X = 51, 
  ATM1281_19200_BAUD_4MHZ_2X = 25, 
  ATM1281_38400_BAUD_4MHZ_2X = 12, 
  ATM1281_57600_BAUD_4MHZ_2X = 8, 
  ATM1281_115200_BAUD_4MHZ_2X = 3, 

  ATM1281_4800_BAUD_7MHZ = 95, 
  ATM1281_9600_BAUD_7MHZ = 47, 
  ATM1281_19200_BAUD_7MHZ = 23, 
  ATM1281_38400_BAUD_7MHZ = 11, 
  ATM1281_57600_BAUD_7MHZ = 7, 
  ATM1281_115200_BAUD_7MHZ = 3, 

  ATM1281_4800_BAUD_7MHZ_2X = 191, 
  ATM1281_9600_BAUD_7MHZ_2X = 95, 
  ATM1281_19200_BAUD_7MHZ_2X = 47, 
  ATM1281_38400_BAUD_7MHZ_2X = 23, 
  ATM1281_57600_BAUD_7MHZ_2X = 15, 
  ATM1281_115200_BAUD_7MHZ_2X = 7, 

  ATM1281_4800_BAUD_8MHZ = 103, 
  ATM1281_9600_BAUD_8MHZ = 51, 
  ATM1281_19200_BAUD_8MHZ = 25, 
  ATM1281_38400_BAUD_8MHZ = 12, 
  ATM1281_57600_BAUD_8MHZ = 8, 
  ATM1281_115200_BAUD_8MHZ = 3, 

  ATM1281_4800_BAUD_8MHZ_2X = 207, 
  ATM1281_9600_BAUD_8MHZ_2X = 103, 
  ATM1281_19200_BAUD_8MHZ_2X = 51, 
  ATM1281_38400_BAUD_8MHZ_2X = 25, 
  ATM1281_57600_BAUD_8MHZ_2X = 16, 
  ATM1281_115200_BAUD_8MHZ_2X = 8, 

  ATM1281_4800_BAUD_16MHZ = 207, 
  ATM1281_9600_BAUD_16MHZ = 103, 
  ATM1281_19200_BAUD_16MHZ = 51, 
  ATM1281_38400_BAUD_16MHZ = 25, 
  ATM1281_57600_BAUD_16MHZ = 16, 
  ATM1281_115200_BAUD_16MHZ = 8, 

  ATM1281_4800_BAUD_16MHZ_2X = 416, 
  ATM1281_9600_BAUD_16MHZ_2X = 207, 
  ATM1281_19200_BAUD_16MHZ_2X = 103, 
  ATM1281_38400_BAUD_16MHZ_2X = 51, 
  ATM1281_57600_BAUD_16MHZ_2X = 34, 
  ATM1281_115200_BAUD_16MHZ_2X = 16
};
#line 190
#line 165
typedef struct __nesc_unnamed4289 {
  uint16_t ubr : 16;
  uint8_t mpcm : 1;
  uint8_t u2x : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;
  uint8_t  : 1;

  uint8_t txb8 : 1;
  uint8_t rxb8 : 1;
  uint8_t ucsz2 : 1;
  uint8_t txen : 1;
  uint8_t rxen : 1;
  uint8_t udrie : 1;
  uint8_t txcie : 1;
  uint8_t rxcie : 1;
  uint8_t ucpol : 1;
  uint8_t ucsz : 2;
  uint8_t usbs : 1;
  uint8_t upm : 2;
  uint8_t umsel : 2;
} 
Atm1281UartConfig_t;







#line 192
typedef struct __nesc_unnamed4290 {
  uint8_t UBBRL;
  uint8_t UBBRH;
  uint8_t UCSRA;
  uint8_t UCSRB;
  uint8_t UCSRC;
} Atm1281UartRegisters_t;




#line 200
typedef union __nesc_unnamed4291 {
  Atm1281UartConfig_t uartConfig;
  Atm1281UartRegisters_t uartRegisters;
} Atm1281UartUnionConfig_t;


Atm1281UartUnionConfig_t atm1281_uart_default_config = { { 




.ubr = ATM1281_57600_BAUD_16MHZ_2X, 
#line 250
.mpcm = 0, 
.u2x = 1, 
.txb8 = 0, 
.rxb8 = 0, 
.ucsz2 = 0, 
.txen = 1, 
.rxen = 1, 
.udrie = 0, 
.txcie = 1, 
.rxcie = 1, 
.ucpol = 0, 
.ucsz = 3, 
.usbs = 0, 
.upm = 0, 
.umsel = 0 } };
#line 284
#line 269
typedef struct __nesc_unnamed4292 {
  uint16_t ubr : 16;
  uint8_t  : 8;
  uint8_t  : 3;
  uint8_t txen : 1;
  uint8_t rxen : 1;
  uint8_t udrie : 1;
  uint8_t txcie : 1;
  uint8_t rxcie : 1;
  uint8_t ucpol : 1;
  uint8_t ucpha : 1;
  uint8_t udord : 1;
  uint8_t  : 3;
  uint8_t umsel : 2;
} 
Atm1281SpiConfig_t;







#line 286
typedef struct __nesc_unnamed4293 {
  uint8_t UBBRL;
  uint8_t UBBRH;
  uint8_t UCSRA;
  uint8_t UCSRB;
  uint8_t UCSRC;
} Atm1281SpiRegisters_t;




#line 294
typedef union __nesc_unnamed4294 {
  Atm1281SpiConfig_t uartConfig;
  Atm1281SpiRegisters_t uartRegisters;
} Atm1281SpiUnionConfig_t;
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
# 33 "/opt/tinyos-main/src/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli BlinkC__Timer0__precision_tag;
typedef TMilli BlinkC__Timer1__precision_tag;
typedef TMilli BlinkC__Timer2__precision_tag;
typedef T62khz /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag;
typedef uint32_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__precision_tag /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__precision_tag;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Alarm__size_type;
typedef /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__size_type /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareA__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__BeaconCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareB__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__Counter__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__SfdCapture__size_type;
typedef uint32_t HplAtmRfa1TimerMacP__CompareC__size_type;
typedef T62khz /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag;
typedef uint32_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__precision_tag /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__precision_tag;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type;
typedef /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__size_type;
typedef TMilli /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef T62khz /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint32_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint8_t /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_precision_tag /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type;
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
enum /*PlatformSerialC.Uart1*/Atm1281Uart1C__0____nesc_unnamed4295 {
  Atm1281Uart1C__0__CLIENT_ID = 0U
};
typedef TMicro /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__size_type;
typedef TMicro /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type;
typedef TMcu /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_precision_tag;
typedef uint32_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type;
typedef uint8_t /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__size_type;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_precision_tag /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__precision_tag;
typedef /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_precision_tag;
typedef uint32_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type;
typedef TMcu /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_precision_tag;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type;
typedef uint16_t /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__size_type;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_precision_tag /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__precision_tag;
typedef /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__size_type;
typedef TMcu /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag;
typedef uint16_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__precision_tag /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__precision_tag;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__size_type;
typedef /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__size_type /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__size_type;
typedef uint16_t HplAtmRfa1Timer1P__CompareA__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Capture__size_type;
typedef uint16_t HplAtmRfa1Timer1P__Timer__size_type;
enum /*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0____nesc_unnamed4296 {
  Atm1281Usart1C__0__CLIENT_ID = 0U
};
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t McuInitP__Init__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
#line 62
static error_t RFA1RadioOffP__RFA1RadioOff__init(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403c9860);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403c9860);
# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__fired(void );
#line 83
static void BlinkC__Timer2__fired(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );

static bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void );
# 4 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/PushButton.nc"
static bool PushButtonP__PushButton0__get(void );
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
static error_t /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init(void );
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__size_type /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__get(void );






static bool /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__isOverflowPending(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
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
uint8_t arg_0x406818f0);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406818f0, 
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__ResourceConfigure__configure(
# 45 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406fa1e8);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartByte__send(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406fa938, 
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
uint8_t byte);
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartConfigure.nc"
static Atm1281UartUnionConfig_t */*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__default__getConfig(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f87b0);
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receivedByte(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receiveDone(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__sendDone(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__overflow(void );
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__request(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f9d18);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__granted(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f9d18);
# 128 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__isOwner(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f9d18);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__request(
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406e6790);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__default__granted(
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406e6790);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__rxDone(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f6408, 
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__txDone(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f6408);
# 42 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
static void HplAtm1281Usart1P__HplUsart__resetUsart(void );



static error_t HplAtm1281Usart1P__HplUsart__enableTxIntr(void );
static error_t HplAtm1281Usart1P__HplUsart__disableTxIntr(void );
#line 44
static error_t HplAtm1281Usart1P__HplUsart__enableIntr(void );
#line 66
static bool HplAtm1281Usart1P__HplUsart__isTxIntrPending(void );
#line 63
static void HplAtm1281Usart1P__HplUsart__tx(uint8_t data);
#line 54
static void HplAtm1281Usart1P__HplUsart__setModeUart(Atm1281UartUnionConfig_t *config);
#line 69
static void HplAtm1281Usart1P__HplUsart__clrTxIntr(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
#line 82
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__default__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__default__fired(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 59
static void HplAtmRfa1Timer1P__Timer__start(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__rxDone(
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
uint8_t arg_0x407d98c8, 
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__txDone(
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
uint8_t arg_0x407d98c8);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__txDone(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 62
static bool /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ede18);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407eca58);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ed3f0);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ed3f0);
# 128 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ed3f0);
# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartConfigure.nc"
static Atm1281UartUnionConfig_t *PlatformSerialP__Atm1281UartConfigure__getConfig(void );
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void PlatformSerialP__Resource__granted(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t PlatformSerialP__StdControl__start(void );
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
static error_t McuInitP__MeasureClock__init(void );
#line 62
static error_t McuInitP__TimerInit__init(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void );
#line 74
static inline error_t McuInitP__Init__init(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/MeasureClockC.nc"
uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 135
enum MeasureClockC____nesc_unnamed4297 {
  MeasureClockC__MAGIC = 31250 / (16 / 16)
};
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
uint8_t arg_0x403c9860);
# 76 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4298 {

  SchedulerBasicP__NUM_TASKS = 3U, 
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




static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
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
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
static error_t BlinkC__UartByte__send(uint8_t byte);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer1__startPeriodic(uint32_t dt);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
static void BlinkC__Leds__led0Off(void );










static void BlinkC__Leds__led1On(void );




static void BlinkC__Leds__led1Off(void );
#line 94
static void BlinkC__Leds__led2Off(void );
#line 56
static void BlinkC__Leds__led0On(void );
#line 89
static void BlinkC__Leds__led2On(void );
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void BlinkC__Timer2__startPeriodic(uint32_t dt);
# 4 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/PushButton.nc"
static bool BlinkC__PushButton0__get(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t BlinkC__UartControl__start(void );
# 30 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/BlinkC.nc"
uint8_t BlinkC__myByte = 0x35;










static inline void BlinkC__Boot__booted(void );








static inline void BlinkC__Timer0__fired(void );
#line 69
static inline void BlinkC__Timer1__fired(void );
#line 92
static inline void BlinkC__Timer2__fired(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 64
static inline void LedsP__Leds__led0On(void );



static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );



static inline void LedsP__Leds__led1Off(void );







static inline void LedsP__Leds__led2On(void );



static inline void LedsP__Leds__led2Off(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void );
# 43 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static bool PushButtonP__GeneralIO__get(void );
# 17 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/PushButtonP.nc"
static inline bool PushButtonP__PushButton0__get(void );
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
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4299 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 6, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__from_size_type ) + 6, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*CounterMilli32C.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__to_size_type /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
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

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4300 {

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
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4301 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






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
uint8_t arg_0x406818f0);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4302 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4303 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4304 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 204
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartConfigure.nc"
static Atm1281UartUnionConfig_t */*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__getConfig(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f87b0);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableTxIntr(void );
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__disableTxIntr(void );
#line 44
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableIntr(void );
#line 66
static bool /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__isTxIntrPending(void );
#line 63
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__tx(uint8_t data);
#line 54
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__setModeUart(Atm1281UartUnionConfig_t *config);
#line 69
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__clrTxIntr(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receivedByte(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t byte);
#line 99
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receiveDone(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__sendDone(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f90c0, 
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
uint8_t * buf, 



uint16_t len, error_t error);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__request(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f9d18);
# 128 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static bool /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__isOwner(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406f9d18);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__granted(
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
uint8_t arg_0x406e6790);
#line 61
uint16_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_len;
#line 61
uint16_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_len;
uint8_t * /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf;
#line 62
uint8_t * /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_buf;
uint16_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_pos;
#line 63
uint16_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_pos;
uint8_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_byte_time;
uint8_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__current_owner;
#line 98
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data);
#line 126
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__txDone(uint8_t id);
#line 142
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartByte__send(uint8_t id, uint8_t data);
#line 177
static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__request(uint8_t id);
#line 191
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__granted(uint8_t id);



static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__ResourceConfigure__configure(uint8_t id);
#line 217
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__overflow(void );

static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__request(uint8_t id);



static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__default__granted(uint8_t id);
static inline Atm1281UartUnionConfig_t */*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__default__getConfig(uint8_t id);



static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte);
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
static void HplAtm1281Usart1P__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void HplAtm1281Usart1P__UsartInterrupts__txDone(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline error_t HplAtm1281Usart1P__HplUsart__enableIntr(void );
#line 95
static inline error_t HplAtm1281Usart1P__HplUsart__enableTxIntr(void );





static inline error_t HplAtm1281Usart1P__HplUsart__disableTxIntr(void );
#line 134
static inline void HplAtm1281Usart1P__HplUsart__resetUsart(void );








static inline void HplAtm1281Usart1P__HplUsart__setModeUart(Atm1281UartUnionConfig_t *config);
#line 200
static void HplAtm1281Usart1P__HplUsart__tx(uint8_t data);






static inline bool HplAtm1281Usart1P__HplUsart__isTxIntrPending(void );
#line 219
static inline void HplAtm1281Usart1P__HplUsart__clrTxIntr(void );









void __vector_36(void ) __attribute((signal))   ;





void __vector_38(void ) __attribute((interrupt))   ;
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper;

enum /*CounterMicro32C.TransformCounterC*/TransformCounterC__1____nesc_unnamed4305 {

  TransformCounterC__1__LOW_SHIFT_RIGHT = 1, 
  TransformCounterC__1__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type ) - /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__LOW_SHIFT_RIGHT, 
  TransformCounterC__1__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__to_size_type ) - 8 * sizeof(/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__from_size_type ) + 1, 



  TransformCounterC__1__OVERFLOW_MASK = /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS ? ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__upper_count_type )2 << (/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper;

enum /*CounterMcu32C.TransformCounterC*/TransformCounterC__2____nesc_unnamed4306 {

  TransformCounterC__2__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__2__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type ) - /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__LOW_SHIFT_RIGHT, 
  TransformCounterC__2__NUM_UPPER_BITS = 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__to_size_type ) - 8 * sizeof(/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__from_size_type ) + 0, 



  TransformCounterC__2__OVERFLOW_MASK = /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS ? ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__upper_count_type )2 << (/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode);
#line 59
static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void );
#line 66
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1Timer1P__CompareA__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static void HplAtmRfa1Timer1P__Capture__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1Timer1P__Timer__overflow(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
void __vector_20(void ) __attribute((signal))   ;







static inline void HplAtmRfa1Timer1P__Timer__start(void );
#line 95
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode);
#line 137
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void );

void __vector_17(void ) __attribute((signal))   ;
#line 198
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void );

void __vector_16(void ) __attribute((signal))   ;
#line 240
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__rxDone(
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
uint8_t arg_0x407d98c8, 
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__txDone(
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
uint8_t arg_0x407d98c8);
# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__userId(void );
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4307 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );








static inline bool /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);
#line 82
static inline error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ede18);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407eca58);
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x407ed3f0);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
enum /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4308 {
#line 69
  SimpleArbiterP__0__grantedTask = 2U
};
#line 69
typedef int /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4309 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4310 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 124
static bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 137
static uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void );










static inline bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t PlatformSerialP__Resource__request(void );
# 12 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSerialP.nc"
static inline error_t PlatformSerialP__StdControl__start(void );






static inline void PlatformSerialP__Resource__granted(void );

static inline Atm1281UartUnionConfig_t *PlatformSerialP__Atm1281UartConfigure__getConfig(void );
# 109 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 109
{
   __asm volatile ("cli");}

#line 126
#line 125
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 129
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 135
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

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
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init(void )
{
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__stop();
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCompare__setMode(0);

  return SUCCESS;
}

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

# 81 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__start(void )
{
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start(void ){
#line 59
  HplAtmRfa1Timer1P__Timer__start();
#line 59
}
#line 59
# 95 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Timer__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0x80 = (* (volatile uint8_t *)0x80 & ~(0x3 << 0))
     | (((mode >> 3) & 0x3) << 0);

    * (volatile uint8_t *)0x81 = ((* (volatile uint8_t *)0x81 & ~((0x3 << 3) | (0x7 << 0)))
     | (((mode >> 5) & 0x3) << 3))
     | (((mode >> 0) & 0x7) << 0);
  }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(uint8_t mode){
#line 70
  HplAtmRfa1Timer1P__Timer__setMode(mode);
#line 70
}
#line 70
# 51 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline error_t /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__setMode(2);
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__start();

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init());
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
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/McuInitP.nc"
static inline error_t McuInitP__systemClockInit(void )
{
  /* atomic removed: atomic calls only */

  {

    * (volatile uint8_t *)0x61 = 0x80;


    * (volatile uint8_t *)0x61 = 0x0F;
  }
#line 71
  return SUCCESS;
}

static inline error_t McuInitP__Init__init(void )
{
  error_t ok;

  ok = McuInitP__systemClockInit();
  ok = ecombine(ok, McuInitP__MeasureClock__init());
  ok = ecombine(ok, McuInitP__TimerInit__init());

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
# 82 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline error_t HplAtm1281Usart1P__HplUsart__enableIntr(void )
#line 82
{
  * (volatile uint8_t *)0xC9 |= 1 << 7;
  * (volatile uint8_t *)0xC8 |= 1 << 6;
  * (volatile uint8_t *)0xC9 |= 1 << 6;
  return SUCCESS;
}

# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableIntr(void ){
#line 44
  unsigned char __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm1281Usart1P__HplUsart__enableIntr();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 134 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline void HplAtm1281Usart1P__HplUsart__resetUsart(void )
#line 134
{

  * (volatile uint8_t *)0xC9 = 0;
  * (volatile uint8_t *)0xC8 = 0x20;
  * (volatile uint8_t *)0xCA = 0x06;
  * (volatile uint8_t *)0xCC = 0;
  * (volatile uint8_t *)0xCD = 0;
}

static inline void HplAtm1281Usart1P__HplUsart__setModeUart(Atm1281UartUnionConfig_t *config)
#line 143
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {

      HplAtm1281Usart1P__HplUsart__resetUsart();
      * (volatile uint8_t *)0xCC = config->uartRegisters.UBBRL;
      * (volatile uint8_t *)0xCD = config->uartRegisters.UBBRH;
      * (volatile uint8_t *)0xC8 = config->uartRegisters.UCSRA;
      * (volatile uint8_t *)0xC9 = config->uartRegisters.UCSRB;
      * (volatile uint8_t *)0xCA = config->uartRegisters.UCSRC;
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__setModeUart(Atm1281UartUnionConfig_t *config){
#line 54
  HplAtm1281Usart1P__HplUsart__setModeUart(config);
#line 54
}
#line 54
# 21 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSerialP.nc"
static inline Atm1281UartUnionConfig_t *PlatformSerialP__Atm1281UartConfigure__getConfig(void )
#line 21
{
  return &atm1281_uart_default_config;
}

# 225 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline Atm1281UartUnionConfig_t */*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__default__getConfig(uint8_t id)
#line 225
{
  return &atm1281_uart_default_config;
}

# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartConfigure.nc"
inline static Atm1281UartUnionConfig_t */*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__getConfig(uint8_t arg_0x406f87b0){
#line 39
  union __nesc_unnamed4291 *__nesc_result;
#line 39

#line 39
  switch (arg_0x406f87b0) {
#line 39
    case /*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID:
#line 39
      __nesc_result = PlatformSerialP__Atm1281UartConfigure__getConfig();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__default__getConfig(arg_0x406f87b0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 195 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__ResourceConfigure__configure(uint8_t id)
#line 195
{


  Atm1281UartUnionConfig_t *config = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Atm1281UartConfigure__getConfig(id);


  if (57600L == 19200UL) {
    /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_byte_time = 200;
    }
  else {
#line 203
    if (57600L == 57600UL) {
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_byte_time = 68;
      }
    }
#line 206
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__setModeUart(config);
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableIntr();
}

# 171 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x407eca58){
#line 59
  switch (arg_0x407eca58) {
#line 59
    case /*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID:
#line 59
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__ResourceConfigure__configure(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x407eca58);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 19 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSerialP.nc"
static inline void PlatformSerialP__Resource__granted(void )
#line 19
{
}

# 224 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__default__granted(uint8_t id)
#line 224
{
}

# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__granted(uint8_t arg_0x406e6790){
#line 102
  switch (arg_0x406e6790) {
#line 102
    case /*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID:
#line 102
      PlatformSerialP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__default__granted(arg_0x406e6790);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 191 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__granted(uint8_t id)
#line 191
{
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__granted(id);
}

# 165 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x407ed3f0){
#line 102
  switch (arg_0x407ed3f0) {
#line 102
    case /*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID:
#line 102
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__granted(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x407ed3f0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
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
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartByte.nc"
inline static error_t BlinkC__UartByte__send(uint8_t byte){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartByte__send(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID, byte);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 50 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{
  unsigned char word;

#line 53
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      BlinkC__UartByte__send(ALP);
      word = BlinkC__myByte;
      word = word & 0xF0;
      word = word >> 4;
      word = hexTable[word];
      BlinkC__UartByte__send(word);
      word = BlinkC__myByte;
      word = word & 0x0F;
      word = hexTable[word];
      BlinkC__UartByte__send(word);
      BlinkC__UartByte__send(ENDL);
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 94
{
  LedsP__Led2__set();
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 56 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )46U &= ~(1 << 4);
}

# 41 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__clr();
#line 41
}
#line 41
# 90 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 90
{
  LedsP__Led2__clr();
}

# 89 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 82 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 82
{
  LedsP__Led1__set();
}

# 77 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 56 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )46U &= ~(1 << 3);
}

# 41 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__clr();
#line 41
}
#line 41
# 78 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 78
{
  LedsP__Led1__clr();
}

# 72 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 68 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 68
{
  LedsP__Led0__set();
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
# 56 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )46U &= ~(1 << 2);
}

# 41 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__clr();
#line 41
}
#line 41
# 64 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 64
{
  LedsP__Led0__clr();
}

# 56 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__21__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )44U & (1 << 5)) != 0;
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool PushButtonP__GeneralIO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit5*/HplAtm128GeneralIOPinP__21__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 17 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/PushButtonP.nc"
static inline bool PushButtonP__PushButton0__get(void )
{
  return !PushButtonP__GeneralIO__get();
}

# 4 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/PushButton.nc"
inline static bool BlinkC__PushButton0__get(void ){
#line 4
  unsigned char __nesc_result;
#line 4

#line 4
  __nesc_result = PushButtonP__PushButton0__get();
#line 4

#line 4
  return __nesc_result;
#line 4
}
#line 4
# 69 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/BlinkC.nc"
static inline void BlinkC__Timer1__fired(void )
{
  ;
  if (BlinkC__PushButton0__get()) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (BlinkC__myByte & 0x01) {
            BlinkC__Leds__led0On();
            }
          else {
#line 79
            BlinkC__Leds__led0Off();
            }
#line 80
          if (BlinkC__myByte & 0x02) {
            BlinkC__Leds__led1On();
            }
          else {
#line 83
            BlinkC__Leds__led1Off();
            }
#line 84
          if (BlinkC__myByte & 0x04) {
            BlinkC__Leds__led2On();
            }
          else {
#line 87
            BlinkC__Leds__led2Off();
            }
        }
#line 89
        __nesc_atomic_end(__nesc_atomic); }
    }
}

#line 92
static inline void BlinkC__Timer2__fired(void )
{
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      BlinkC__myByte++;
    }
#line 98
    __nesc_atomic_end(__nesc_atomic); }
}

# 204 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x406818f0){
#line 83
  switch (arg_0x406818f0) {
#line 83
    case 0U:
#line 83
      BlinkC__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      BlinkC__Timer1__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      BlinkC__Timer2__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x406818f0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 148 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state == /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 219 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__isOwner(uint8_t id)
#line 219
{
#line 219
  return FAIL;
}

# 128 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static bool /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__isOwner(uint8_t arg_0x406f9d18){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x406f9d18) {
#line 128
    case /*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__isOwner(/*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__isOwner(arg_0x406f9d18);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 219 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline void HplAtm1281Usart1P__HplUsart__clrTxIntr(void )
#line 219
{
  * (volatile uint8_t *)0xC8 &= ~(1 << 6);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__clrTxIntr(void ){
#line 69
  HplAtm1281Usart1P__HplUsart__clrTxIntr();
#line 69
}
#line 69
# 101 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline error_t HplAtm1281Usart1P__HplUsart__disableTxIntr(void )
#line 101
{
  * (volatile uint8_t *)0xC9 &= ~(1 << 6);
  return SUCCESS;
}

# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__disableTxIntr(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Usart1P__HplUsart__disableTxIntr();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 207 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline bool HplAtm1281Usart1P__HplUsart__isTxIntrPending(void )
#line 207
{
  return (* (volatile uint8_t *)0xC8 & (1 << 6)) != 0;
}

# 66 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static bool /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__isTxIntrPending(void ){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = HplAtm1281Usart1P__HplUsart__isTxIntrPending();
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 95 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static inline error_t HplAtm1281Usart1P__HplUsart__enableTxIntr(void )
#line 95
{
  * (volatile uint8_t *)0xC8 |= 1 << 6;
  * (volatile uint8_t *)0xC9 |= 1 << 6;
  return SUCCESS;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableTxIntr(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = HplAtm1281Usart1P__HplUsart__enableTxIntr();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
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
# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 105 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 105
{
   __asm volatile ("sei");}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer2__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(2U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer1__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 64 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x407ede18){
#line 53
    /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x407ede18);
#line 53
}
#line 53
# 71 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state == /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 220 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__request(uint8_t id)
#line 220
{
#line 220
  return FAIL;
}

# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__request(uint8_t arg_0x406f9d18){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x406f9d18) {
#line 88
    case /*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__request(/*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__default__request(arg_0x406f9d18);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 177 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__request(uint8_t id)
#line 177
{
  return /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__request(id);
}

# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t PlatformSerialP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Resource__request(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 12 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSerialP.nc"
static inline error_t PlatformSerialP__StdControl__start(void )
#line 12
{
  return PlatformSerialP__Resource__request();
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t BlinkC__UartControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = PlatformSerialP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 41 "/home/alpsayin/tinyos_workspace/BlinkWithSwitch/src/BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__UartControl__start();

  BlinkC__Timer0__startPeriodic(250);
  BlinkC__Timer1__startPeriodic(100);
  BlinkC__Timer2__startPeriodic(1000);
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BlinkC__Boot__booted();
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

# 175 "/opt/tinyos-main/src/tinyos-main/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403c9860){
#line 75
  switch (arg_0x403c9860) {
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
    case /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403c9860);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 157 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 157
{
  return m1 < m2 ? m1 : m2;
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

# 240 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline mcu_power_t HplAtmRfa1Timer1P__McuPowerOverride__lowestState(void )
{

  if (* (volatile uint8_t *)0x6F & ((((1 << 1) | (1 << 2)) | (1 << 3)) | (1 << 5))) {
    return ATM128_POWER_IDLE;
    }
  else {
#line 246
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtmRfa1Timer1P__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
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
# 125 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow(void )
#line 125
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

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 48
  /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__AtmegaCounter__overflow();
#line 48
  /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__AtmegaCounter__overflow();
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
# 98 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 230 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receivedByte(uint8_t id, uint8_t byte)
#line 230
{
}

# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receivedByte(uint8_t arg_0x406f90c0, uint8_t byte){
#line 79
    /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receivedByte(arg_0x406f90c0, byte);
#line 79
}
#line 79
# 231 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receiveDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 231
{
}

# 99 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receiveDone(uint8_t arg_0x406f90c0, uint8_t * buf, uint16_t len, error_t error){
#line 99
    /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__receiveDone(arg_0x406f90c0, buf, len, error);
#line 99
}
#line 99
# 98 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__rxDone(uint8_t id, uint8_t data)
#line 98
{
  if (/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_buf) {
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_buf[/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_pos++] = data;
      if (/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_pos >= /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_buf;

#line 103
          /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_buf = (void *)0;
          /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receiveDone(id, buf, /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_rx_len, SUCCESS);
        }
    }
  else 
#line 106
    {
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__receivedByte(id, data);
    }
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 58
{
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
inline static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x407d98c8, uint8_t data){
#line 54
  switch (arg_0x407d98c8) {
#line 54
    case /*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID:
#line 54
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__rxDone(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID, data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__rxDone(arg_0x407d98c8, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 52
{
  if (/*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__inUse()) {
    /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__rxDone(/*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
inline static void HplAtm1281Usart1P__UsartInterrupts__rxDone(uint8_t data){
#line 54
  /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 229 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__sendDone(uint8_t id, uint8_t *buf, uint16_t len, error_t error)
#line 229
{
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/UartStream.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__sendDone(uint8_t arg_0x406f90c0, uint8_t * buf, uint16_t len, error_t error){
#line 57
    /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__default__sendDone(arg_0x406f90c0, buf, len, error);
#line 57
}
#line 57
# 63 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart.nc"
inline static void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__tx(uint8_t data){
#line 63
  HplAtm1281Usart1P__HplUsart__tx(data);
#line 63
}
#line 63
# 126 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__txDone(uint8_t id)
#line 126
{
  if (/*Atm1281Uart1P.UartP*/Atm1281UartP__0__current_owner != id) {
      uint8_t *buf = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf;

#line 129
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf = (void *)0;
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__sendDone(id, buf, /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_len, FAIL);
    }
  else {
#line 132
    if (/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_pos < /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_len) {
        /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__tx(/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf[/*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_pos++]);
      }
    else {
        uint8_t *buf = /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf;

#line 137
        /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_buf = (void *)0;
        /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartStream__sendDone(id, buf, /*Atm1281Uart1P.UartP*/Atm1281UartP__0__m_tx_len, SUCCESS);
      }
    }
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 57
{
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
inline static void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__txDone(uint8_t arg_0x407d98c8){
#line 49
  switch (arg_0x407d98c8) {
#line 49
    case /*PlatformSerialC.Uart1.UsartC*/Atm1281Usart1C__0__CLIENT_ID:
#line 49
      /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartInterrupts__txDone(/*PlatformSerialC.Uart1*/Atm1281Uart1C__0__CLIENT_ID);
#line 49
      break;
#line 49
    default:
#line 49
      /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__default__txDone(arg_0x407d98c8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UsartShareP.nc"
static inline void /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__txDone(void )
#line 47
{
  if (/*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__inUse()) {
    /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__Interrupts__txDone(/*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281UsartInterrupts.nc"
inline static void HplAtm1281Usart1P__UsartInterrupts__txDone(void ){
#line 49
  /*Atm1281UsartShare1P.UsartShareP*/Atm1281UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 217 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static inline void /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__overflow(void )
#line 217
{
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow(void ){
#line 82
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper++;
    if ((/*CounterMicro32C.TransformCounterC*/TransformCounterC__1__m_upper & /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__OVERFLOW_MASK) == 0) {
      /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.TransformCounterC*/TransformCounterC__1__CounterFrom__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper++;
    if ((/*CounterMcu32C.TransformCounterC*/TransformCounterC__2__m_upper & /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__OVERFLOW_MASK) == 0) {
      /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__Counter__overflow();
      }
  }
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow(void ){
#line 82
  /*CounterMcu32C.TransformCounterC*/TransformCounterC__2__CounterFrom__overflow();
#line 82
}
#line 82
# 66 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounterP.nc"
static inline void /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow(void )
{
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__Counter__overflow();
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1Timer1P__Timer__overflow(void ){
#line 48
  /*CounterMcu16C.AtmegaCounterP*/AtmegaCounterP__1__AtmegaCounter__overflow();
#line 48
}
#line 48
# 137 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__CompareA__default__fired(void )
#line 137
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1Timer1P__CompareA__fired(void ){
#line 48
  HplAtmRfa1Timer1P__CompareA__default__fired();
#line 48
}
#line 48
# 198 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
static inline void HplAtmRfa1Timer1P__Capture__default__fired(void )
#line 198
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static void HplAtmRfa1Timer1P__Capture__fired(void ){
#line 48
  HplAtmRfa1Timer1P__Capture__default__fired();
#line 48
}
#line 48
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

# 155 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static void /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state = /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId);
}

# 100 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
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

# 142 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/Atm1281UartP.nc"
static error_t /*Atm1281Uart1P.UartP*/Atm1281UartP__0__UartByte__send(uint8_t id, uint8_t data)
#line 142
{
  if (/*Atm1281Uart1P.UartP*/Atm1281UartP__0__UsartResource__isOwner(id) == FALSE) {
    return FAIL;
    }
#line 145
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__clrTxIntr();
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__disableTxIntr();
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__tx(data);
  while (!/*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__isTxIntrPending()) ;
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__clrTxIntr();
  /*Atm1281Uart1P.UartP*/Atm1281UartP__0__Usart__enableTxIntr();
  return SUCCESS;
}

# 200 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
static void HplAtm1281Usart1P__HplUsart__tx(uint8_t data)
#line 200
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 201
    {
      * (volatile uint8_t *)0xCE = data;
      * (volatile uint8_t *)0xC8 |= 1 << 6;
    }
#line 204
    __nesc_atomic_end(__nesc_atomic); }
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

#line 107
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

# 74 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static void /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__start(/*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
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

# 229 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
__attribute((signal))   void __vector_36(void )
#line 229
{
  if ((* (volatile uint8_t *)0xC8 & (1 << 7)) != 0) {
      HplAtm1281Usart1P__UsartInterrupts__rxDone(* (volatile uint8_t *)0xCE);
    }
}

# 124 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static bool /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    {
      if (/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state == /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
        {
          unsigned char __nesc_temp = 
#line 127
          FALSE;

          {
#line 127
            __nesc_atomic_end(__nesc_atomic); 
#line 127
            return __nesc_temp;
          }
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
#line 129
  return TRUE;
}






static uint8_t /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__ArbiterInfo__userId(void )
#line 137
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      if (/*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__state != /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 140
          /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__NO_RES;

          {
#line 140
            __nesc_atomic_end(__nesc_atomic); 
#line 140
            return __nesc_temp;
          }
        }
#line 141
      {
        unsigned char __nesc_temp = 
#line 141
        /*Atm1281UsartShare1P.ArbiterC.Arbiter*/SimpleArbiterP__0__resId;

        {
#line 141
          __nesc_atomic_end(__nesc_atomic); 
#line 141
          return __nesc_temp;
        }
      }
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
}

# 235 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm1281/usart/HplAtm1281Usart1P.nc"
__attribute((interrupt))   void __vector_38(void )
#line 235
{
  HplAtm1281Usart1P__UsartInterrupts__txDone();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1Timer1P.nc"
__attribute((signal))   void __vector_20(void )
#line 73
{
#line 73
  HplAtmRfa1Timer1P__Timer__overflow();
}

#line 139
__attribute((signal))   void __vector_17(void )
#line 139
{
#line 139
  HplAtmRfa1Timer1P__CompareA__fired();
}

#line 200
__attribute((signal))   void __vector_16(void )
#line 200
{
#line 200
  HplAtmRfa1Timer1P__Capture__fired();
}

