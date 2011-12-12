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
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
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
# 117 "/usr/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x402a4c38, const void *arg_0x402a4dd0, size_t arg_0x402a8010);



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
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4264 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4265 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4266 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4267 {
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







enum __nesc_unnamed4268 {


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


enum __nesc_unnamed4269 {


  ATMRFA1_COM8_OFF = 0, 
  ATMRFA1_COM8_TOGGLE, 
  ATMRFA1_COM8_CLEAR, 
  ATMRFA1_COM8_SET
};





enum __nesc_unnamed4270 {


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


enum __nesc_unnamed4271 {


  ATMRFA1_COM16_NORMAL = 0, 
  ATMRFA1_COM16_TOGGLE, 
  ATMRFA1_COM16_CLEAR, 
  ATMRFA1_COM16_SET
};


enum __nesc_unnamed4272 {

  ATMRFA1_CAP16_RISING_EDGE = 0x01, 
  ATMRFA1_CAP16_NOISE_CANCEL = 0x02
};





enum __nesc_unnamed4273 {

  ATMRFA1_CLKSC_DISABLE = 0, 
  ATMRFA1_CLKSC_XTAL = 1 << 5, 
  ATMRFA1_CLKSC_RTC = (1 << 5) | (1 << 4)
};


enum __nesc_unnamed4274 {

  ATMRFA1_COMSC_ABSOLUTE = 0, 
  ATMRFA1_COMSC_RELATIVE = 1
};


enum __nesc_unnamed4275 {

  ATMRFA1_CAPSC_OFF = 0, 
  ATMRFA1_CAPSC_ON = 1
};
# 40 "/home/alpsayin/tinyos_workspace/SensorAppC/src/packet_types.h"
static __inline uint8_t ascii2hex(uint8_t c);










static __inline uint8_t hex2ascii(uint8_t n);
#line 69
#line 61
typedef struct status_packet {

  uint8_t historyEnable : 1;
  uint8_t burstEnable : 1;
  uint8_t reserved : 4;
  uint8_t intervalType : 2;
  uint8_t burstInterval : 8;
  uint16_t node_id;
} status_packet_t;

enum __nesc_unnamed4276 {

  INTERVAL_TYPE_SECONDS = 0, 
  INTERVAL_TYPE_MINUTES, 
  INTERVAL_TYPE_HOURS, 
  INTERVAL_TYPE_DAYS
};










#line 79
typedef struct data_packet {

  uint16_t source;
  uint16_t data1;
  uint16_t data2;
  uint16_t data3;
  uint16_t data4;
  uint16_t data5;
  uint16_t seqNo;
} data_packet_t;








#line 90
typedef struct command_packet {
  uint8_t WE : 1;
  uint8_t HE : 1;
  uint8_t BE : 1;
  uint8_t opcode : 5;
  uint8_t value;
  uint16_t address;
} command_packet_t;

enum __nesc_unnamed4277 {

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

enum __nesc_unnamed4278 {

  PACKET_ERROR = 0, 
  PACKET_COMMAND, 
  PACKET_DATA, 
  PACKET_STATUS
};
# 58 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorConfig.h"
static __inline void _SensorDataPreCalc(data_packet_t *val);
# 33 "/opt/tinyos-main/src/tinyos-main/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
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
  int (*put)(char arg_0x40889988, struct __file *arg_0x40889b70);
  int (*get)(struct __file *arg_0x40887010);
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
# 44 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RadioConfig.h"
enum __nesc_unnamed4279 {






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

enum __nesc_unnamed4280 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4281 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 2
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



enum __nesc_unnamed4282 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4283 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4284 {
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
# 40 "/opt/tinyos-main/src/tinyos-main/tos/types/IeeeEui64.h"
enum __nesc_unnamed4285 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 35 "/opt/tinyos-main/src/tinyos-main/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 39
typedef struct __nesc_unnamed4286 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4287 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4288 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4289 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 74
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngine.h"
enum __nesc_unnamed4290 {
  AM_DISSEMINATION_MESSAGE = 0x60, 
  AM_DISSEMINATION_PROBE_MESSAGE = 0x61, 
  DISSEMINATION_SEQNO_UNKNOWN = 0
};





#line 46
typedef nx_struct dissemination_message {
  nx_uint16_t key;
  nx_uint32_t seqno;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) dissemination_message_t;



#line 52
typedef nx_struct dissemination_probe_message {
  nx_uint16_t key;
} __attribute__((packed)) dissemination_probe_message_t;
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/Collection.h"
enum __nesc_unnamed4291 {
  AM_COLLECTION_DATA = 20, 
  AM_COLLECTION_CONTROL = 21, 
  AM_COLLECTION_DEBUG = 22
};

typedef uint8_t collection_id_t;
typedef nx_uint8_t nx_collection_id_t;
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/Ctp.h"
enum __nesc_unnamed4292 {

  AM_CTP_ROUTING = 0x70, 
  AM_CTP_DATA = 0x71, 
  AM_CTP_DEBUG = 0x72, 


  CTP_OPT_PULL = 0x80, 
  CTP_OPT_ECN = 0x40, 
  CTP_OPT_ALL = 0xff
};

typedef nx_uint8_t nx_ctp_options_t;
typedef uint8_t ctp_options_t;









#line 66
typedef nx_struct __nesc_unnamed4293 {
  nx_ctp_options_t options;
  nx_uint8_t thl;
  nx_uint16_t etx;
  nx_am_addr_t origin;
  nx_uint8_t originSeqNo;
  nx_collection_id_t type;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_data_header_t;






#line 76
typedef nx_struct __nesc_unnamed4294 {
  nx_ctp_options_t options;
  nx_am_addr_t parent;
  nx_uint16_t etx;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) ctp_routing_header_t;
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngine.h"
enum __nesc_unnamed4295 {



  FORWARD_PACKET_TIME = 32
};


enum __nesc_unnamed4296 {
  SENDDONE_OK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_OK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_OFFSET = FORWARD_PACKET_TIME, 
  SENDDONE_NOACK_WINDOW = FORWARD_PACKET_TIME, 
  SENDDONE_FAIL_OFFSET = FORWARD_PACKET_TIME << 2, 
  SENDDONE_FAIL_WINDOW = SENDDONE_FAIL_OFFSET, 
  LOOPY_OFFSET = FORWARD_PACKET_TIME << 2, 
  LOOPY_WINDOW = LOOPY_OFFSET, 
  CONGESTED_WAIT_OFFSET = FORWARD_PACKET_TIME << 2, 
  CONGESTED_WAIT_WINDOW = CONGESTED_WAIT_OFFSET, 
  NO_ROUTE_RETRY = 10000
};








enum __nesc_unnamed4297 {
  MAX_RETRIES = 30
};
#line 104
#line 100
typedef struct __nesc_unnamed4298 {
  message_t * msg;
  uint8_t client;
  uint8_t retries;
} fe_queue_entry_t;
# 7 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpDebugMsg.h"
enum __nesc_unnamed4299 {
  NET_C_DEBUG_STARTED = 0xDE, 

  NET_C_FE_MSG_POOL_EMPTY = 0x10, 
  NET_C_FE_SEND_QUEUE_FULL = 0x11, 
  NET_C_FE_NO_ROUTE = 0x12, 
  NET_C_FE_SUBSEND_OFF = 0x13, 
  NET_C_FE_SUBSEND_BUSY = 0x14, 
  NET_C_FE_BAD_SENDDONE = 0x15, 
  NET_C_FE_QENTRY_POOL_EMPTY = 0x16, 
  NET_C_FE_SUBSEND_SIZE = 0x17, 
  NET_C_FE_LOOP_DETECTED = 0x18, 
  NET_C_FE_SEND_BUSY = 0x19, 

  NET_C_FE_SENDQUEUE_EMPTY = 0x50, 
  NET_C_FE_PUT_MSGPOOL_ERR = 0x51, 
  NET_C_FE_PUT_QEPOOL_ERR = 0x52, 
  NET_C_FE_GET_MSGPOOL_ERR = 0x53, 
  NET_C_FE_GET_QEPOOL_ERR = 0x54, 
  NET_C_FE_QUEUE_SIZE = 0x55, 

  NET_C_FE_SENT_MSG = 0x20, 
  NET_C_FE_RCV_MSG = 0x21, 
  NET_C_FE_FWD_MSG = 0x22, 
  NET_C_FE_DST_MSG = 0x23, 
  NET_C_FE_SENDDONE_FAIL = 0x24, 
  NET_C_FE_SENDDONE_WAITACK = 0x25, 
  NET_C_FE_SENDDONE_FAIL_ACK_SEND = 0x26, 
  NET_C_FE_SENDDONE_FAIL_ACK_FWD = 0x27, 
  NET_C_FE_DUPLICATE_CACHE = 0x28, 
  NET_C_FE_DUPLICATE_QUEUE = 0x29, 
  NET_C_FE_DUPLICATE_CACHE_AT_SEND = 0x2A, 
  NET_C_FE_CONGESTION_SENDWAIT = 0x2B, 
  NET_C_FE_CONGESTION_BEGIN = 0x2C, 
  NET_C_FE_CONGESTION_END = 0x2D, 



  NET_C_FE_CONGESTED = 0x2E, 

  NET_C_TREE_NO_ROUTE = 0x30, 
  NET_C_TREE_NEW_PARENT = 0x31, 
  NET_C_TREE_ROUTE_INFO = 0x32, 
  NET_C_TREE_SENT_BEACON = 0x33, 
  NET_C_TREE_RCV_BEACON = 0x34, 

  NET_C_DBG_1 = 0x40, 
  NET_C_DBG_2 = 0x41, 
  NET_C_DBG_3 = 0x42
};
#line 79
#line 58
typedef nx_struct CollectionDebugMsg {
  nx_uint8_t type;
  nx_union __nesc_unnamed4300 {
    nx_uint16_t arg;
    nx_struct __nesc_unnamed4301 {
      nx_uint16_t msg_uid;
      nx_am_addr_t origin;
      nx_am_addr_t other_node;
    } __attribute__((packed)) msg;
    nx_struct __nesc_unnamed4302 {
      nx_am_addr_t parent;
      nx_uint8_t hopcount;
      nx_uint16_t metric;
    } __attribute__((packed)) route_info;
    nx_struct __nesc_unnamed4303 {
      nx_uint16_t a;
      nx_uint16_t b;
      nx_uint16_t c;
    } __attribute__((packed)) dbg;
  } __attribute__((packed)) data;
  nx_uint16_t seqno;
} __attribute__((packed)) CollectionDebugMsg;
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.h"
enum __nesc_unnamed4304 {


  NUM_ENTRIES_FLAG = 15
};
#line 62
#line 59
typedef nx_struct linkest_header {
  nx_uint8_t flags;
  nx_uint8_t seq;
} __attribute__((packed)) linkest_header_t;







#line 67
typedef nx_struct neighbor_stat_entry {
  nx_am_addr_t ll_addr;
  nx_uint8_t inquality;
} __attribute__((packed)) neighbor_stat_entry_t;




#line 73
typedef nx_struct linkest_footer {
  neighbor_stat_entry_t neighborList[1];
} __attribute__((packed)) linkest_footer_t;



enum __nesc_unnamed4305 {
  VALID_ENTRY = 0x1, 


  MATURE_ENTRY = 0x2, 


  INIT_ENTRY = 0x4, 


  PINNED_ENTRY = 0x8
};
#line 126
#line 94
typedef struct neighbor_table_entry {

  am_addr_t ll_addr;

  uint8_t lastseq;


  uint8_t rcvcnt;

  uint8_t failcnt;

  uint8_t flags;


  uint8_t inage;


  uint8_t outage;


  uint8_t inquality;
  uint8_t outquality;


  uint16_t eetx;



  uint8_t data_success;


  uint8_t data_total;
} neighbor_table_entry_t;
# 4 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/TreeRouting.h"
enum __nesc_unnamed4306 {
  AM_TREE_ROUTING_CONTROL = 0xCE, 
  BEACON_INTERVAL = 8192, 
  INVALID_ADDR = 0xFFFF, 
  ETX_THRESHOLD = 50, 
  PARENT_SWITCH_THRESHOLD = 15, 
  MAX_METRIC = 0xFFFF
};







#line 14
typedef struct __nesc_unnamed4307 {
  am_addr_t parent;
  uint16_t etx;
  bool haveHeard;
  bool congested;
} route_info_t;




#line 21
typedef struct __nesc_unnamed4308 {
  am_addr_t neighbor;
  route_info_t info;
} routing_table_entry;

static __inline void routeInfoInit(route_info_t *ri);
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
typedef TMilli SensorControlP__Timer0__precision_tag;
typedef data_packet_t SensorControlP__StoreData__t;
typedef data_packet_t SensorControlP__GetData__data_type;
typedef status_packet_t SensorControlP__GetStatus__val_t;
typedef status_packet_t SensorControlP__Notify__val_t;
typedef data_packet_t SensorControlP__ReadAdc__val_t;
typedef uint8_t SensorControlP__SPEnable__val_t;
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
typedef uint16_t SensorSubsystemP__Data7ADC__val_t;
typedef uint16_t SensorSubsystemP__Data8ADC__val_t;
typedef data_packet_t SensorSubsystemP__Read__val_t;
typedef uint16_t SensorSubsystemP__Data5ADC__val_t;
typedef uint16_t SensorSubsystemP__Data3ADC__val_t;
typedef uint16_t SensorSubsystemP__Data4ADC__val_t;
typedef uint16_t SensorSubsystemP__Data1ADC__val_t;
typedef data_packet_t SensorSubsystemP__ReadOne__val_t;
typedef uint16_t SensorSubsystemP__Data6ADC__val_t;
typedef uint16_t SensorSubsystemP__Data2ADC__val_t;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0____nesc_unnamed4309 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
enum /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1____nesc_unnamed4310 {
  AdcReadClientC__1__ID = 1U, AdcReadClientC__1__HAL_ID = 1U
};
enum /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2____nesc_unnamed4311 {
  AdcReadClientC__2__ID = 2U, AdcReadClientC__2__HAL_ID = 2U
};
enum /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3____nesc_unnamed4312 {
  AdcReadClientC__3__ID = 3U, AdcReadClientC__3__HAL_ID = 3U
};
enum /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4____nesc_unnamed4313 {
  AdcReadClientC__4__ID = 4U, AdcReadClientC__4__HAL_ID = 4U
};
enum /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5____nesc_unnamed4314 {
  AdcReadClientC__5__ID = 5U, AdcReadClientC__5__HAL_ID = 5U
};
enum /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6____nesc_unnamed4315 {
  AdcReadClientC__6__ID = 6U, AdcReadClientC__6__HAL_ID = 6U
};
enum /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7____nesc_unnamed4316 {
  AdcReadClientC__7__ID = 7U, AdcReadClientC__7__HAL_ID = 7U
};
typedef data_packet_t /*SensorC.SensorBuffer*/QueueC__0__queue_t;
typedef /*SensorC.SensorBuffer*/QueueC__0__queue_t /*SensorC.SensorBuffer*/QueueC__0__Queue__t;
typedef command_packet_t ControllerP__SetRadioCommand__data_type;
typedef data_packet_t ControllerP__SetRadioData__data_type;
typedef data_packet_t ControllerP__GetData__data_type;
typedef status_packet_t ControllerP__GetStatus__val_t;
typedef status_packet_t ControllerP__SensorNotification__val_t;
typedef status_packet_t ControllerP__SetRadioStatus__data_type;
typedef data_packet_t ControllerP__SetRadioHistory__data_type;
typedef data_packet_t ControllerP__GetDataOne__val_t;
typedef uint8_t ControllerP__SPEnable__val_t;
typedef command_packet_t ControllerP__NotifyRadioCommand__val_t;
typedef command_packet_t RadioSubsystemP__SetRadioCommand__data_type;
typedef data_packet_t RadioSubsystemP__SetRadioData__data_type;
typedef command_packet_t RadioSubsystemP__NotifySerialCommand__val_t;
typedef command_packet_t RadioSubsystemP__ForwardCommand__data_type;
typedef command_packet_t RadioSubsystemP__CommandUpdate__t;
typedef status_packet_t RadioSubsystemP__SetRadioStatus__data_type;
typedef command_packet_t RadioSubsystemP__CommandValue__t;
typedef data_packet_t RadioSubsystemP__SetRadioHistory__data_type;
typedef data_packet_t RadioSubsystemP__ForwardData__data_type;
typedef status_packet_t RadioSubsystemP__ForwardStatus__data_type;
typedef command_packet_t RadioSubsystemP__NotifyRadioCommand__val_t;
typedef TRadio RFA1RadioP__LocalTime__precision_tag;
typedef TRadio RFA1RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef T62khz /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__precision_tag;
typedef uint32_t /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type;
typedef /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type;
typedef /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__precision_tag /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__precision_tag;
typedef /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type;
typedef /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMilli /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef uint8_t RFA1DriverLayerP__PacketRSSI__value_type;
typedef TRadio RFA1DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RFA1DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RFA1DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RFA1DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RFA1DriverLayerP__PacketLinkQuality__value_type;
typedef uint32_t RFA1DriverLayerP__SfdCapture__size_type;
typedef T62khz /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__precision_tag /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__size_type;
enum AMQueueP____nesc_unnamed4317 {
  AMQueueP__NUM_CLIENTS = 4U
};
typedef command_packet_t /*RadioSubsystemC.DissCommand*/DisseminatorC__0__t;
enum /*RadioSubsystemC.DissCommand*/DisseminatorC__0____nesc_unnamed4318 {
  DisseminatorC__0__TIMER_ID = 0U
};
typedef /*RadioSubsystemC.DissCommand*/DisseminatorC__0__t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t;
typedef /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__t;
typedef /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__t;
typedef TMilli /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__precision_tag;
enum CtpP____nesc_unnamed4319 {
  CtpP__CLIENT_COUNT = 4U, CtpP__FORWARD_COUNT = 12, CtpP__TREE_ROUTING_TABLE_SIZE = 10, CtpP__QUEUE_SIZE = CtpP__CLIENT_COUNT + CtpP__FORWARD_COUNT, CtpP__CACHE_SIZE = 4
};
typedef message_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t;
typedef TMilli /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__precision_tag;
typedef fe_queue_entry_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t;
typedef fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t;
typedef message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t;
typedef message_t /*CtpP.MessagePoolP*/PoolC__0__pool_t;
typedef /*CtpP.MessagePoolP*/PoolC__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t;
typedef /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t;
typedef fe_queue_entry_t /*CtpP.QEntryPoolP*/PoolC__1__pool_t;
typedef /*CtpP.QEntryPoolP*/PoolC__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t;
typedef /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t;
typedef fe_queue_entry_t */*CtpP.SendQueueP*/QueueC__1__queue_t;
typedef /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__t;
typedef message_t */*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__precision_tag;
typedef TMilli /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__precision_tag;
typedef status_packet_t SerialPacketForwarderP__StatusQueue__t;
typedef command_packet_t SerialPacketForwarderP__CommandNotification__val_t;
typedef command_packet_t SerialPacketForwarderP__ForwardCommand__data_type;
typedef data_packet_t SerialPacketForwarderP__DataQueue__t;
typedef data_packet_t SerialPacketForwarderP__ForwardData__data_type;
typedef command_packet_t SerialPacketForwarderP__CommandQueue__t;
typedef status_packet_t SerialPacketForwarderP__ForwardStatus__data_type;
typedef data_packet_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t;
typedef /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__t;
typedef command_packet_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t;
typedef /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__t;
typedef status_packet_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t;
typedef /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__t;
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









static error_t Atm128Rfa1SerialP__Uart1Control__stop(void );
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
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );





static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );





static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );



static void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__get(void );
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
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 54
static void HplAtmRfa1TimerMacP__CompareB__reset(void );
#line 43
static void HplAtmRfa1TimerMacP__CompareB__set(HplAtmRfa1TimerMacP__CompareB__size_type value);
#line 59
static void HplAtmRfa1TimerMacP__CompareB__start(void );


static void HplAtmRfa1TimerMacP__CompareB__stop(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void HplAtmRfa1TimerMacP__Counter__setMode(uint8_t mode);
#line 51
static bool HplAtmRfa1TimerMacP__Counter__test(void );
#line 40
static HplAtmRfa1TimerMacP__Counter__size_type HplAtmRfa1TimerMacP__Counter__get(void );
#line 59
static void HplAtmRfa1TimerMacP__Counter__start(void );
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static HplAtmRfa1TimerMacP__SfdCapture__size_type HplAtmRfa1TimerMacP__SfdCapture__get(void );
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
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void SensorControlP__Timer0__fired(void );
# 41 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
static uint8_t SensorControlP__GetData__getArray(SensorControlP__GetData__data_type *val, uint8_t len);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t SensorControlP__Init__init(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Get.nc"
static SensorControlP__GetStatus__val_t SensorControlP__GetStatus__get(void );
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void SensorControlP__Notify__notify(SensorControlP__Notify__val_t val);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void SensorControlP__ReadAdc__readDone(error_t result, SensorControlP__ReadAdc__val_t val);
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
#line 136
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 151 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 144 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 92 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8, 
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8, 
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x406c8ec8);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void SensorSubsystemP__Data7ADC__readDone(error_t result, SensorSubsystemP__Data7ADC__val_t val);
#line 63
static void SensorSubsystemP__Data8ADC__readDone(error_t result, SensorSubsystemP__Data8ADC__val_t val);
#line 55
static error_t SensorSubsystemP__Read__read(void );







static void SensorSubsystemP__Data5ADC__readDone(error_t result, SensorSubsystemP__Data5ADC__val_t val);
#line 63
static void SensorSubsystemP__Data3ADC__readDone(error_t result, SensorSubsystemP__Data3ADC__val_t val);
#line 63
static void SensorSubsystemP__Data4ADC__readDone(error_t result, SensorSubsystemP__Data4ADC__val_t val);
#line 63
static void SensorSubsystemP__Data1ADC__readDone(error_t result, SensorSubsystemP__Data1ADC__val_t val);
#line 55
static error_t SensorSubsystemP__ReadOne__read(void );







static void SensorSubsystemP__Data6ADC__readDone(error_t result, SensorSubsystemP__Data6ADC__val_t val);
#line 63
static void SensorSubsystemP__Data2ADC__readDone(error_t result, SensorSubsystemP__Data2ADC__val_t val);
# 119 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 64
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079fa38);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079edf0);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079edf0);
# 56 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079f010);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079f010);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079f010);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x40728848);
# 66 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e3888, 
# 66 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 25 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 81 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407ffa28);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407ffa28, 
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407feac8, 
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407fd990);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407fd990);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407fd990);
# 32 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getPrescaler(void );
#line 32
static uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getPrescaler(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*SensorC.SensorBuffer*/QueueC__0__Queue__t  

/*SensorC.SensorBuffer*/QueueC__0__Queue__head(void );
#line 90
static error_t /*SensorC.SensorBuffer*/QueueC__0__Queue__enqueue(
#line 86
/*SensorC.SensorBuffer*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*SensorC.SensorBuffer*/QueueC__0__Queue__t  

/*SensorC.SensorBuffer*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*SensorC.SensorBuffer*/QueueC__0__Queue__empty(void );







static uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__size(void );
# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
static void ControllerP__Boot__booted(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t ControllerP__Init__init(void );
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static error_t ControllerP__SensorNotification__enable(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void ControllerP__GetDataOne__readDone(error_t result, ControllerP__GetDataOne__val_t val);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Set.nc"
static void ControllerP__SPEnable__set(ControllerP__SPEnable__val_t val);
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void ControllerP__NotifyRadioCommand__notify(ControllerP__NotifyRadioCommand__val_t val);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



RadioSubsystemP__DataCollectionReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



RadioSubsystemP__CommandCollectionReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static void RadioSubsystemP__AMControl__startDone(error_t error);
#line 138
static void RadioSubsystemP__AMControl__stopDone(error_t error);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t RadioSubsystemP__SetRadioCommand__setNow(RadioSubsystemP__SetRadioCommand__data_type val);
#line 53
static error_t RadioSubsystemP__SetRadioData__setNow(RadioSubsystemP__SetRadioData__data_type val);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void RadioSubsystemP__DataCollectionSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



RadioSubsystemP__StatusCollectionReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void RadioSubsystemP__NotifySerialCommand__notify(RadioSubsystemP__NotifySerialCommand__val_t val);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RadioSubsystemP__RadioSubsystemInit__init(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t RadioSubsystemP__SetRadioStatus__setNow(RadioSubsystemP__SetRadioStatus__data_type val);
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
static void RadioSubsystemP__CommandValue__changed(void );
# 25 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
static error_t RadioSubsystemP__SetRadioHistory__sendArray(RadioSubsystemP__SetRadioHistory__data_type *val, uint8_t len);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



RadioSubsystemP__HistoryCollectionReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void RadioSubsystemP__StatusCollectionSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 100
static void RadioSubsystemP__HistoryCollectionSend__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 100
static void RadioSubsystemP__CommandCollectionSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 86 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );





static void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);
#line 75
static bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RFA1RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );
#line 41
static uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);
#line 53
static uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);






static uint8_t RFA1RadioP__RFA1DriverConfig__headerPreloadLength(void );





static bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50, 
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50);
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );
# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void );
#line 66
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__size_type dt);






static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25688, 
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a28eb8, 
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a28eb8, 
# 132 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a28eb8);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25010, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a268e0, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25d88, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a24488, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7e18);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7e18);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa6a58);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa6a58);
# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa73f0);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa73f0);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa73f0);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa73f0);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);





static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 120 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 184
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 105
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40b73e48, 
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x40b73e48, 
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40ca96c0, 
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40ca96c0, 
# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);




static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40ca96c0, 
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg, bool value);




static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x40ca96c0, 
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);





static void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, RFA1DriverLayerP__PacketRSSI__value_type value);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__SoftwareInit__init(void );
# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static error_t RFA1DriverLayerP__RadioState__turnOn(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTransmitPower__value_type RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static RFA1DriverLayerP__PacketTimeSyncOffset__value_type RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t RFA1DriverLayerP__PlatformInit__init(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
# 57 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketField.nc"
static void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, RFA1DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__run(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static void /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DisseminationEngineImplP__ProbeReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void DisseminationEngineImplP__ProbeAMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 110
static void DisseminationEngineImplP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__fired(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 85 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__reset(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__default__start(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__default__storeData(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8, 
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);

static void DisseminationEngineImplP__DisseminationCache__newData(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8);
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static error_t DisseminationEngineImplP__DisseminationCache__start(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static uint32_t DisseminationEngineImplP__DisseminationCache__default__requestSeqno(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8);
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__default__requestData(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8, 
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DisseminationEngineImplP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__StdControl__start(void );
#line 95
static error_t DisseminationEngineImplP__DisseminatorControl__default__start(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8dcd0);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40dd5490, 
# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40dd69d8, 
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40dd69d8, 
# 122 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40dd69d8);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40dd69d8, 
# 96 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void * data, uint8_t size, uint32_t seqno);
static uint32_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationUpdate.nc"
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__t * newVal);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
static const /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__t */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40e5f928);
# 85 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40e5f928);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40e5f928);
# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40e5f928);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
# 45 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);
#line 45
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type);
#line 73
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 31 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(
# 114 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40eca800, 
# 20 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(
# 113 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40eca158, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ecb030, 
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ecb030, 
# 122 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ecb030);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ecb030, 
# 96 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );
# 113 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t error);
#line 138
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(
# 112 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40ecba40, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 7 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpPacket.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);





static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t etx);
#line 49
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t option);







static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);


static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
#line 46
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t option);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);





static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 66
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
#line 55
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(
# 146 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ee9130);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * 


/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 61
static bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 89
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * 


/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 61
static bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 89
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.SendQueueP*/QueueC__1__Queue__t  

/*CtpP.SendQueueP*/QueueC__1__Queue__head(void );
#line 90
static error_t /*CtpP.SendQueueP*/QueueC__1__Queue__enqueue(
#line 86
/*CtpP.SendQueueP*/QueueC__1__Queue__t  newVal);
#line 101
static 
#line 99
/*CtpP.SendQueueP*/QueueC__1__Queue__t  

/*CtpP.SendQueueP*/QueueC__1__Queue__element(uint8_t idx);
#line 65
static uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__maxSize(void );
#line 81
static 
#line 79
/*CtpP.SendQueueP*/QueueC__1__Queue__t  

/*CtpP.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 50
static bool /*CtpP.SendQueueP*/QueueC__1__Queue__empty(void );







static uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__size(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Cache.nc"
static void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);







static bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__t item);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(uint16_t neighbor);
#line 68
static error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 61
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);










static error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 58
static error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 75
static error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 64
static error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void LinkEstimatorP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 80
static error_t LinkEstimatorP__Send__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

LinkEstimatorP__Send__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t LinkEstimatorP__Send__maxPayloadLength(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t LinkEstimatorP__Init__init(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t LinkEstimatorP__StdControl__start(void );
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void );
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 41
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__unsetRoot(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingPacket.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t * msg, ctp_options_t opt);
# 113 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);
#line 138
static void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 71
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );









static void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 83
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionId.nc"
static collection_id_t /*RadioSubsystemC.DataCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void );
#line 46
static collection_id_t /*RadioSubsystemC.StatusCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__1__CollectionId__fetch(void );
#line 46
static collection_id_t /*RadioSubsystemC.CommandCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__2__CollectionId__fetch(void );
#line 46
static collection_id_t /*RadioSubsystemC.HistoryCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__3__CollectionId__fetch(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialPacketForwarderP__SerialPacketForwarderControl__start(void );









static error_t SerialPacketForwarderP__SerialPacketForwarderControl__stop(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SerialPacketForwarderP__processReceiveBufferTask__runTask(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static error_t SerialPacketForwarderP__CommandNotification__disable(void );
#line 59
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
# 14 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 12
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf);
#line 11
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 6
static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);



static uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf);
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__t  

/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__t  

/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__size(void );
#line 73
static 
#line 71
/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__t  

/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__t  

/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__size(void );
#line 73
static 
#line 71
/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__t  

/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__head(void );
#line 90
static error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__enqueue(
#line 86
/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__t  newVal);
#line 65
static uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__maxSize(void );
#line 81
static 
#line 79
/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__t  

/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__dequeue(void );
#line 50
static bool /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__empty(void );







static uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__size(void );
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
enum MeasureClockC____nesc_unnamed4320 {
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
enum Atm128Rfa1SerialP____nesc_unnamed4321 {
#line 40
  Atm128Rfa1SerialP__sendBlockingDoneTask = 0U
};
#line 40
typedef int Atm128Rfa1SerialP____nesc_sillytask_sendBlockingDoneTask[Atm128Rfa1SerialP__sendBlockingDoneTask];
enum Atm128Rfa1SerialP____nesc_unnamed4322 {
#line 41
  Atm128Rfa1SerialP__receiveBlockingDoneTask = 1U
};
#line 41
typedef int Atm128Rfa1SerialP____nesc_sillytask_receiveBlockingDoneTask[Atm128Rfa1SerialP__receiveBlockingDoneTask];

enum Atm128Rfa1SerialP____nesc_unnamed4323 {
#line 43
  Atm128Rfa1SerialP__sendDoneTask = 2U
};
#line 43
typedef int Atm128Rfa1SerialP____nesc_sillytask_sendDoneTask[Atm128Rfa1SerialP__sendDoneTask];
enum Atm128Rfa1SerialP____nesc_unnamed4324 {
#line 44
  Atm128Rfa1SerialP__receiveDoneTask = 3U
};
#line 44
typedef int Atm128Rfa1SerialP____nesc_sillytask_receiveDoneTask[Atm128Rfa1SerialP__receiveDoneTask];

enum Atm128Rfa1SerialP____nesc_unnamed4325 {
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









static inline error_t Atm128Rfa1SerialP__Uart1Control__start(void );







static inline error_t Atm128Rfa1SerialP__Uart1Control__stop(void );
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
# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/LedsP.nc"
static inline error_t LedsP__Init__init(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortE.Bit2*/HplAtm128GeneralIOPinP__18__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortE.Bit3*/HplAtm128GeneralIOPinP__19__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortE.Bit4*/HplAtm128GeneralIOPinP__20__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeInput(void );
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

enum /*CounterMilli32C.TransformCounterC*/TransformCounterC__0____nesc_unnamed4326 {

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
#line 247
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value);
#line 266
void __vector_66(void ) __attribute((signal))   ;



static inline void HplAtmRfa1TimerMacP__CompareB__reset(void );



static inline void HplAtmRfa1TimerMacP__CompareB__start(void );






static inline void HplAtmRfa1TimerMacP__CompareB__stop(void );










static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode);
#line 344
static inline void HplAtmRfa1TimerMacP__CompareC__default__fired(void );

void __vector_67(void ) __attribute((signal))   ;
#line 392
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void );
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
enum SchedulerBasicP____nesc_unnamed4327 {

  SchedulerBasicP__NUM_TASKS = 23U, 
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
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void SensorControlP__Timer0__startPeriodic(uint32_t dt);
#line 78
static void SensorControlP__Timer0__stop(void );
# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static error_t SensorControlP__StoreData__enqueue(
#line 86
SensorControlP__StoreData__t  newVal);
#line 81
static 
#line 79
SensorControlP__StoreData__t  

SensorControlP__StoreData__dequeue(void );
#line 50
static bool SensorControlP__StoreData__empty(void );







static uint8_t SensorControlP__StoreData__size(void );
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static error_t SensorControlP__Notify__enable(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static error_t SensorControlP__ReadAdc__read(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Set.nc"
static void SensorControlP__SPEnable__set(SensorControlP__SPEnable__val_t val);
# 45 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static status_packet_t SensorControlP__status;
static data_packet_t SensorControlP__tempData;

static inline error_t SensorControlP__Init__init(void );
#line 60
static inline void SensorControlP__Timer0__fired(void );









static inline uint32_t SensorControlP__calcTimerPeriod(void );
#line 91
static inline void SensorControlP__Notify__notify(status_packet_t val);
#line 108
static inline status_packet_t SensorControlP__GetStatus__get(void );



static inline void SensorControlP__ReadAdc__readDone(error_t result, data_packet_t val);
#line 158
static inline uint8_t SensorControlP__GetData__getArray(data_packet_t *val, uint8_t len);
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

enum /*TimerMilliP.AlarmMilli32C.TransformAlarmC*/TransformAlarmC__0____nesc_unnamed4328 {

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
enum /*TimerMilliP.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4329 {
#line 74
  AlarmToTimerC__0__fired = 5U
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
uint8_t arg_0x406c8ec8);
#line 71
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4330 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 6U
};
#line 71
typedef int /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4331 {

  VirtualizeTimerC__0__NUM_TIMERS = 5U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4332 {

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




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 189
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);




static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num);




static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num);




static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static error_t SensorSubsystemP__Data7ADC__read(void );
#line 55
static error_t SensorSubsystemP__Data8ADC__read(void );







static void SensorSubsystemP__Read__readDone(error_t result, SensorSubsystemP__Read__val_t val);
#line 55
static error_t SensorSubsystemP__Data5ADC__read(void );
#line 55
static error_t SensorSubsystemP__Data3ADC__read(void );
#line 55
static error_t SensorSubsystemP__Data4ADC__read(void );
#line 55
static error_t SensorSubsystemP__Data1ADC__read(void );







static void SensorSubsystemP__ReadOne__readDone(error_t result, SensorSubsystemP__ReadOne__val_t val);
#line 55
static error_t SensorSubsystemP__Data6ADC__read(void );
#line 55
static error_t SensorSubsystemP__Data2ADC__read(void );
# 41 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
data_packet_t SensorSubsystemP__sensorData;
bool SensorSubsystemP__mode;

static inline error_t SensorSubsystemP__Read__read(void );









static inline error_t SensorSubsystemP__ReadOne__read(void );








static inline void SensorSubsystemP__FormDataPacket(void );








static inline void SensorSubsystemP__Data1ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data2ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data3ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data4ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data5ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data6ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data7ADC__readDone(error_t result, uint16_t val);








static inline void SensorSubsystemP__Data8ADC__readDone(error_t result, uint16_t val);
# 119 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 102 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
#line 98
struct Atm128AdcP____nesc_unnamed4333 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 102
#line 98
struct Atm128AdcP____nesc_unnamed4333 



Atm128AdcP__nextF;
#line 126
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 206
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 240
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 274
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 156 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );






static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);



static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 89
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 122
void __vector_29(void ) __attribute((signal))   ;








static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void );







static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4334 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 8U ? (8U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079fa38);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079edf0);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079edf0);
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
uint8_t arg_0x4079f010);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4335 {
#line 75
  ArbiterP__0__grantedTask = 7U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4336 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4337 {
#line 68
  ArbiterP__0__default_owner_id = 8U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4338 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x40728848, 
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e3888, 
# 66 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 25 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
uint8_t arg_0x407e2dc0);
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
enum AdcP____nesc_unnamed4339 {
#line 103
  AdcP__acquiredData = 8U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4340 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407ffa28, 
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407feac8);
# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407fd990);
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x407fd990);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 14 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSensorP.nc"
static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getPrescaler(void );
#line 14
static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getChannel(void );




static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getPrescaler(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
/*SensorC.SensorBuffer*/QueueC__0__queue_t  /*SensorC.SensorBuffer*/QueueC__0__queue[2];
uint8_t /*SensorC.SensorBuffer*/QueueC__0__head = 0;
uint8_t /*SensorC.SensorBuffer*/QueueC__0__tail = 0;
uint8_t /*SensorC.SensorBuffer*/QueueC__0__size = 0;

static inline bool /*SensorC.SensorBuffer*/QueueC__0__Queue__empty(void );



static inline uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__size(void );



static inline uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__maxSize(void );



static inline /*SensorC.SensorBuffer*/QueueC__0__queue_t /*SensorC.SensorBuffer*/QueueC__0__Queue__head(void );



static inline void /*SensorC.SensorBuffer*/QueueC__0__printQueue(void );
#line 85
static /*SensorC.SensorBuffer*/QueueC__0__queue_t /*SensorC.SensorBuffer*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*SensorC.SensorBuffer*/QueueC__0__Queue__enqueue(/*SensorC.SensorBuffer*/QueueC__0__queue_t newVal);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t ControllerP__SerialPacketForwarderControl__start(void );









static error_t ControllerP__SerialPacketForwarderControl__stop(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t ControllerP__SetRadioCommand__setNow(ControllerP__SetRadioCommand__data_type val);
#line 53
static error_t ControllerP__SetRadioData__setNow(ControllerP__SetRadioData__data_type val);
# 44 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
static void ControllerP__CheckRoot__makeInput(void );
#line 43
static bool ControllerP__CheckRoot__get(void );
# 41 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
static uint8_t ControllerP__GetData__getArray(ControllerP__GetData__data_type *val, uint8_t len);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Get.nc"
static ControllerP__GetStatus__val_t ControllerP__GetStatus__get(void );
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void ControllerP__SensorNotification__notify(ControllerP__SensorNotification__val_t val);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t ControllerP__RadioSubsystemInit__init(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t ControllerP__SetRadioStatus__setNow(ControllerP__SetRadioStatus__data_type val);
# 25 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
static error_t ControllerP__SetRadioHistory__sendArray(ControllerP__SetRadioHistory__data_type *val, uint8_t len);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t ControllerP__InitSensorC__init(void );
# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
static error_t ControllerP__RadioSubsystemRootControl__setRoot(void );
static error_t ControllerP__RadioSubsystemRootControl__unsetRoot(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
static error_t ControllerP__GetDataOne__read(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
static error_t ControllerP__SerialPacketForwarderInit__init(void );
# 86 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
bool ControllerP__IAmRoot;

static inline void ControllerP__Boot__booted(void );



static inline error_t ControllerP__Init__init(void );
#line 125
static error_t ControllerP__SensorNotification__enable(void );
#line 166
static inline void ControllerP__GetDataOne__readDone(error_t result, data_packet_t val);







static inline void ControllerP__NotifyRadioCommand__notify(command_packet_t val);
#line 229
static inline void ControllerP__SPEnable__set(uint8_t val);
# 104 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t RadioSubsystemP__AMControl__start(void );
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t RadioSubsystemP__DataCollectionSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

RadioSubsystemP__DataCollectionSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t RadioSubsystemP__DisseminationControl__start(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t RadioSubsystemP__ForwardCommand__setNow(RadioSubsystemP__ForwardCommand__data_type val);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationUpdate.nc"
static void RadioSubsystemP__CommandUpdate__change(RadioSubsystemP__CommandUpdate__t * newVal);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t RadioSubsystemP__RoutingControl__start(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
static const RadioSubsystemP__CommandValue__t *RadioSubsystemP__CommandValue__get(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t RadioSubsystemP__ForwardData__setNow(RadioSubsystemP__ForwardData__data_type val);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t RadioSubsystemP__StatusCollectionSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

RadioSubsystemP__StatusCollectionSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 75
static error_t RadioSubsystemP__HistoryCollectionSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

RadioSubsystemP__HistoryCollectionSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 75
static error_t RadioSubsystemP__CommandCollectionSend__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

RadioSubsystemP__CommandCollectionSend__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
static error_t RadioSubsystemP__ForwardStatus__setNow(RadioSubsystemP__ForwardStatus__data_type val);
# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
static void RadioSubsystemP__NotifyRadioCommand__notify(RadioSubsystemP__NotifyRadioCommand__val_t val);
# 54 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
message_t RadioSubsystemP__packet;
bool RadioSubsystemP__locked = FALSE;
bool RadioSubsystemP__commandDisseminationEnabled = TRUE;
bool RadioSubsystemP__receiveBusy = FALSE;


static inline error_t RadioSubsystemP__RadioSubsystemInit__init(void );







static inline void RadioSubsystemP__AMControl__startDone(error_t err);
#line 81
static inline void RadioSubsystemP__AMControl__stopDone(error_t error);







static inline void RadioSubsystemP__NotifySerialCommand__notify(command_packet_t val);
#line 127
static void RadioSubsystemP__CommandValue__changed(void );
#line 141
static inline message_t *RadioSubsystemP__DataCollectionReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *RadioSubsystemP__HistoryCollectionReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 164
static inline message_t *RadioSubsystemP__CommandCollectionReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline message_t *RadioSubsystemP__StatusCollectionReceive__receive(message_t *msg, void *payload, uint8_t len);








static inline error_t RadioSubsystemP__SetRadioData__setNow(data_packet_t val);
#line 218
static inline error_t RadioSubsystemP__SetRadioHistory__sendArray(data_packet_t *val, uint8_t len);
#line 263
static inline error_t RadioSubsystemP__SetRadioCommand__setNow(command_packet_t val);
#line 297
static inline error_t RadioSubsystemP__SetRadioStatus__setNow(status_packet_t val);
#line 333
static inline void RadioSubsystemP__DataCollectionSend__sendDone(message_t *msg, error_t error);









static inline void RadioSubsystemP__CommandCollectionSend__sendDone(message_t *msg, error_t error);









static inline void RadioSubsystemP__StatusCollectionSend__sendDone(message_t *msg, error_t error);









static inline void RadioSubsystemP__HistoryCollectionSend__sendDone(message_t *msg, error_t error);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t RFA1RadioP__LocalTime__get(void );
# 120 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 105
static void RFA1RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 168
static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg);




static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void );




static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg);




static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerPreloadLength(void );





static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);




static inline void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack);




static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RFA1RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);









static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 246
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x409f1d50);
# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4341 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 72 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 94
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 112
static void TaskletC__Tasklet__schedule(void );
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode);
#line 54
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void );
#line 43
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value);
#line 59
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void );


static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void );
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
static /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void );










static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void );





static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void );










static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type time);
#line 102
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt);
#line 115
static inline /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void );









static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SendNotifier.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25688, 
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a28eb8, 
# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25010, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a268e0, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a25d88, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x40a24488, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 98
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 112
static __inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id);




static __inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 141
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);









static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 262
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 62 "/opt/tinyos-main/src/tinyos-main/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 93
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 106
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
enum /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4342 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7e18);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa7e18);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa6a58);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa6a58);
# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x40aa73f0);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4343 {
#line 69
  SimpleArbiterP__0__grantedTask = 9U
};
#line 69
typedef int /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4344 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4345 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 155
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );









static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 184 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Ieee154Send.nc"
static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4346 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4347 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static inline ieee154_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 97
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack);
#line 163
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);









static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );









static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 286
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4348 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 10U
};
#line 144
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4349 {
#line 189
  MessageBufferLayerP__0__sendTask = 11U
};
#line 189
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4350 {
#line 322
  MessageBufferLayerP__0__deliverTask = 12U
};
#line 322
typedef int /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4351 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 144
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4352 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4353 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4354 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 13U
};
#line 78
typedef int /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4355 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 40
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg);




static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(message_t *msg, bool value);
# 86 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );





static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack);
#line 75
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4356 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);







static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 178
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg);
#line 192
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);






static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value);









static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
static void RFA1DriverLayerP__RadioCCA__done(error_t error);
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
static void RFA1DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RFA1DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RFA1DriverLayerP__PacketTimeStamp__size_type value);
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
static void RFA1DriverLayerP__RadioState__done(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/LocalTime.nc"
static uint32_t RFA1DriverLayerP__LocalTime__get(void );
# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void );
#line 41
static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg);
#line 53
static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg);






static uint8_t RFA1DriverLayerP__Config__headerPreloadLength(void );





static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
static void RFA1DriverLayerP__RadioSend__ready(void );
#line 56
static void RFA1DriverLayerP__RadioSend__sendDone(error_t error);
# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg);
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void );
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
static void RFA1DriverLayerP__Tasklet__schedule(void );
# 89 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg);




static void *RFA1DriverLayerP__getPayload(message_t *msg);




static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg);






uint8_t RFA1DriverLayerP__state;
enum RFA1DriverLayerP____nesc_unnamed4357 {

  RFA1DriverLayerP__STATE_PLL_ON = 0, 
  RFA1DriverLayerP__STATE_SLEEP = 1, 
  RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RFA1DriverLayerP__STATE_TRX_OFF = 3, 
  RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RFA1DriverLayerP__STATE_RX_ON = 5, 
  RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6, 
  RFA1DriverLayerP__STATE_PLL_ON_2_RX_ON = 7
};

uint8_t RFA1DriverLayerP__cmd;
enum RFA1DriverLayerP____nesc_unnamed4358 {

  RFA1DriverLayerP__CMD_NONE = 0, 
  RFA1DriverLayerP__CMD_TURNOFF = 1, 
  RFA1DriverLayerP__CMD_STANDBY = 2, 
  RFA1DriverLayerP__CMD_TURNON = 3, 
  RFA1DriverLayerP__CMD_TRANSMIT = 4, 
  RFA1DriverLayerP__CMD_RECEIVE = 5, 
  RFA1DriverLayerP__CMD_CCA = 6, 
  RFA1DriverLayerP__CMD_CHANNEL = 7, 
  RFA1DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RFA1DriverLayerP__CMD_DOWNLOAD = 9
};

enum RFA1DriverLayerP____nesc_unnamed4359 {

  RFA1DriverLayerP__IRQ_PLL_LOCK = 1 << 0, 
  RFA1DriverLayerP__IRQ_PLL_UNLOCK = 1 << 1, 
  RFA1DriverLayerP__IRQ_RX_START = 1 << 2, 
  RFA1DriverLayerP__IRQ_RX_END = 1 << 3, 
  RFA1DriverLayerP__IRQ_CCA_ED_DONE = 1 << 4, 
  RFA1DriverLayerP__IRQ_AMI = 1 << 5, 
  RFA1DriverLayerP__IRQ_TX_END = 1 << 6, 
  RFA1DriverLayerP__IRQ_AWAKE = 1 << 7
};

uint8_t RFA1DriverLayerP__radioIrq;

uint8_t RFA1DriverLayerP__txPower;
uint8_t RFA1DriverLayerP__channel;

message_t *RFA1DriverLayerP__rxMsg;
message_t RFA1DriverLayerP__rxMsgBuffer;

uint8_t RFA1DriverLayerP__rssiClear;
uint8_t RFA1DriverLayerP__rssiBusy;




enum RFA1DriverLayerP____nesc_unnamed4360 {


  RFA1DriverLayerP__TX_SFD_DELAY = 0, 
  RFA1DriverLayerP__RX_SFD_DELAY = 0
};




static inline error_t RFA1DriverLayerP__PlatformInit__init(void );
#line 183
static inline error_t RFA1DriverLayerP__SoftwareInit__init(void );
#line 234
static __inline void RFA1DriverLayerP__changeChannel(void );
#line 248
static __inline void RFA1DriverLayerP__changeState(void );
#line 314
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void );
#line 330
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg);
#line 466
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error);


static __inline void RFA1DriverLayerP__downloadMessage(void );
#line 544
static inline void RFA1DriverLayerP__serviceRadio(void );
#line 698
static inline void RFA1DriverLayerP__Tasklet__run(void );
#line 740
void __vector_59(void ) __attribute((signal))   ;
#line 752
void __vector_60(void ) __attribute((signal))   ;
#line 764
void __vector_63(void ) __attribute((signal))   ;










void __vector_57(void ) __attribute((signal))   ;










void __vector_58(void ) __attribute((signal))   ;




void __vector_64(void ) __attribute((signal))   ;










void __vector_61(void ) __attribute((signal))   ;










void __vector_62(void ) __attribute((signal))   ;





static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg);




static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);







static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg);
#line 856
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 889
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 944
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
static /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

DisseminationEngineImplP__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void );
# 85 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__incrementCounter(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__reset(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__start(
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8d200);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__storeData(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8, 
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);
static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8);
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__requestData(
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8e6f8, 
# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__DisseminatorControl__start(
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x40d8dcd0);
#line 64
enum DisseminationEngineImplP____nesc_unnamed4361 {
#line 64
  DisseminationEngineImplP__NUM_DISSEMINATORS = 1U
};
message_t DisseminationEngineImplP__m_buf;
bool DisseminationEngineImplP__m_running;
bool DisseminationEngineImplP__m_bufBusy;


static void DisseminationEngineImplP__sendObject(uint16_t key);

static inline error_t DisseminationEngineImplP__StdControl__start(void );
#line 91
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key);










static inline void DisseminationEngineImplP__DisseminationCache__newData(uint16_t key);










static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key);
#line 131
static void DisseminationEngineImplP__sendObject(uint16_t key);
#line 162
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error);



static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error);



static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 226
static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 243
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size);


static inline 
#line 246
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno);


static inline 
#line 251
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key);

static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key);



static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key);

static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key);

static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void );
# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void );



static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40dd5490, 
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40dd5490, 
# 132 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x40dd5490);
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x40dd69d8, 
# 96 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4362 {
#line 126
  AMQueueImplP__0__CancelTask = 14U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4363 {
#line 169
  AMQueueImplP__0__errorTask = 15U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4364 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[4];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[4 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id);



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__postTask(void );
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData(void );
#line 45
static error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void );
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void );
# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
enum /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0____nesc_unnamed4365 {
#line 62
  DisseminatorP__0__changedTask = 16U
};
#line 62
typedef int /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0____nesc_sillytask_changedTask[/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask];
#line 55
/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__valueCache;
bool /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__m_running;



uint32_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno = DISSEMINATION_SEQNO_UNKNOWN;

static inline void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );



static inline error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
#line 78
static inline const /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void );









static inline void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t *newVal);
#line 101
static inline void */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);




static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno);









static inline uint32_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );
# 45 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum);
#line 45
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void );
# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x40e5f928);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void );
# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void );
#line 151
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void );
#line 144
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void );
#line 73
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt);




static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void );
# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
enum /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4366 {
#line 154
  TrickleTimerImplP__0__timerTask = 17U
};
#line 154
typedef int /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_sillytask_timerTask[/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask];
#line 75
#line 70
typedef struct /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4367 {
  uint16_t period;
  uint32_t time;
  uint32_t remainder;
  uint8_t count;
} /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t;

/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[1U];

static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);

static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
#line 100
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id);
#line 130
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id);
#line 150
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id);



static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
#line 176
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
#line 209
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
#line 268
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);
#line 292
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id);
# 51 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0____nesc_unnamed4368 {

  BitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type ), 
  BitVectorC__0__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 51
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1____nesc_unnamed4369 {

  BitVectorC__1__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type ), 
  BitVectorC__1__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);




static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void );
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 123
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void );
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type);
#line 73
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor);



static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor);
# 51 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Cache.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);







static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item);
# 31 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Intercept.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(
# 114 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40eca800, 
# 20 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Intercept.nc"
message_t * msg, 

void * payload, 








uint8_t len);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(
# 113 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40eca158, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void );
# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ecb030, 
# 96 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 92 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void );
#line 73
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt);
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
static 
#line 71
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void );
#line 90
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(
#line 86
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal);
#line 101
static 
#line 99
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx);
#line 81
static 
#line 79
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  

/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void );
#line 50
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void );







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void );
# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void );
#line 71
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void );
#line 64
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 78
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void );
#line 94
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(
# 112 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
collection_id_t arg_0x40ecba40, 
# 71 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void );
#line 48
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void );
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(
#line 74
message_t * amsg);
# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
static 
#line 94
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * 


/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void );
#line 61
static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void );
#line 89
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(
#line 85
/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal);
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionId.nc"
static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(
# 146 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
uint8_t arg_0x40ee9130);
#line 234
enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4370 {
#line 234
  CtpForwardingEngineP__0__sendTask = 18U
};
#line 234
typedef int /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_sillytask_sendTask[/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask];
#line 169
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t mask, uint16_t offset);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);


enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4371 {
  CtpForwardingEngineP__0__QUEUE_CONGESTED = 0x1, 
  CtpForwardingEngineP__0__ROUTING_ON = 0x2, 
  CtpForwardingEngineP__0__RADIO_ON = 0x4, 
  CtpForwardingEngineP__0__ACK_PENDING = 0x8, 
  CtpForwardingEngineP__0__SENDING = 0x10
};


uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = 0;



uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno;

enum /*CtpP.Forwarder*/CtpForwardingEngineP__0____nesc_unnamed4372 {
  CtpForwardingEngineP__0__CLIENT_COUNT = 4U
};






fe_queue_entry_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];
fe_queue_entry_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[/*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT];







message_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr;

static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void );










static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void );
#line 239
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err);









static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset);
#line 262
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void );




static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void );





static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err);





static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m);
#line 294
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(uint8_t client, message_t *msg, uint8_t len);
#line 345
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(uint8_t client);



static inline void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(uint8_t client, message_t *msg, uint8_t len);
#line 371
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void );
#line 483
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success);
#line 527
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 578
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m);
#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 731
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len);
#line 744
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void );





static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void );








static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);







static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg);



static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void );



static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len);








static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg);

static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg);





static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg);
static inline am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg);
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg);
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg);
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e);

static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt);






static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2);
#line 833
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state);


static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state);


static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state);






static inline 
#line 845
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error);



static inline 
#line 849
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len);



static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(uint8_t client);







static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type);








static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;
uint8_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__index;
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t * /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[12];
/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[12];

static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void );









static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void );
#line 88
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;
uint8_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index;
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t * /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[12];
/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[12];

static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void );









static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void );
#line 88
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
/*CtpP.SendQueueP*/QueueC__1__queue_t  /*CtpP.SendQueueP*/QueueC__1__queue[16];
uint8_t /*CtpP.SendQueueP*/QueueC__1__head = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__1__tail = 0;
uint8_t /*CtpP.SendQueueP*/QueueC__1__size = 0;

static inline bool /*CtpP.SendQueueP*/QueueC__1__Queue__empty(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__size(void );



static inline uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__maxSize(void );



static inline /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__head(void );



static inline void /*CtpP.SendQueueP*/QueueC__1__printQueue(void );
#line 85
static /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__dequeue(void );
#line 97
static error_t /*CtpP.SendQueueP*/QueueC__1__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__1__queue_t newVal);
#line 112
static inline /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__element(uint8_t idx);
# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpPacket.nc"
static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg);
#line 54
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg);








static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg);


static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg);
# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
#line 53
typedef struct /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0____nesc_unnamed4373 {
  am_addr_t origin;
  uint8_t seqno;
  collection_id_t type;
  uint8_t thl;
} /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t;

/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[4];
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first;
uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;

static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void );
#line 84
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m);
#line 100
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i);
#line 116
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m);
#line 135
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor);
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void LinkEstimatorP__Send__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__SubPacket__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


LinkEstimatorP__SubPacket__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void );
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t LinkEstimatorP__SubAMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t LinkEstimatorP__SubAMPacket__address(void );









static am_addr_t LinkEstimatorP__SubAMPacket__destination(
#line 74
message_t * amsg);
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



LinkEstimatorP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 66 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
enum LinkEstimatorP____nesc_unnamed4374 {


  LinkEstimatorP__EVICT_EETX_THRESHOLD = 55, 

  LinkEstimatorP__MAX_AGE = 6, 


  LinkEstimatorP__MAX_PKT_GAP = 10, 
  LinkEstimatorP__BEST_EETX = 0, 
  LinkEstimatorP__INVALID_RVAL = 0xff, 
  LinkEstimatorP__INVALID_NEIGHBOR_ADDR = 0xff, 


  LinkEstimatorP__VERY_LARGE_EETX_VALUE = 0xff, 


  LinkEstimatorP__ALPHA = 9, 


  LinkEstimatorP__DLQ_PKT_WINDOW = 5, 


  LinkEstimatorP__BLQ_PKT_WINDOW = 3, 



  LinkEstimatorP__LARGE_EETX_VALUE = 60
};


neighbor_table_entry_t LinkEstimatorP__NeighborTable[10];

uint8_t LinkEstimatorP__linkEstSeq = 0;



uint8_t LinkEstimatorP__prevSentIdx = 0;


static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m);




static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t * m, uint8_t len);







static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t * msg, uint8_t len);
#line 174
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr);
#line 190
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr);
#line 203
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void );
#line 216
static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdEETX);
#line 250
static inline void LinkEstimatorP__updateReverseQuality(am_addr_t neighbor, uint8_t outquality);
#line 262
static void LinkEstimatorP__updateEETX(neighbor_table_entry_t *ne, uint16_t newEst);





static void LinkEstimatorP__updateDEETX(neighbor_table_entry_t *ne);
#line 304
static inline uint8_t LinkEstimatorP__computeBidirEETX(uint8_t q1, uint8_t q2);
#line 320
static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n);
#line 371
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq);
#line 406
static void LinkEstimatorP__print_neighbor_table(void );
#line 420
static void LinkEstimatorP__print_packet(message_t *msg, uint8_t len);










static inline void LinkEstimatorP__initNeighborTable(void );







static inline error_t LinkEstimatorP__StdControl__start(void );









static inline error_t LinkEstimatorP__Init__init(void );






static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor);
#line 502
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 530
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor);









static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 552
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor);
#line 569
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor);
#line 585
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 600
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len);










static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error);








static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void );



static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len);






static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len);
#line 733
static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 749
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg);
#line 768
static inline uint8_t LinkEstimatorP__Packet__maxPayloadLength(void );




static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 112
static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength(void );
# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void );
# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric);
#line 67
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);
# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor);
#line 58
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor);
#line 75
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor);
#line 64
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor);
#line 49
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor);
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void );
#line 46
static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void );
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void );
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt);
#line 64
static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt);
# 7 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpCongestion.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void );
# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void );
# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void );
static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void );
# 271 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4375 {
#line 271
  CtpRoutingEngineP__0__updateRouteTask = 19U
};
#line 271
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_updateRouteTask[/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask];
#line 390
enum /*CtpP.Router*/CtpRoutingEngineP__0____nesc_unnamed4376 {
#line 390
  CtpRoutingEngineP__0__sendBeaconTask = 20U
};
#line 390
typedef int /*CtpP.Router*/CtpRoutingEngineP__0____nesc_sillytask_sendBeaconTask[/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask];
#line 136
bool /*CtpP.Router*/CtpRoutingEngineP__0__ECNOff = TRUE;



bool /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;

bool /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;


bool /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;

route_info_t /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo;
bool /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;

message_t /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer;
ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg;


routing_table_entry /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[10];
uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;


uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges;



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t arg_0x410b0420);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t arg_0x410b09c8, am_addr_t arg_0x410b0b80, uint16_t arg_0x410b0d30);
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);
#line 181
uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__t;
bool /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed;

static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void );




static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void );







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void );






static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void );
#line 228
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void );
#line 246
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error);









static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error);






static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void );
#line 390
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void );
#line 431
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error);







static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void );





static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void );
#line 460
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m);






static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 517
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor);
#line 529
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void );


static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void );
#line 546
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx);
#line 559
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void );



static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested);
#line 601
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void );
#line 615
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__unsetRoot(void );








static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void );
#line 694
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void );





static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor);
#line 712
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx);
#line 751
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor);
#line 774
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3);





static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx);



static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt);
# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err);
# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*RadioSubsystemC.DataCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void );
#line 50
static inline collection_id_t /*RadioSubsystemC.StatusCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__1__CollectionId__fetch(void );
#line 50
static inline collection_id_t /*RadioSubsystemC.CommandCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__2__CollectionId__fetch(void );
#line 50
static inline collection_id_t /*RadioSubsystemC.HistoryCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__3__CollectionId__fetch(void );
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
# 14 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
static uint8_t SerialPacketForwarderP__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 12
static uint8_t SerialPacketForwarderP__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf);
#line 11
static uint8_t SerialPacketForwarderP__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 6
static uint8_t SerialPacketForwarderP__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);



static uint8_t SerialPacketForwarderP__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf);
# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
static error_t SerialPacketForwarderP__UartControl__start(void );









static error_t SerialPacketForwarderP__UartControl__stop(void );
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SerialPacketForwarderP__forwardNextPacketTask__postTask(void );
# 36 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
enum SerialPacketForwarderP____nesc_unnamed4377 {
#line 36
  SerialPacketForwarderP__processReceiveBufferTask = 21U
};
#line 36
typedef int SerialPacketForwarderP____nesc_sillytask_processReceiveBufferTask[SerialPacketForwarderP__processReceiveBufferTask];
enum SerialPacketForwarderP____nesc_unnamed4378 {
#line 37
  SerialPacketForwarderP__forwardNextPacketTask = 22U
};
#line 37
typedef int SerialPacketForwarderP____nesc_sillytask_forwardNextPacketTask[SerialPacketForwarderP__forwardNextPacketTask];

bool SerialPacketForwarderP__started;
bool SerialPacketForwarderP__enabled;
bool SerialPacketForwarderP__commandReceptionEnabled;

char SerialPacketForwarderP__receiveBuffer[64];
char SerialPacketForwarderP__temporaryBuffer[64];
uint8_t SerialPacketForwarderP__temporaryPos;
uint8_t SerialPacketForwarderP__pos;



static inline error_t SerialPacketForwarderP__SerialPacketForwarderInit__init(void );







static inline error_t SerialPacketForwarderP__SerialPacketForwarderControl__start(void );










static inline error_t SerialPacketForwarderP__SerialPacketForwarderControl__stop(void );
#line 82
static error_t SerialPacketForwarderP__CommandNotification__enable(void );
#line 96
static inline error_t SerialPacketForwarderP__CommandNotification__disable(void );
#line 113
static inline void SerialPacketForwarderP__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);




static inline void SerialPacketForwarderP__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);





static void SerialPacketForwarderP__UartStream__receivedByte(uint8_t byte);
#line 181
static inline error_t SerialPacketForwarderP__ForwardCommand__setNow(command_packet_t val);
#line 195
static error_t SerialPacketForwarderP__ForwardData__setNow(data_packet_t val);
#line 209
static inline error_t SerialPacketForwarderP__ForwardStatus__setNow(status_packet_t val);
#line 223
static inline void SerialPacketForwarderP__forwardNextPacketTask__runTask(void );
#line 270
static inline void SerialPacketForwarderP__processReceiveBufferTask__runTask(void );
# 17 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf);
#line 121
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf);
#line 139
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf);
#line 180
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *cp, uint8_t *buf);
#line 204
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *sp, uint8_t *buf);
# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
/*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t  /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue[255];
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__head = 0;
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__tail = 0;
uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__size = 0;

static inline bool /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__head(void );



static inline void /*SerialPacketForwarderC.DataQueue*/QueueC__2__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__enqueue(/*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t newVal);
#line 48
/*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t  /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue[32];
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__head = 0;
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__tail = 0;
uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__size = 0;

static inline bool /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__head(void );



static inline void /*SerialPacketForwarderC.CommandQueue*/QueueC__3__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__enqueue(/*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t newVal);
#line 48
/*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t  /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue[32];
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__head = 0;
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__tail = 0;
uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__size = 0;

static inline bool /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__empty(void );



static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__size(void );



static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__maxSize(void );



static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__head(void );



static inline void /*SerialPacketForwarderC.StatusQueue*/QueueC__4__printQueue(void );
#line 85
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__dequeue(void );
#line 97
static inline error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__enqueue(/*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t newVal);
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

# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*CounterMilli32C.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
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

# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*Counter62khz32C.AtmegaCounterP*/AtmegaCounterP__0__Counter__overflow(void ){
#line 82
  /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__overflow();
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

#line 125
static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow(void )
#line 125
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static void HplAtmRfa1TimerMacP__Counter__overflow(void ){
#line 48
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__overflow();
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
# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
      }
  }
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired(void ){
#line 78
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 281 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__stop(void )
{
  * (volatile uint8_t *)0xDF &= ~(1 << 1);

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop(void ){
#line 62
  HplAtmRfa1TimerMacP__CompareB__stop();
#line 62
}
#line 62
# 63 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired(void )
{
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__fired();
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void HplAtmRfa1TimerMacP__CompareB__fired(void ){
#line 48
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__fired();
#line 48
}
#line 48
# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 155 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 142 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RFA1RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 264 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * 62500UL / 1000000UL);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__metadataLength(message_t *msg){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RFA1RadioP__RFA1DriverConfig__metadataLength(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 844 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RFA1DriverLayerP__Config__metadataLength(msg) + sizeof(rfa1_metadata_t );
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RFA1DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

#line 73
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RFA1DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCounter.nc"
inline static /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get(void ){
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
# 115 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow(void )
{
  return /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get();
}

# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned long __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x409f1d50){
#line 60
  switch (arg_0x409f1d50) {
#line 60
    case 0U:
#line 60
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x409f1d50);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(0U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 72 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static void RFA1DriverLayerP__RadioState__done(void ){
#line 69
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 234 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static __inline void RFA1DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON || RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_PLL_ON) {
      * (volatile uint8_t *)0x148 = (RFA1_CCA_MODE_VALUE << 5) | RFA1DriverLayerP__channel;
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
    }
  else {
#line 243
    RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
}


static __inline void RFA1DriverLayerP__changeState(void )
{

  if ((
#line 250
  RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON)
   && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP) 
    {
      * (volatile uint8_t *)0x14E = ((((1 << 0) | (1 << 6)) | (1 << 2)) | (1 << 3)) | (1 << 7);
      * (volatile uint8_t *)0x139 &= ~(1 << 1);
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 257
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
      {
        for (; 0; ) ;


        * (volatile uint8_t *)0x148 = (RFA1_CCA_MODE_VALUE << 5) | RFA1DriverLayerP__channel;
        * (volatile uint8_t *)0x142 = 6;
        RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
      if ((
#line 266
      RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY)
       && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) 
        {
          * (volatile uint8_t *)0x142 = 8;
          RFA1DriverLayerP__radioIrq = 0;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 275
  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNOFF && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) 
    {

      * (volatile uint8_t *)0x14E = 0;

      * (volatile uint8_t *)0x139 |= 1 << 1;
      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 284
    if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_STANDBY && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_TRX_OFF) {
      RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 297 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 166 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RFA1RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rfa1packet_header_t );
}

# 41 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__headerLength(message_t *msg){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = RFA1RadioP__RFA1DriverConfig__headerLength(msg);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 819 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__headerLength(message_t *msg)
{
  return RFA1DriverLayerP__Config__headerLength(msg) + sizeof(rfa1_header_t );
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 77 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_header_t */*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

#line 163
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RFA1RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 151 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RFA1RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 151 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 161 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Counter.nc"
inline static /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__get(void ){
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
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/LocalTime.nc"
inline static uint32_t RFA1RadioP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 271 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint32_t time;


  time = RFA1RadioP__LocalTime__get();


  if (RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += 32 * (-5 + 16 + 11 + 5) * 62500UL / 1000000UL;
    }
  else {
#line 282
    time += 32 * (-5 + 5) * 62500UL / 1000000UL;
    }
  return time;
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 327 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RFA1DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 120 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 123
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 128 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RFA1RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RFA1RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 123 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(uint8_t bit, message_t *msg, bool value)
{
  if (value) {
    /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(bit, msg);
    }
  else {
#line 85
    /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(bit, msg);
    }
}

# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(message_t *msg, bool value){
#line 45
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__setValue(0U, msg, value);
#line 45
}
#line 45
# 69 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop(void )
{
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__stop();
#line 73
}
#line 73
# 108 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(1U);
#line 55
}
#line 55
# 75 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 108 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 142 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  bool ack = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg);

  for (; 0; ) ;

  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT) 
    {
      for (; 0; ) ;

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__setValue(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, ack);

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
    }

  if (ack) {
    return msg;
    }
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 170
        for (; 0; ) ;
        }
    }
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RFA1DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 944 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RFA1DriverLayerP__getMeta(msg)->lqi = value;
}

# 312 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 322 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 129 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_header_t *header = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 113 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RFA1RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RFA1RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 134 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg);
    }
  else {
#line 139
    return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
    }
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RFA1DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 90 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__headerPreloadLength(void )
{

  return 7;
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__headerPreloadLength(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RFA1RadioP__RFA1DriverConfig__headerPreloadLength();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 89 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline rfa1_header_t *RFA1DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__Config__headerLength(msg);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint8_t RFA1RadioP__RFA1DriverConfig__maxPayloadLength(void )
{
  return sizeof(rfa1packet_header_t ) + 28;
}

# 47 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static uint8_t RFA1DriverLayerP__Config__maxPayloadLength(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RFA1RadioP__RFA1DriverConfig__maxPayloadLength();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 837 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline uint8_t RFA1DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RFA1DriverLayerP__Config__maxPayloadLength() - sizeof(rfa1_header_t );
}

#line 469
static __inline void RFA1DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  bool signalReceive = TRUE;

  length = * (volatile uint8_t *)0x17B;

  if (length >= 3 && length <= RFA1DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;

      data = RFA1DriverLayerP__getPayload(RFA1DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(RFA1DriverLayerP__rxMsg)->length.nxdata, length);


      length -= 2;

      read = RFA1DriverLayerP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      memcpy(data, (void *)& * (volatile uint8_t *)0x180, read);
      data += read;

      if (RFA1DriverLayerP__RadioReceive__header(RFA1DriverLayerP__rxMsg)) 
        {
          memcpy(data, (void *)(& * (volatile uint8_t *)0x180 + read), length);

          RFA1DriverLayerP__PacketLinkQuality__set(RFA1DriverLayerP__rxMsg, (uint8_t )*(& * (volatile uint8_t *)0x180 + * (volatile uint8_t *)0x17B));
        }
      else {

        signalReceive = FALSE;
        }
    }
  else {
#line 507
    signalReceive = FALSE;
    }
  if (!(* (volatile uint8_t *)0x146 & (1 << 7))) {
    signalReceive = FALSE;
    }

  * (volatile uint8_t *)0x14C &= ~(1 << 7);

  * (volatile uint8_t *)0x14C |= 1 << 7;

  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
#line 535
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;


  if (signalReceive) {
    RFA1DriverLayerP__rxMsg = RFA1DriverLayerP__RadioReceive__receive(RFA1DriverLayerP__rxMsg);
    }
}

# 137 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(5000 * 62500UL / 1000000UL);
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RFA1RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 66 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 203 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 103 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RFA1RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RFA1DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketTimeStamp.nc"
inline static void RFA1DriverLayerP__PacketTimeStamp__set(message_t * msg, RFA1DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 392 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline uint32_t HplAtmRfa1TimerMacP__SfdCapture__get(void )
{
  HplAtmRfa1TimerMacP__reg32_t time;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time.ll = * (volatile uint8_t *)0xE9;
      time.lh = * (volatile uint8_t *)0xEA;
      time.hl = * (volatile uint8_t *)0xEB;
      time.hh = * (volatile uint8_t *)0xEC;
    }
#line 402
    __nesc_atomic_end(__nesc_atomic); }

  return time.full;
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCapture.nc"
inline static RFA1DriverLayerP__SfdCapture__size_type RFA1DriverLayerP__SfdCapture__get(void ){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtmRfa1TimerMacP__SfdCapture__get();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 889 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RFA1DriverLayerP__RSSIFlag__clear(msg);
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RFA1DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RFA1DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 894 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RFA1DriverLayerP__TransmitPowerFlag__clear(msg);

  RFA1DriverLayerP__RSSIFlag__set(msg);
  RFA1DriverLayerP__getMeta(msg)->rssi = value;
}

#line 466
static inline void RFA1DriverLayerP__RadioCCA__default__done(error_t error)
#line 466
{
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RFA1DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RFA1DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 544 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline void RFA1DriverLayerP__serviceRadio(void )
{

  uint8_t irq = RFA1DriverLayerP__radioIrq;

#line 548
  RFA1DriverLayerP__radioIrq = 0;

  if (irq & RFA1DriverLayerP__IRQ_AWAKE) {
      if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_SLEEP_2_TRX_OFF) {
          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_TRX_OFF;
        }
    }
#line 568
  if (irq & RFA1DriverLayerP__IRQ_PLL_LOCK) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TURNON || RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;

          * (volatile uint8_t *)0x14C |= 1 << 7;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 579
        if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT) 
          {
            for (; 0; ) ;
          }
        else {
          for (; 0; ) ;
          }
        }
    }
#line 587
  if (irq & RFA1DriverLayerP__IRQ_CCA_ED_DONE) {


      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA && * (volatile uint8_t *)0x141 & RFA1_CCA_DONE) 
        {
          for (; 0; ) ;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
          RFA1DriverLayerP__RadioCCA__done(* (volatile uint8_t *)0x141 & RFA1_CCA_STATUS ? SUCCESS : EBUSY);
        }
    }




  if (irq & RFA1DriverLayerP__IRQ_RX_START) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CCA) 
        {
          RFA1DriverLayerP__RadioCCA__done(FAIL);
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
        }

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE) 
        {
          for (; 0; ) ;


          if (irq == RFA1DriverLayerP__IRQ_RX_START) 
            {
              uint8_t temp = * (volatile uint8_t *)0x146 & RFA1_RSSI_MASK;

#line 617
              RFA1DriverLayerP__rssiBusy += temp - (RFA1DriverLayerP__rssiBusy >> 2);

              RFA1DriverLayerP__PacketRSSI__set(RFA1DriverLayerP__rxMsg, temp);
            }
          else 
            {
              RFA1DriverLayerP__PacketRSSI__clear(RFA1DriverLayerP__rxMsg);
            }










          if (irq == RFA1DriverLayerP__IRQ_RX_START) 
            {

              uint32_t time = RFA1DriverLayerP__SfdCapture__get();

#line 639
              RFA1DriverLayerP__PacketTimeStamp__set(RFA1DriverLayerP__rxMsg, time - RFA1DriverLayerP__RX_SFD_DELAY);
            }
          else {
              RFA1DriverLayerP__PacketTimeStamp__clear(RFA1DriverLayerP__rxMsg);
            }

          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_RECEIVE;
        }
      else {
        for (; 0; ) ;
        }
    }
  if (irq & RFA1DriverLayerP__IRQ_TX_END) 
    {

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_TRANSMIT) 
        {
          for (; 0; ) ;

          RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;

          RFA1DriverLayerP__RadioSend__sendDone(SUCCESS);


          for (; 0; ) ;
        }
    }

  if (irq & RFA1DriverLayerP__IRQ_RX_END) 
    {

      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_RECEIVE) 
        {
          for (; 0; ) ;

          if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_PLL_ON_2_RX_ON) 
            {
              for (; 0; ) ;

              * (volatile uint8_t *)0x142 = 6;
              RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_RX_ON;
            }
          else 
            {

              RFA1DriverLayerP__rssiClear += (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) - (RFA1DriverLayerP__rssiClear >> 2);
            }

          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_DOWNLOAD;
        }
      else {
        for (; 0; ) ;
        }
    }
}



static inline void RFA1DriverLayerP__Tasklet__run(void )
{
  if (RFA1DriverLayerP__radioIrq) {
    RFA1DriverLayerP__serviceRadio();
    }
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) 
    {
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_DOWNLOAD) {
        RFA1DriverLayerP__downloadMessage();
        }
      else {
#line 707
        if (RFA1DriverLayerP__CMD_TURNOFF <= RFA1DriverLayerP__cmd && RFA1DriverLayerP__cmd <= RFA1DriverLayerP__CMD_TURNON) {
          RFA1DriverLayerP__changeState();
          }
        else {
#line 709
          if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_CHANNEL) {
            RFA1DriverLayerP__changeChannel();
            }
          }
        }
#line 712
      if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_NONE;
          RFA1DriverLayerP__RadioState__done();
        }
    }

  if (RFA1DriverLayerP__cmd == RFA1DriverLayerP__CMD_NONE && RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON && !RFA1DriverLayerP__radioIrq) {
    RFA1DriverLayerP__RadioSend__ready();
    }
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RFA1DriverLayerP__Tasklet__run();
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 274 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__start(void )
{
  * (volatile uint8_t *)0xDF |= 1 << 1;

  HplAtmRfa1TimerMacP__McuPowerState__update();
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start(void ){
#line 59
  HplAtmRfa1TimerMacP__CompareB__start();
#line 59
}
#line 59
# 270 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__reset(void )
#line 270
{
#line 270
  * (volatile uint8_t *)0xE0 = 1 << 1;
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset(void ){
#line 54
  HplAtmRfa1TimerMacP__CompareB__reset();
#line 54
}
#line 54
# 247 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__set(uint32_t value)
{
  HplAtmRfa1TimerMacP__reg32_t time;

  time.full = value;
  /* atomic removed: atomic calls only */

  {
    * (volatile uint8_t *)0xF4 = time.hh;
    * (volatile uint8_t *)0xF3 = time.hl;
    * (volatile uint8_t *)0xF2 = time.lh;
    * (volatile uint8_t *)0xF1 = time.ll;
  }
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__size_type value){
#line 43
  HplAtmRfa1TimerMacP__CompareB__set(value);
#line 43
}
#line 43
# 80 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type time)
{
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__set(time);
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__reset();
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__start();
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 856 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RFA1DriverLayerP__getMeta(msg)->power;
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RFA1RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 96 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline bool RFA1RadioP__RFA1DriverConfig__requiresRssiCca(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 66 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverConfig.nc"
inline static bool RFA1DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = RFA1RadioP__RFA1DriverConfig__requiresRssiCca(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RFA1DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 905 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline bool RFA1DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RFA1DriverLayerP__TimeSyncFlag__get(msg);
}

static inline uint8_t RFA1DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RFA1DriverLayerP__RadioPacket__headerLength(msg) + RFA1DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/LocalTime.nc"
inline static uint32_t RFA1DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTime62khzC.LocalTime62khzC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 347 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 246 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * 62500UL / 1000000UL);
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
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
# 69 "/opt/tinyos-main/src/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

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

# 292 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
static inline void HplAtmRfa1TimerMacP__CompareB__setMode(uint8_t mode)
{
  /* atomic removed: atomic calls only */
  {
    * (volatile uint8_t *)0xDC = (* (volatile uint8_t *)0xDC & ~(1 << 1))
     | ((mode & 0x1) << 1);
  }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompare.nc"
inline static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(uint8_t mode){
#line 70
  HplAtmRfa1TimerMacP__CompareB__setMode(mode);
#line 70
}
#line 70
# 52 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static inline error_t /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Init__init(void )
{
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__stop();
  /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCompare__setMode(0);

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t McuInitP__TimerInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*TimerMilliP.AlarmMilli32C.Alarm62khz32C.AtmegaCompareP*/AtmegaCompareP__0__Init__init());
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

# 170 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__PlatformInit__init(void )
{

  for (; 0; ) ;
  RFA1DriverLayerP__rxMsg = &RFA1DriverLayerP__rxMsgBuffer;


  RFA1DriverLayerP__rssiClear = 0;
  RFA1DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RFA1DriverLayerP__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
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
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__3__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__CommandQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__4__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__StatusQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__2__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SerialPacketForwarderP__DataQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.CommandQueue*/QueueC__3__printQueue(void )
#line 69
{
}

#line 65
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue[/*SerialPacketForwarderC.CommandQueue*/QueueC__3__head];
}

#line 85
static inline /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t t = /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__empty()) {
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__head++;
      if (/*SerialPacketForwarderC.CommandQueue*/QueueC__3__head == 32) {
#line 90
        /*SerialPacketForwarderC.CommandQueue*/QueueC__3__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__size--;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__CommandQueue__t  SerialPacketForwarderP__CommandQueue__dequeue(void ){
#line 81
  struct command_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__dequeue();
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
# 51 "/home/alpsayin/tinyos_workspace/SensorAppC/src/packet_types.h"
static __inline uint8_t hex2ascii(uint8_t n)
{
  if (n < 10) {
    return 0x30 | (n & 0x0f);
    }
  else {
#line 55
    if (n < 16) {
      return n - 10 + 'a';
      }
    else {
#line 58
      return 'N';
      }
    }
}

# 180 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(command_packet_t *cp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = hex2ascii(PACKET_COMMAND);
  buf[i++] = ':';

  buf[i++] = hex2ascii(cp->WE);
  buf[i++] = hex2ascii(cp->HE);
  buf[i++] = hex2ascii(cp->BE);
  buf[i++] = hex2ascii((cp->opcode >> 4) & 0x0F);
  buf[i++] = hex2ascii(cp->opcode & 0x0F);
  buf[i++] = hex2ascii((cp->value >> 4) & 0x0F);
  buf[i++] = hex2ascii(cp->value & 0x0F);
  buf[i++] = hex2ascii(((cp->address >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((cp->address >> 8) & 0x0F);
  buf[i++] = hex2ascii((cp->address >> 4) & 0x0F);
  buf[i++] = hex2ascii(cp->address & 0x0F);

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 10 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__commandPacketToStr(command_packet_t *dp, uint8_t *buf){
#line 10
  unsigned char __nesc_result;
#line 10

#line 10
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__commandPacketToStr(dp, buf);
#line 10

#line 10
  return __nesc_result;
#line 10
}
#line 10
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__CommandQueue__t  SerialPacketForwarderP__CommandQueue__head(void ){
#line 73
  struct command_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.StatusQueue*/QueueC__4__printQueue(void )
#line 69
{
}

#line 65
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue[/*SerialPacketForwarderC.StatusQueue*/QueueC__4__head];
}

#line 85
static inline /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t t = /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__empty()) {
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__head++;
      if (/*SerialPacketForwarderC.StatusQueue*/QueueC__4__head == 32) {
#line 90
        /*SerialPacketForwarderC.StatusQueue*/QueueC__4__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__size--;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__StatusQueue__t  SerialPacketForwarderP__StatusQueue__dequeue(void ){
#line 81
  struct status_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 204 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(status_packet_t *sp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = hex2ascii(PACKET_STATUS);
  buf[i++] = ':';

  buf[i++] = hex2ascii(((sp->node_id >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((sp->node_id >> 8) & 0x0F);
  buf[i++] = hex2ascii((sp->node_id >> 4) & 0x0F);
  buf[i++] = hex2ascii(sp->node_id & 0x0F);
  buf[i++] = hex2ascii((sp->burstInterval >> 4) & 0x0F);
  buf[i++] = hex2ascii(sp->burstInterval & 0x0F);
  buf[i++] = hex2ascii(sp->intervalType);
  buf[i++] = hex2ascii(sp->historyEnable);
  buf[i++] = hex2ascii(sp->burstEnable);

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 12 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__statusPacketToStr(status_packet_t *dp, uint8_t *buf){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__statusPacketToStr(dp, buf);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__StatusQueue__t  SerialPacketForwarderP__StatusQueue__head(void ){
#line 73
  struct status_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SerialPacketForwarderC.DataQueue*/QueueC__2__printQueue(void )
#line 69
{
}

#line 65
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__head(void )
#line 65
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue[/*SerialPacketForwarderC.DataQueue*/QueueC__2__head];
}

#line 85
static inline /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__dequeue(void )
#line 85
{
  /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t t = /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__head();

#line 87
  ;
  if (!/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__empty()) {
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__head++;
      if (/*SerialPacketForwarderC.DataQueue*/QueueC__2__head == 255) {
#line 90
        /*SerialPacketForwarderC.DataQueue*/QueueC__2__head = 0;
        }
#line 91
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__size--;
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__printQueue();
    }
  return t;
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__DataQueue__t  SerialPacketForwarderP__DataQueue__dequeue(void ){
#line 81
  struct data_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 139 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf)
{
  uint8_t i = 0;

  buf[i++] = '[';
  buf[i++] = hex2ascii(PACKET_DATA);
  buf[i++] = ':';

  buf[i++] = hex2ascii(((dp->data1 >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->data1 >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->data1 >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->data1 & 0x0F);
  buf[i++] = hex2ascii(((dp->data2 >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->data2 >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->data2 >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->data2 & 0x0F);
  buf[i++] = hex2ascii(((dp->data3 >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->data3 >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->data3 >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->data3 & 0x0F);
  buf[i++] = hex2ascii(((dp->data4 >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->data4 >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->data4 >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->data4 & 0x0F);
  buf[i++] = hex2ascii(((dp->data5 >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->data5 >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->data5 >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->data5 & 0x0F);
  buf[i++] = hex2ascii(((dp->source >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->source >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->source >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->source & 0x0F);
  buf[i++] = hex2ascii(((dp->seqNo >> 8) >> 4) & 0x0F);
  buf[i++] = hex2ascii((dp->seqNo >> 8) & 0x0F);
  buf[i++] = hex2ascii((dp->seqNo >> 4) & 0x0F);
  buf[i++] = hex2ascii(dp->seqNo & 0x0F);

  buf[i++] = ']';
  buf[i] = 0;
  return i;
}

# 11 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__dataPacketToStr(data_packet_t *dp, uint8_t *buf){
#line 11
  unsigned char __nesc_result;
#line 11

#line 11
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__dataPacketToStr(dp, buf);
#line 11

#line 11
  return __nesc_result;
#line 11
}
#line 11
# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SerialPacketForwarderP__DataQueue__t  SerialPacketForwarderP__DataQueue__head(void ){
#line 73
  struct data_packet __nesc_result;
#line 73

#line 73
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 223 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__forwardNextPacketTask__runTask(void )
{
  uint8_t localBuf[64];
  uint8_t len;
  status_packet_t localStatusPacket;
  data_packet_t localDataPacket;
  command_packet_t localCommandPacket;


  if (!SerialPacketForwarderP__enabled) {
    return;
    }
#line 234
  if (!SerialPacketForwarderP__commandReceptionEnabled) {
    return;
    }
  if (!SerialPacketForwarderP__DataQueue__empty()) 
    {
      localDataPacket = SerialPacketForwarderP__DataQueue__head();
      len = SerialPacketForwarderP__PacketTypes__dataPacketToStr(&localDataPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__DataQueue__dequeue();
        }
      else {
#line 244
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 246
  if (!SerialPacketForwarderP__StatusQueue__empty()) 
    {
      localStatusPacket = SerialPacketForwarderP__StatusQueue__head();
      len = SerialPacketForwarderP__PacketTypes__statusPacketToStr(&localStatusPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__StatusQueue__dequeue();
        }
      else {
#line 253
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 255
  if (!SerialPacketForwarderP__CommandQueue__empty()) 
    {
      localCommandPacket = SerialPacketForwarderP__CommandQueue__head();
      len = SerialPacketForwarderP__PacketTypes__commandPacketToStr(&localCommandPacket, localBuf);
      if (SerialPacketForwarderP__UartStream__send(localBuf, len) == SUCCESS) {
        SerialPacketForwarderP__CommandQueue__dequeue();
        }
      else {
#line 262
        SerialPacketForwarderP__forwardNextPacketTask__postTask();
        }
    }
#line 264
  if ((!SerialPacketForwarderP__DataQueue__empty() || !SerialPacketForwarderP__StatusQueue__empty()) || !SerialPacketForwarderP__CommandQueue__empty()) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 258 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key)
#line 258
{
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__reset(uint16_t arg_0x40d8d200){
#line 80
  switch (arg_0x40d8d200) {
#line 80
    case 170U:
#line 80
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(/*RadioSubsystemC.DissCommand*/DisseminatorC__0__TIMER_ID);
#line 80
      break;
#line 80
    default:
#line 80
      DisseminationEngineImplP__TrickleTimer__default__reset(arg_0x40d8d200);
#line 80
      break;
#line 80
    }
#line 80
}
#line 80
# 102 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__DisseminationCache__newData(uint16_t key)
#line 102
{
  DisseminationEngineImplP__sendObject(key);






  DisseminationEngineImplP__TrickleTimer__reset(key);
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
inline static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData(void ){
#line 50
  DisseminationEngineImplP__DisseminationCache__newData(170U);
#line 50
}
#line 50
# 88 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t *newVal)
#line 88
{
  if (!/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__m_running) {
#line 89
      return;
    }
#line 90
  memcpy(&/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__valueCache, newVal, sizeof(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t ));

  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno >> 16;
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno++;
  if (/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno == DISSEMINATION_SEQNO_UNKNOWN) {
#line 94
      /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno++;
    }
#line 95
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno << 16;
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno += 2;
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__newData();
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__postTask();
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationUpdate.nc"
inline static void RadioSubsystemP__CommandUpdate__change(RadioSubsystemP__CommandUpdate__t * newVal){
#line 60
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__change(newVal);
#line 60
}
#line 60
# 89 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline void RadioSubsystemP__NotifySerialCommand__notify(command_packet_t val)
{
  if (RadioSubsystemP__commandDisseminationEnabled) {
    RadioSubsystemP__CommandUpdate__change(&val);
    }
}

# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static void SerialPacketForwarderP__CommandNotification__notify(SerialPacketForwarderP__CommandNotification__val_t val){
#line 74
  RadioSubsystemP__NotifySerialCommand__notify(val);
#line 74
}
#line 74
# 40 "/home/alpsayin/tinyos_workspace/SensorAppC/src/packet_types.h"
static __inline uint8_t ascii2hex(uint8_t c)
{
  if (c >= '0' && c <= '9') {
    return c - '0';
    }
#line 44
  if (c >= 'a' && c <= 'f') {
    return c - 'a' + 10;
    }
#line 46
  if (c >= 'A' && c <= 'F') {
    return c - 'A' + 10;
    }
#line 48
  return 0;
}

# 17 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf)
{
  uint8_t i = 0;
  uint8_t len = 3 + 3 + 2 + 2 + 4 + 1;

#line 21
  if (buf[i++] != '[') {
    return PACKET_ERROR;
    }
#line 23
  if (ascii2hex(buf[i++]) != PACKET_COMMAND) {
    return PACKET_ERROR;
    }
#line 25
  if (buf[i++] != ':') {
    return PACKET_ERROR;
    }
#line 27
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
  cp->WE = buf[i++] != '0';
  cp->HE = buf[i++] != '0';
  cp->BE = buf[i++] != '0';
  cp->opcode = ascii2hex(buf[i++]) << 4;
  cp->opcode |= ascii2hex(buf[i++]);
  cp->value = ascii2hex(buf[i++]) << 4;
  cp->value |= ascii2hex(buf[i++]);
  cp->address = ascii2hex(buf[i++]) << 12;
  cp->address |= ascii2hex(buf[i++]) << 8;
  cp->address |= ascii2hex(buf[i++]) << 4;
  cp->address |= ascii2hex(buf[i++]);

  if (buf[i] != ']') {
    return PACKET_ERROR;
    }
#line 44
  return PACKET_COMMAND;
}

# 6 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__strToCommandPacket(command_packet_t *cp, uint8_t *buf){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__strToCommandPacket(cp, buf);
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 121 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypesP.nc"
static inline uint8_t /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(uint8_t *buf)
{
  int len;
#line 123
  int type;

#line 124
  if (buf[0] != '[') {
    return PACKET_ERROR;
    }
#line 126
  if (buf[2] != ':') {
    return PACKET_ERROR;
    }
#line 128
  switch ((type = ascii2hex(buf[1]))) 
    {
      case PACKET_COMMAND: len = 3 + 3 + 2 + 2 + 4 + 1;
#line 130
      break;
      case PACKET_DATA: len = 3 + 7 * 4 + 1;
#line 131
      break;
      case PACKET_STATUS: len = 3 + 4 + 2 + 3 + 1;
#line 132
      break;
      default: return PACKET_ERROR;
    }
  if (buf[len - 1] != ']') {
    return PACKET_ERROR;
    }
#line 137
  return type;
}

# 14 "/home/alpsayin/tinyos_workspace/SensorAppC/src/PacketTypes.nc"
inline static uint8_t SerialPacketForwarderP__PacketTypes__getTypeOfPacket(uint8_t *buf){
#line 14
  unsigned char __nesc_result;
#line 14

#line 14
  __nesc_result = /*SerialPacketForwarderC.PacketTypesImpl*/PacketTypesP__0__PacketTypes__getTypeOfPacket(buf);
#line 14

#line 14
  return __nesc_result;
#line 14
}
#line 14
# 270 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline void SerialPacketForwarderP__processReceiveBufferTask__runTask(void )
{
  uint8_t localBuf[64];
  uint8_t localPos;
  uint8_t type;


  command_packet_t localCommandPacket;

  if (!SerialPacketForwarderP__enabled) {
    return;
    }
#line 281
  if (!SerialPacketForwarderP__commandReceptionEnabled) {
    return;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 285
    {
      memcpy((char *)localBuf, (char *)SerialPacketForwarderP__temporaryBuffer, SerialPacketForwarderP__temporaryPos <= 64 ? SerialPacketForwarderP__temporaryPos : 64);
      localBuf[SerialPacketForwarderP__temporaryPos] = 0;
      localPos = SerialPacketForwarderP__temporaryPos;
    }
#line 289
    __nesc_atomic_end(__nesc_atomic); }

  type = SerialPacketForwarderP__PacketTypes__getTypeOfPacket(localBuf);
  if (type != PACKET_ERROR) 
    {
    }


  if (type == PACKET_COMMAND) 
    {

      type = SerialPacketForwarderP__PacketTypes__strToCommandPacket(&localCommandPacket, localBuf);
      if (type != PACKET_COMMAND) {
        return;
        }
#line 303
      SerialPacketForwarderP__CommandNotification__notify(localCommandPacket);
    }
}

# 117 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
}

# 135 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x40dd5490, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(arg_0x40dd5490, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 125 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static void * /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void * DisseminationEngineImplP__AMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 105 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 301 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_header_t );
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 240 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

# 101 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static inline void */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size)
#line 101
{
  *size = sizeof(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t );
  return &/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__valueCache;
}

# 243 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size)
#line 244
{
#line 244
  return (void *)0;
}

# 47 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
inline static void *DisseminationEngineImplP__DisseminationCache__requestData(uint16_t arg_0x40d8e6f8, uint8_t *size){
#line 47
  void *__nesc_result;
#line 47

#line 47
  switch (arg_0x40d8e6f8) {
#line 47
    case 170U:
#line 47
      __nesc_result = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(size);
#line 47
      break;
#line 47
    default:
#line 47
      __nesc_result = DisseminationEngineImplP__DisseminationCache__default__requestData(arg_0x40d8e6f8, size);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 112 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
}

# 123 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(am_id_t arg_0x40dd5490){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(arg_0x40dd5490);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 207 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id)
#line 207
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(0);
}

# 112 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(0U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength(void )
#line 69
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__maxPayloadLength();
}

# 123 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 286 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 204 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 162 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 188 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 180 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RFA1RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 184 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 103 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 96);
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 235 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 267
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 199 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 147 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 141 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RFA1RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 175 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x40dd5490, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0x40dd5490, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 102 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 205 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline error_t RFA1RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RFA1RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RFA1RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RFA1RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 198 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 190 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RFA1RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RFA1RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 194 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 178 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 200 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RFA1RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RFA1RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 214 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

# 93 "/opt/tinyos-main/src/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 93
{
  am_group_t myGroup;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    myGroup = ActiveMessageAddressC__group;
#line 95
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 168 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

#line 122
static inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SendNotifier.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x40a25688, am_addr_t dest, message_t * msg){
#line 59
    /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x40a25688, dest, msg);
#line 59
}
#line 59
# 64 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
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
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 167 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40aa7e18){
#line 53
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x40aa7e18);
#line 53
}
#line 53
# 71 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
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
        /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

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

# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 120
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 171 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40aa6a58){
#line 59
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x40aa6a58);
#line 59
}
#line 59
# 169 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x40aa7e18){
#line 61
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x40aa7e18);
#line 61
}
#line 61
# 84 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 86
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 91
            SUCCESS;

            {
#line 91
              __nesc_atomic_end(__nesc_atomic); 
#line 91
              return __nesc_temp;
            }
          }
        }
#line 93
      {
        unsigned char __nesc_temp = 
#line 93
        FAIL;

        {
#line 93
          __nesc_atomic_end(__nesc_atomic); 
#line 93
          return __nesc_temp;
        }
      }
    }
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    ++TaskletC__state;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 230 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 168 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 156 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RFA1RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RFA1RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 60 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 173 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40aa6a58){
#line 65
    /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40aa6a58);
#line 65
}
#line 65
# 89 "/opt/tinyos-main/src/tinyos-main/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
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
# 189 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(1U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 194 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].t0;
}

# 144 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(1U);
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 66 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 61
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 87
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 89
  {
#line 89
    {
      unsigned char __nesc_temp = 
#line 89
      /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum) ? TRUE : FALSE;

#line 89
      return __nesc_temp;
    }
  }
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(bitnum);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 97 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 99
  {
#line 99
    /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
  }
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum){
#line 69
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(bitnum);
#line 69
}
#line 69
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
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
# 164 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 262 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound(void )
#line 262
{
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound(void ){
#line 51
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__routeFound();
#line 51
}
#line 51
# 267 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute(void )
#line 267
{
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute(void ){
#line 52
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__noRoute();
#line 52
}
#line 52
# 193 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval(void )
#line 193
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 128;
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

#line 563
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate(void )
#line 563
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 585 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__clearDLQ(am_addr_t neighbor)
#line 585
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 588
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total = 0;
  ne->data_success = 0;
  return SUCCESS;
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(am_addr_t neighbor){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = LinkEstimatorP__LinkEstimator__clearDLQ(neighbor);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
#line 61
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(am_addr_t neighbor){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = LinkEstimatorP__LinkEstimator__pinNeighbor(neighbor);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 540 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__unpinNeighbor(am_addr_t neighbor)
#line 540
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 542
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags &= ~PINNED_ENTRY;
  return SUCCESS;
}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(am_addr_t neighbor){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = LinkEstimatorP__LinkEstimator__unpinNeighbor(neighbor);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 774 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
#line 774
{
  return SUCCESS;
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventDbg(type, arg1, arg2, arg3);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 263 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(uint16_t etx)
#line 263
{
  return etx < ETX_THRESHOLD;
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(uint16_t neighbor){
#line 49
  unsigned short __nesc_result;
#line 49

#line 49
  __nesc_result = LinkEstimatorP__LinkEstimator__getLinkQuality(neighbor);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 271 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask(void )
#line 271
{
  uint8_t i;
  routing_table_entry *entry;
  routing_table_entry *best;
  uint16_t minEtx;
  uint16_t currentEtx;
  uint16_t linkEtx;
#line 277
  uint16_t pathEtx;

  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
    return;
    }
  best = (void *)0;

  minEtx = MAX_METRIC;

  currentEtx = MAX_METRIC;

  ;


  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      entry = &/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i];


      if (entry->info.parent == INVALID_ADDR || entry->info.parent == /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr) {
          ;


          continue;
        }

      linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(entry->neighbor);
      ;


      pathEtx = linkEtx + entry->info.etx;

      if (entry->neighbor == /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent) {
          ;
          currentEtx = pathEtx;

          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = entry->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = entry->info.congested;
          continue;
        }

      if (entry->info.congested) {
        continue;
        }
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
          ;
          continue;
        }

      if (pathEtx < minEtx) {
          ;
          minEtx = pathEtx;
          best = entry;
        }
    }
#line 345
  if (minEtx != MAX_METRIC) {

      if ((
#line 346
      currentEtx == MAX_METRIC || (
      /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && minEtx < /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + 10)) || 
      minEtx + PARENT_SWITCH_THRESHOLD < currentEtx) {




          /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges++;

          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventDbg(NET_C_TREE_NEW_PARENT, best->neighbor, best->info.etx, minEtx);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__unpinNeighbor(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(best->neighbor);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__clearDLQ(best->neighbor);

          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = best->neighbor;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = best->info.etx;
          /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested = best->info.congested;
          if (currentEtx - minEtx > 20) {
              /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
            }
        }
    }




  if (/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__noRoute();
    }
  else {



    if (
#line 379
    !/*CtpP.Router*/CtpRoutingEngineP__0__justEvicted && 
    currentEtx == MAX_METRIC && 
    minEtx != MAX_METRIC) {
      /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
      }
    }
#line 383
  /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = FALSE;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
inline static uint32_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(3U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(msg, dest);
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(msg, 112);
  return /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t LinkEstimatorP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 106 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t LinkEstimatorP__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 111 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline linkest_footer_t *LinkEstimatorP__getFooter(message_t * m, uint8_t len)
#line 111
{

  return (linkest_footer_t * )(len + (uint8_t *)LinkEstimatorP__Packet__getPayload(m, len + sizeof(linkest_footer_t )));
}

# 126 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static void * LinkEstimatorP__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 106 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline linkest_header_t *LinkEstimatorP__getHeader(message_t *m)
#line 106
{
  return (linkest_header_t *)LinkEstimatorP__SubPacket__getPayload(m, sizeof(linkest_header_t ));
}










static inline uint8_t LinkEstimatorP__addLinkEstHeaderAndFooter(message_t * msg, uint8_t len)
#line 119
{
  unsigned char *__nesc_temp48;
#line 120
  uint8_t newlen;
  linkest_header_t *hdr;
  linkest_footer_t *footer;
  uint8_t i;
#line 123
  uint8_t j;
#line 123
  uint8_t k;
  uint8_t maxEntries;
#line 124
  uint8_t newPrevSentIdx;

#line 125
  ;
  hdr = LinkEstimatorP__getHeader(msg);
  footer = LinkEstimatorP__getFooter(msg, len);

  maxEntries = (LinkEstimatorP__SubPacket__maxPayloadLength() - len - sizeof(linkest_header_t ))
   / sizeof(linkest_footer_t );



  if (maxEntries > NUM_ENTRIES_FLAG) {
      maxEntries = NUM_ENTRIES_FLAG;
    }
  ;

  j = 0;
  newPrevSentIdx = 0;
  for (i = 0; i < 10 && j < maxEntries; i++) {
      uint8_t neighborCount;
      neighbor_stat_entry_t * neighborLists;

#line 144
      if (maxEntries <= 10) {
        neighborCount = maxEntries;
        }
      else {
#line 147
        neighborCount = 10;
        }
      neighborLists = (neighbor_stat_entry_t * )footer->neighborList;

      k = (LinkEstimatorP__prevSentIdx + i + 1) % 10;
      if (LinkEstimatorP__NeighborTable[k].flags & VALID_ENTRY && 
      LinkEstimatorP__NeighborTable[k].flags & MATURE_ENTRY) {
          __nesc_hton_uint16(neighborLists[j].ll_addr.nxdata, LinkEstimatorP__NeighborTable[k].ll_addr);
          __nesc_hton_uint8(neighborLists[j].inquality.nxdata, LinkEstimatorP__NeighborTable[k].inquality);
          newPrevSentIdx = k;
          ;

          j++;
        }
    }
  LinkEstimatorP__prevSentIdx = newPrevSentIdx;

  __nesc_hton_uint8(hdr->seq.nxdata, LinkEstimatorP__linkEstSeq++);
  __nesc_hton_uint8(hdr->flags.nxdata, 0);
  (__nesc_temp48 = hdr->flags.nxdata, __nesc_hton_uint8(__nesc_temp48, __nesc_ntoh_uint8(__nesc_temp48) | (NUM_ENTRIES_FLAG & j)));
  newlen = sizeof(linkest_header_t ) + len + j * sizeof(linkest_footer_t );
  ;
  return newlen;
}

#line 600
static inline error_t LinkEstimatorP__Send__send(am_addr_t addr, message_t *msg, uint8_t len)
#line 600
{
  uint8_t newlen;

#line 602
  newlen = LinkEstimatorP__addLinkEstHeaderAndFooter(msg, len);
  ;
  ;
  LinkEstimatorP__print_packet(msg, newlen);
  return LinkEstimatorP__AMSend__send(addr, msg, newlen);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = LinkEstimatorP__Send__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 780 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t etx)
#line 780
{
  return SUCCESS;
}

# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(uint8_t type, am_addr_t parent, uint8_t hopcount, uint16_t metric){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__default__logEventRoute(type, parent, hopcount, metric);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 750 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested(void )
#line 750
{
  return FALSE;
}

# 7 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpCongestion.nc"
inline static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested(void ){
#line 7
  unsigned char __nesc_result;
#line 7

#line 7
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpCongestion__isCongested();
#line 7

#line 7
  return __nesc_result;
#line 7
}
#line 7
# 390 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask(void )
#line 390
{
  unsigned char *__nesc_temp50;
  unsigned char *__nesc_temp49;
#line 391
  error_t eval;

#line 392
  if (/*CtpP.Router*/CtpRoutingEngineP__0__sending) {
      return;
    }

  __nesc_hton_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, 0);


  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpCongestion__isCongested()) {
      (__nesc_temp49 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, __nesc_hton_uint8(__nesc_temp49, __nesc_ntoh_uint8(__nesc_temp49) | CTP_OPT_ECN));
    }

  __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root) {
      __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
    }
  else {
#line 407
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
        (__nesc_temp50 = /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->options.nxdata, __nesc_hton_uint8(__nesc_temp50, __nesc_ntoh_uint8(__nesc_temp50) | CTP_OPT_PULL));
      }
    else 
#line 410
      {
        __nesc_hton_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent));
      }
    }
  ;



  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_SENT_BEACON, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->parent.nxdata), 0, __nesc_ntoh_uint16(/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg->etx.nxdata));

  eval = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__send(AM_BROADCAST_ADDR, 
  &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, 
  sizeof(ctp_routing_header_t ));
  if (eval == SUCCESS) {
      /*CtpP.Router*/CtpRoutingEngineP__0__sending = TRUE;
    }
  else {
#line 425
    if (eval == EOFF) {
        /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
        ;
      }
    }
}

# 875 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(uint8_t type)
#line 875
{
  return SUCCESS;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(uint8_t type){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEvent(type);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 106 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 775 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength(void )
#line 775
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__maxPayloadLength() - sizeof(ctp_data_header_t );
}

#line 771
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 771
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(msg, len + sizeof(ctp_data_header_t ));
}

#line 839
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(uint8_t state)
#line 839
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState | state;
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(2U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline error_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(msg, dest);
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(msg, 113);
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(msg, len);
}

# 80 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 833 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(uint8_t state)
#line 833
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState = /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & ~state;
}

# 126 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static void * /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 279 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline ctp_data_header_t */*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(message_t *m)
#line 279
{
  return (ctp_data_header_t *)/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(m, sizeof(ctp_data_header_t ));
}

#line 809
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(message_t *msg, ctp_options_t opt)
#line 809
{
  unsigned char *__nesc_temp46;

#line 810
  (__nesc_temp46 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp46, __nesc_ntoh_uint8(__nesc_temp46) | opt));
}

#line 836
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(uint8_t state)
#line 836
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forwardingState & state;
}

# 142 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack)
{
  unsigned char *__nesc_temp43;
  unsigned char *__nesc_temp42;

#line 144
  if (ack) {
    (__nesc_temp42 = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp42, __nesc_ntoh_leuint16(__nesc_temp42) | (1 << IEEE154_FCF_ACK_REQ)));
    }
  else {
#line 147
    (__nesc_temp43 = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, __nesc_hton_leuint16(__nesc_temp43, __nesc_ntoh_leuint16(__nesc_temp43) & ~ (uint16_t )(1 << IEEE154_FCF_ACK_REQ)));
    }
}

# 105 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RFA1RadioP__Ieee154PacketLayer__setAckRequired(message_t *msg, bool ack){
#line 105
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setAckRequired(msg, ack);
#line 105
}
#line 105
# 118 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline void RFA1RadioP__SoftwareAckConfig__setAckRequired(message_t *msg, bool ack)
{
  RFA1RadioP__Ieee154PacketLayer__setAckRequired(msg, ack);
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(message_t *msg, bool ack){
#line 49
  RFA1RadioP__SoftwareAckConfig__setAckRequired(msg, ack);
#line 49
}
#line 49
# 178 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(message_t *msg)
{
  /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__setAckRequired(msg, TRUE);

  return SUCCESS;
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 812 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(message_t *msg, ctp_options_t opt)
#line 812
{
  unsigned char *__nesc_temp47;

#line 813
  (__nesc_temp47 = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata, __nesc_hton_uint8(__nesc_temp47, __nesc_ntoh_uint8(__nesc_temp47) & ~opt));
}

#line 804
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(message_t *msg, uint16_t e)
#line 804
{
#line 804
  __nesc_hton_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.nxdata, e);
}

# 624 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot(void )
#line 624
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root;
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__isRoot();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 89 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue(void ){
#line 81
  struct __nesc_unnamed4298 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 135 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline bool /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(message_t *m)
#line 135
{
  return /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m) < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count;
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Cache.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__lookup(item);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 529 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop(void )
#line 529
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent;
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop(void ){
#line 48
  unsigned short __nesc_result;
#line 48

#line 48
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__nextHop();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RFA1DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 291 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_header_t );
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 159 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__head(void )
#line 65
{
  return /*CtpP.SendQueueP*/QueueC__1__queue[/*CtpP.SendQueueP*/QueueC__1__head];
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head(void ){
#line 73
  struct __nesc_unnamed4298 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(4U, dt);
#line 73
}
#line 73
# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(uint16_t *etx){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(etx);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 532 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline bool /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute(void )
#line 532
{
  return /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent != INVALID_ADDR;
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/UnicastNameFreeRouting.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute(void ){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__Routing__hasRoute();
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*CtpP.SendQueueP*/QueueC__1__Queue__empty(void )
#line 53
{
  return /*CtpP.SendQueueP*/QueueC__1__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 371 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask(void )
#line 371
{
  uint16_t gradient;

#line 373
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING) || /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SENDQUEUE_EMPTY);
      return;
    }
  else {
    if ((
#line 378
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot() && 
    !/*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__hasRoute()) || 
    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) != SUCCESS) {








        ;
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(NO_ROUTE_RETRY);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_NO_ROUTE);
        return;
      }
    else {



        error_t subsendResult;
        fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();
        uint8_t payloadLen = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(qe->msg);
        am_addr_t dest = /*CtpP.Forwarder*/CtpForwardingEngineP__0__UnicastNameFreeRouting__nextHop();

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(qe->msg)) {




            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE_AT_SEND);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 412
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
            return;
          }


        ;

        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {

            collection_id_t collectid = __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(qe->msg)->type.nxdata);
            uint8_t *payload;
            uint8_t payloadLength;

            memcpy(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, qe->msg, sizeof(message_t ));

            payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr));
            payloadLength = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr);
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr, 
            payload, 
            payloadLength);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(qe->msg, SUCCESS);
          }
        else {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setEtx(qe->msg, gradient);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__clearOption(qe->msg, CTP_OPT_ECN | CTP_OPT_PULL);
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__requestAck(qe->msg) == SUCCESS) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING);
              }
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED)) {
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setOption(qe->msg, CTP_OPT_ECN);
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__QUEUE_CONGESTED);
              }

            subsendResult = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__send(dest, qe->msg, payloadLen);
            if (subsendResult == SUCCESS) {

                /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
                ;
                return;
              }
            else {
              if (subsendResult == ESIZE) {
                  ;
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(qe->msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength());
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
                  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SUBSEND_SIZE);
                }
              else {
                  ;
                }
              }
          }
      }
    }
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*CtpP.SendQueueP*/QueueC__1__printQueue(void )
#line 69
{
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t RadioSubsystemP__ForwardData__setNow(RadioSubsystemP__ForwardData__data_type val){
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
# 141 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline message_t *RadioSubsystemP__DataCollectionReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  data_packet_t *dataPtr = (data_packet_t *)payload;

#line 144
  while (RadioSubsystemP__ForwardData__setNow(*dataPtr) != SUCCESS) ;
  return msg;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__maxSize(void )
#line 61
{
  return 255;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.DataQueue*/QueueC__2__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__enqueue(/*SerialPacketForwarderC.DataQueue*/QueueC__2__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__size() < /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__queue[/*SerialPacketForwarderC.DataQueue*/QueueC__2__tail] = newVal;
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__tail++;
      if (/*SerialPacketForwarderC.DataQueue*/QueueC__2__tail == 255) {
#line 102
        /*SerialPacketForwarderC.DataQueue*/QueueC__2__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__size++;
      /*SerialPacketForwarderC.DataQueue*/QueueC__2__printQueue();
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
  __nesc_result = /*SerialPacketForwarderC.DataQueue*/QueueC__2__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__maxSize(void )
#line 61
{
  return 32;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.StatusQueue*/QueueC__4__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__enqueue(/*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__size() < /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__queue[/*SerialPacketForwarderC.StatusQueue*/QueueC__4__tail] = newVal;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__tail++;
      if (/*SerialPacketForwarderC.StatusQueue*/QueueC__4__tail == 32) {
#line 102
        /*SerialPacketForwarderC.StatusQueue*/QueueC__4__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__size++;
      /*SerialPacketForwarderC.StatusQueue*/QueueC__4__printQueue();
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
  __nesc_result = /*SerialPacketForwarderC.StatusQueue*/QueueC__4__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 209 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__ForwardStatus__setNow(status_packet_t val)
{
  error_t err;

  if (!SerialPacketForwarderP__enabled) {
    return EOFF;
    }
#line 215
  err = SerialPacketForwarderP__StatusQueue__enqueue(val);
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 218
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t RadioSubsystemP__ForwardStatus__setNow(RadioSubsystemP__ForwardStatus__data_type val){
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
# 173 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline message_t *RadioSubsystemP__StatusCollectionReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  status_packet_t *statusPtr = (status_packet_t *)payload;

#line 176
  while (RadioSubsystemP__ForwardStatus__setNow(*statusPtr) != SUCCESS) ;
  return msg;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__maxSize(void )
#line 61
{
  return 32;
}

#line 57
static inline uint8_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__size(void )
#line 57
{
  return /*SerialPacketForwarderC.CommandQueue*/QueueC__3__size;
}

#line 97
static inline error_t /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__enqueue(/*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue_t newVal)
#line 97
{
  if (/*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__size() < /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__maxSize()) {
      ;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__queue[/*SerialPacketForwarderC.CommandQueue*/QueueC__3__tail] = newVal;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__tail++;
      if (/*SerialPacketForwarderC.CommandQueue*/QueueC__3__tail == 32) {
#line 102
        /*SerialPacketForwarderC.CommandQueue*/QueueC__3__tail = 0;
        }
#line 103
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__size++;
      /*SerialPacketForwarderC.CommandQueue*/QueueC__3__printQueue();
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
  __nesc_result = /*SerialPacketForwarderC.CommandQueue*/QueueC__3__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 181 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__ForwardCommand__setNow(command_packet_t val)
{
  error_t err;

  if (!SerialPacketForwarderP__enabled) {
    return EOFF;
    }
#line 187
  err = SerialPacketForwarderP__CommandQueue__enqueue(val);
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 190
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t RadioSubsystemP__ForwardCommand__setNow(RadioSubsystemP__ForwardCommand__data_type val){
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
# 164 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline message_t *RadioSubsystemP__CommandCollectionReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  command_packet_t *commandPtr = (command_packet_t *)payload;

#line 167
  while (RadioSubsystemP__ForwardCommand__setNow(*commandPtr) != SUCCESS) ;
  return msg;
}

#line 150
static inline message_t *RadioSubsystemP__HistoryCollectionReceive__receive(message_t *msg, void *payload, uint8_t len)
{
  uint8_t i;
  data_packet_t *historyPtr = (data_packet_t *)payload;

#line 154
  for (i = 0; i < 2; i++) 
    {

      while (RadioSubsystemP__ForwardData__setNow(historyPtr[i]) != SUCCESS) ;
    }
  return msg;
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(0U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 192 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(message_t *msg)
{
  return /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__get(msg);
}

# 85 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = /*RFA1RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 569 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txNoAck(am_addr_t neighbor)
#line 569
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 572
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }

  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDEETX(ne);
    }
  return SUCCESS;
}

# 72 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(am_addr_t neighbor){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = LinkEstimatorP__LinkEstimator__txNoAck(neighbor);
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 559 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes(void )
#line 559
{
  /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes(void ){
#line 83
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__recomputeRoutes();
#line 83
}
#line 83
# 333 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline void RadioSubsystemP__DataCollectionSend__sendDone(message_t *msg, error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 336
    {
      RadioSubsystemP__locked = FALSE;
    }
#line 338
    __nesc_atomic_end(__nesc_atomic); }
}

#line 353
static inline void RadioSubsystemP__StatusCollectionSend__sendDone(message_t *msg, error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 356
    {
      RadioSubsystemP__locked = FALSE;
    }
#line 358
    __nesc_atomic_end(__nesc_atomic); }
}

#line 343
static inline void RadioSubsystemP__CommandCollectionSend__sendDone(message_t *msg, error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 346
    {
      RadioSubsystemP__locked = FALSE;
    }
#line 348
    __nesc_atomic_end(__nesc_atomic); }
}

#line 363
static inline void RadioSubsystemP__HistoryCollectionSend__sendDone(message_t *msg, error_t error)
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 366
    {
      RadioSubsystemP__locked = FALSE;
    }
#line 368
    __nesc_atomic_end(__nesc_atomic); }
}

# 846 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline 
#line 845
void 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(uint8_t client, message_t *msg, error_t error)
#line 846
{
}

# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(uint8_t arg_0x40ecb030, message_t * msg, error_t error){
#line 100
  switch (arg_0x40ecb030) {
#line 100
    case 0U:
#line 100
      RadioSubsystemP__DataCollectionSend__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      RadioSubsystemP__StatusCollectionSend__sendDone(msg, error);
#line 100
      break;
#line 100
    case 2U:
#line 100
      RadioSubsystemP__CommandCollectionSend__sendDone(msg, error);
#line 100
      break;
#line 100
    case 3U:
#line 100
      RadioSubsystemP__HistoryCollectionSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__default__sendDone(arg_0x40ecb030, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 66 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpPacket.nc"
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(message_t *msg){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
#line 54
inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(message_t *msg){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54









inline static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 797 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(message_t *msg)
#line 797
{
#line 797
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.nxdata);
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpPacket.nc"
inline static am_addr_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(message_t *msg){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(msg);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 100 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(uint8_t i)
#line 100
{
  uint8_t j;

#line 102
  if (i >= /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) {
    return;
    }
#line 104
  if (i == 0) {

      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4;
    }
  else 
#line 107
    {

      for (j = i; j < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; j++) {
          memcpy(&/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4], &/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(j + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + 1) % 4], sizeof(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__ctp_packet_sig_t ));
        }
    }
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count--;
}

static inline void /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(message_t *m)
#line 116
{
  uint8_t i;

#line 118
  if (/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count == 4) {





      i = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(m);
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__remove(i % /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count);
    }

  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].origin = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].seqno = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].thl = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[(/*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count) % 4].type = /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m);
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count++;
}

# 51 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Cache.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__t item){
#line 51
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Cache__insert(item);
#line 51
}
#line 51
# 552 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__txAck(am_addr_t neighbor)
#line 552
{
  neighbor_table_entry_t *ne;
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 555
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  ne = &LinkEstimatorP__NeighborTable[nidx];
  ne->data_success++;
  ne->data_total++;
  if (ne->data_total >= LinkEstimatorP__DLQ_PKT_WINDOW) {
      LinkEstimatorP__updateDEETX(ne);
    }
  return SUCCESS;
}

# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(am_addr_t neighbor){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = LinkEstimatorP__LinkEstimator__txAck(neighbor);
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 113 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key)
#line 113
{

  DisseminationEngineImplP__sendObject(key);
}

# 292 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id)
#line 292
{
  return;
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(uint8_t arg_0x40e5f928){
#line 90
  switch (arg_0x40e5f928) {
#line 90
    case /*RadioSubsystemC.DissCommand*/DisseminatorC__0__TIMER_ID:
#line 90
      DisseminationEngineImplP__TrickleTimer__fired(170U);
#line 90
      break;
#line 90
    default:
#line 90
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(arg_0x40e5f928);
#line 90
      break;
#line 90
    }
#line 90
}
#line 90
# 66 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 61
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 97
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 99
  {
#line 99
    /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
  }
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum){
#line 69
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(bitnum);
#line 69
}
#line 69
# 87 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 89
  {
#line 89
    {
      unsigned char __nesc_temp = 
#line 89
      /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum) ? TRUE : FALSE;

#line 89
      return __nesc_temp;
    }
  }
}

# 57 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(bitnum);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void )
#line 154
{
  uint8_t i;

#line 156
  for (i = 0; i < 1U; i++) {
      bool fire = FALSE;

#line 158
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
        {
          if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(i)) {
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(i);
              fire = TRUE;
            }
        }
#line 163
        __nesc_atomic_end(__nesc_atomic); }
      if (fire) {
          ;
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(i);
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
          return;
        }
    }
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
inline static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void ){
#line 69
  RadioSubsystemP__CommandValue__changed();
#line 69
}
#line 69
# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void )
#line 62
{
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

#line 78
static inline const /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t */*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void )
#line 78
{
  return &/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__valueCache;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/DisseminationValue.nc"
inline static const RadioSubsystemP__CommandValue__t *RadioSubsystemP__CommandValue__get(void ){
#line 55
  struct command_packet const *__nesc_result;
#line 55

#line 55
  __nesc_result = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void SensorControlP__Timer0__stop(void ){
#line 78
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 70 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline uint32_t SensorControlP__calcTimerPeriod(void )
{
  if (SensorControlP__status.burstInterval) 
    {
      switch (SensorControlP__status.intervalType) 
        {
          case 0: 
            return SensorControlP__status.burstInterval * 1 * 1000;
          case 1: 
            return SensorControlP__status.burstInterval * 60 * 1000;
          case 2: 
            return SensorControlP__status.burstInterval * 3600 * 1000;
          case 3: 
            return SensorControlP__status.burstInterval < 48ul ? SensorControlP__status.burstInterval * 86400 * 1000 : 48ul * 86400 * 1000;
          default: 
            ;
        }
    }
  return 5 * 1000;
}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void SensorControlP__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 91 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline void SensorControlP__Notify__notify(status_packet_t val)
#line 91
{

  SensorControlP__status = val;

  if (SensorControlP__status.historyEnable || SensorControlP__status.burstEnable) 
    {

      SensorControlP__Timer0__startPeriodic(SensorControlP__calcTimerPeriod());
    }
  else {




    SensorControlP__Timer0__stop();
    }
}

# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static void ControllerP__SensorNotification__notify(ControllerP__SensorNotification__val_t val){
#line 74
  SensorControlP__Notify__notify(val);
#line 74
}
#line 74
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t RadioSubsystemP__CommandCollectionSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(2U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 349 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(uint8_t client, message_t *msg, uint8_t len)
#line 349
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, len);
}

# 125 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static void * RadioSubsystemP__CommandCollectionSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(2U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 263 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline error_t RadioSubsystemP__SetRadioCommand__setNow(command_packet_t val)
{
  error_t err;
  command_packet_t *msgCommandPtr;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (RadioSubsystemP__locked) 
        {
          {
            unsigned char __nesc_temp = 
#line 272
            EBUSY;

            {
#line 272
              __nesc_atomic_end(__nesc_atomic); 
#line 272
              return __nesc_temp;
            }
          }
        }
#line 274
      RadioSubsystemP__locked = TRUE;
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }

  msgCommandPtr = (command_packet_t *)RadioSubsystemP__CommandCollectionSend__getPayload(&RadioSubsystemP__packet, sizeof(command_packet_t ));


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      *msgCommandPtr = val;
    }
#line 282
    __nesc_atomic_end(__nesc_atomic); }

  err = RadioSubsystemP__CommandCollectionSend__send(&RadioSubsystemP__packet, sizeof(command_packet_t ));

  if (err != SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 288
        {
          RadioSubsystemP__locked = FALSE;
        }
#line 290
        __nesc_atomic_end(__nesc_atomic); }
    }
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t ControllerP__SetRadioCommand__setNow(ControllerP__SetRadioCommand__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RadioSubsystemP__SetRadioCommand__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t RadioSubsystemP__StatusCollectionSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
#line 125
inline static void * RadioSubsystemP__StatusCollectionSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(1U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 297 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline error_t RadioSubsystemP__SetRadioStatus__setNow(status_packet_t val)
{
  error_t err;
  status_packet_t *msgStatusPtr;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 302
    {
      if (RadioSubsystemP__locked) 
        {
          {
            unsigned char __nesc_temp = 
#line 305
            EBUSY;

            {
#line 305
              __nesc_atomic_end(__nesc_atomic); 
#line 305
              return __nesc_temp;
            }
          }
        }
#line 307
      RadioSubsystemP__locked = TRUE;
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }


  msgStatusPtr = (status_packet_t *)RadioSubsystemP__StatusCollectionSend__getPayload(&RadioSubsystemP__packet, sizeof(status_packet_t ));


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 314
    {
      *msgStatusPtr = val;
    }
#line 316
    __nesc_atomic_end(__nesc_atomic); }


  err = RadioSubsystemP__StatusCollectionSend__send(&RadioSubsystemP__packet, sizeof(status_packet_t ));


  if (err != SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
        {
          RadioSubsystemP__locked = FALSE;
        }
#line 326
        __nesc_atomic_end(__nesc_atomic); }
    }
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t ControllerP__SetRadioStatus__setNow(ControllerP__SetRadioStatus__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RadioSubsystemP__SetRadioStatus__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 31 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data1ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 54 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline error_t SensorSubsystemP__ReadOne__read(void )
#line 54
{

  SensorSubsystemP__mode = FALSE;

  SensorSubsystemP__Data1ADC__read();

  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t ControllerP__GetDataOne__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = SensorSubsystemP__ReadOne__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 108 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline status_packet_t SensorControlP__GetStatus__get(void )
#line 108
{
  return SensorControlP__status;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Get.nc"
inline static ControllerP__GetStatus__val_t ControllerP__GetStatus__get(void ){
#line 55
  struct status_packet __nesc_result;
#line 55

#line 55
  __nesc_result = SensorControlP__GetStatus__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 174 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
static inline void ControllerP__NotifyRadioCommand__notify(command_packet_t val)
#line 174
{
  status_packet_t status_temp;
#line 175
  status_packet_t status_new;



  status_temp = ControllerP__GetStatus__get();
  status_new = status_temp;
  if (status_temp.node_id == val.address || 0xFFFF == val.address) 
    {
      switch (val.opcode) 
        {
          case COMMAND_CONFIGURE: 

            break;
          case COMMAND_READ_DATA: 
            ControllerP__GetDataOne__read();
          break;
          case COMMAND_READ_HISTORY: 
            ControllerP__SensorNotification__enable();
          break;
          case COMMAND_READ_STATUS: 
            ControllerP__SetRadioStatus__setNow(status_temp);
          break;
          case COMMAND_INTERVAL_SECONDS: 
            status_new.intervalType = INTERVAL_TYPE_SECONDS;
          status_new.burstInterval = val.value;
          break;
          case COMMAND_INTERVAL_MINUTES: 
            status_new.intervalType = INTERVAL_TYPE_MINUTES;
          status_new.burstInterval = val.value;
          break;
          case COMMAND_INTERVAL_HOURS: 
            status_new.intervalType = INTERVAL_TYPE_HOURS;
          status_new.burstInterval = val.value;
          break;
          case COMMAND_INTERVAL_DAYS: 
            status_new.intervalType = INTERVAL_TYPE_DAYS;
          status_new.burstInterval = val.value;
          break;
          case COMMAND_ECHO: 
            ControllerP__SetRadioCommand__setNow(val);
          default: 
            return;
        }
      if (1 == val.WE) 
        {
          status_new.burstEnable = val.BE;
          status_new.historyEnable = val.HE;
          status_new.node_id = status_temp.node_id;
        }

      ControllerP__SensorNotification__notify(status_new);
    }
}

# 74 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static void RadioSubsystemP__NotifyRadioCommand__notify(RadioSubsystemP__NotifyRadioCommand__val_t val){
#line 74
  ControllerP__NotifyRadioCommand__notify(val);
#line 74
}
#line 74
# 204 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x4079fa38){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x4079fa38);
#line 53
}
#line 53
# 97 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

# 56 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 89 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 89
{
  * (volatile uint8_t *)0x7A |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 126 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 126
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 127
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 127
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 69 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 81 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static SensorControlP__StoreData__t  SensorControlP__StoreData__dequeue(void ){
#line 81
  struct data_packet __nesc_result;
#line 81

#line 81
  __nesc_result = /*SensorC.SensorBuffer*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 53 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline bool /*SensorC.SensorBuffer*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*SensorC.SensorBuffer*/QueueC__0__size == 0;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static bool SensorControlP__StoreData__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*SensorC.SensorBuffer*/QueueC__0__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 158 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline uint8_t SensorControlP__GetData__getArray(data_packet_t *val, uint8_t len)
#line 158
{

  uint8_t i_Sensor_Buffer_GetData = 0;

#line 161
  if (! SensorControlP__status.historyEnable && SensorControlP__status.burstEnable) 
    {
      val[0] = SensorControlP__tempData;
      return 1;
    }
  else 
    {
      while (TRUE) 
        {
          if (len == i_Sensor_Buffer_GetData || SensorControlP__StoreData__empty()) 
            {
              return i_Sensor_Buffer_GetData;
            }
          else {
            val[i_Sensor_Buffer_GetData++] = SensorControlP__StoreData__dequeue();
            }
        }
    }
#line 178
  return 0;
}

# 41 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
inline static uint8_t ControllerP__GetData__getArray(ControllerP__GetData__data_type *val, uint8_t len){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = SensorControlP__GetData__getArray(val, len);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*SensorC.SensorBuffer*/QueueC__0__queue_t /*SensorC.SensorBuffer*/QueueC__0__Queue__head(void )
#line 65
{
  return /*SensorC.SensorBuffer*/QueueC__0__queue[/*SensorC.SensorBuffer*/QueueC__0__head];
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t RadioSubsystemP__HistoryCollectionSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(3U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
#line 125
inline static void * RadioSubsystemP__HistoryCollectionSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(3U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 218 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline error_t RadioSubsystemP__SetRadioHistory__sendArray(data_packet_t *val, uint8_t len)
{
  error_t err;
  uint8_t i;
  data_packet_t *msgHistoryPtr;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 225
    {
      if (RadioSubsystemP__locked) 
        {
          {
            unsigned char __nesc_temp = 
#line 228
            EBUSY;

            {
#line 228
              __nesc_atomic_end(__nesc_atomic); 
#line 228
              return __nesc_temp;
            }
          }
        }
#line 230
      RadioSubsystemP__locked = TRUE;
    }
#line 231
    __nesc_atomic_end(__nesc_atomic); }


  msgHistoryPtr = (data_packet_t *)RadioSubsystemP__HistoryCollectionSend__getPayload(&RadioSubsystemP__packet, len * sizeof(data_packet_t ));
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 235
    {
      for (i = 0; i < len; i++) 
        {

          msgHistoryPtr[i] = val[i];
        }
    }
#line 241
    __nesc_atomic_end(__nesc_atomic); }

  err = RadioSubsystemP__HistoryCollectionSend__send(&RadioSubsystemP__packet, len * sizeof(data_packet_t ));

  if (err != SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
        {
          RadioSubsystemP__locked = FALSE;
        }
#line 249
        __nesc_atomic_end(__nesc_atomic); }
    }
  return err;
}

# 25 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ArrayPipe.nc"
inline static error_t ControllerP__SetRadioHistory__sendArray(ControllerP__SetRadioHistory__data_type *val, uint8_t len){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  __nesc_result = RadioSubsystemP__SetRadioHistory__sendArray(val, len);
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 345 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(uint8_t client)
#line 345
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__maxPayloadLength();
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionIdP.nc"
static inline collection_id_t /*RadioSubsystemC.DataCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch(void )
#line 50
{
  return 187U;
}

#line 50
static inline collection_id_t /*RadioSubsystemC.StatusCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__1__CollectionId__fetch(void )
#line 50
{
  return 204U;
}

#line 50
static inline collection_id_t /*RadioSubsystemC.CommandCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__2__CollectionId__fetch(void )
#line 50
{
  return 221U;
}

#line 50
static inline collection_id_t /*RadioSubsystemC.HistoryCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__3__CollectionId__fetch(void )
#line 50
{
  return 238U;
}

# 867 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(uint8_t client)
#line 867
{
  return 0;
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionId.nc"
inline static collection_id_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(uint8_t arg_0x40ee9130){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  switch (arg_0x40ee9130) {
#line 46
    case 0U:
#line 46
      __nesc_result = /*RadioSubsystemC.DataCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__0__CollectionId__fetch();
#line 46
      break;
#line 46
    case 1U:
#line 46
      __nesc_result = /*RadioSubsystemC.StatusCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__1__CollectionId__fetch();
#line 46
      break;
#line 46
    case 2U:
#line 46
      __nesc_result = /*RadioSubsystemC.CommandCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__2__CollectionId__fetch();
#line 46
      break;
#line 46
    case 3U:
#line 46
      __nesc_result = /*RadioSubsystemC.HistoryCollectionSender.CollectionSenderP.CollectionIdP*/CollectionIdP__3__CollectionId__fetch();
#line 46
      break;
#line 46
    default:
#line 46
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__default__fetch(arg_0x40ee9130);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__maxSize(void )
#line 61
{
  return 16;
}

# 126 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 4 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 431 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(message_t *msg, error_t error)
#line 431
{
  if (msg != &/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer || !/*CtpP.Router*/CtpRoutingEngineP__0__sending) {

      return;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__sending = FALSE;
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void LinkEstimatorP__Send__sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__sendDone(msg, error);
#line 110
}
#line 110
# 611 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline void LinkEstimatorP__AMSend__sendDone(message_t *msg, error_t error)
#line 611
{
  return LinkEstimatorP__Send__sendDone(msg, error);
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  LinkEstimatorP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(m, err);
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(m, err);
}

# 162 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error)
#line 162
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DisseminationEngineImplP__ProbeAMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 166 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error)
#line 166
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DisseminationEngineImplP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 163 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

#line 65
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 4;
  for (i = 0; i < 4; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 4;
        }
      else {
          break;
        }
    }
  if (i >= 4) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
    }
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 81 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline void RadioSubsystemP__AMControl__stopDone(error_t error)
{
}

# 273 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error_t err)
#line 273
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
    }
}

# 256 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error_t error)
#line 256
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  ;
}

# 138 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__stopDone(error);
#line 138
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__stopDone(error);
#line 138
  RadioSubsystemP__AMControl__stopDone(error);
#line 138
}
#line 138
#line 104
inline static error_t RadioSubsystemP__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 439 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__StdControl__start(void )
#line 439
{
  ;
  return SUCCESS;
}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(uint32_t dt){
#line 64
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(3U, dt);
#line 64
}
#line 64
# 72 "/opt/tinyos-main/src/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 72
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 163 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}

# 68 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 228 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start(void )
#line 228
{
  /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__address();

  if (!/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__running = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__startPeriodic(BEACON_INTERVAL);
      ;
    }
  return SUCCESS;
}

# 222 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start(void )
#line 222
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ROUTING_ON);
  return SUCCESS;
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t RadioSubsystemP__RoutingControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__StdControl__start();
#line 95
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP__0__StdControl__start());
#line 95
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP__StdControl__start());
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum){
#line 63
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(bitnum);
#line 63
}
#line 63
# 100 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id)
#line 100
{
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      return EBUSY;
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
  ;
  return SUCCESS;
}

# 254 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key)
#line 254
{
#line 254
  return FAIL;
}

# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
inline static error_t DisseminationEngineImplP__TrickleTimer__start(uint16_t arg_0x40d8d200){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  switch (arg_0x40d8d200) {
#line 68
    case 170U:
#line 68
      __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(/*RadioSubsystemC.DissCommand*/DisseminatorC__0__TIMER_ID);
#line 68
      break;
#line 68
    default:
#line 68
      __nesc_result = DisseminationEngineImplP__TrickleTimer__default__start(arg_0x40d8d200);
#line 68
      break;
#line 68
    }
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 91 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key)
#line 91
{
  error_t result = DisseminationEngineImplP__TrickleTimer__start(key);

#line 93
  DisseminationEngineImplP__TrickleTimer__reset(key);
  return result;
}

# 45 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
inline static error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = DisseminationEngineImplP__DisseminationCache__start(170U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static inline error_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__StdControl__start(void )
#line 66
{
  error_t result = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__start();

#line 68
  if (result == SUCCESS) {
#line 68
      /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__m_running = TRUE;
    }
#line 69
  return result;
}

# 262 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id)
#line 262
{
#line 262
  return FAIL;
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t DisseminationEngineImplP__DisseminatorControl__start(uint16_t arg_0x40d8dcd0){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  switch (arg_0x40d8dcd0) {
#line 95
    case /*RadioSubsystemC.DissCommand*/DisseminatorC__0__TIMER_ID:
#line 95
      __nesc_result = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__StdControl__start();
#line 95
      break;
#line 95
    default:
#line 95
      __nesc_result = DisseminationEngineImplP__DisseminatorControl__default__start(arg_0x40d8dcd0);
#line 95
      break;
#line 95
    }
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__StdControl__start(void )
#line 73
{
  uint8_t i;

#line 75
  for (i = 0; i < DisseminationEngineImplP__NUM_DISSEMINATORS; i++) {
      DisseminationEngineImplP__DisseminatorControl__start(i);
    }
  DisseminationEngineImplP__m_running = TRUE;
  return SUCCESS;
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t RadioSubsystemP__DisseminationControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = DisseminationEngineImplP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 68 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline void RadioSubsystemP__AMControl__startDone(error_t err)
{
  if (err == SUCCESS) 
    {
      RadioSubsystemP__DisseminationControl__start();
      RadioSubsystemP__RoutingControl__start();
    }
  else 
    {
      RadioSubsystemP__AMControl__start();
    }
}

# 239 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error_t err)
#line 239
{
  if (err == SUCCESS) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__setState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON);
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__empty()) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
        }
    }
}

# 52 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Random.nc"
inline static uint16_t /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 246 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error_t error)
#line 246
{
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = TRUE;
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__running) {
      uint16_t nextInt;

#line 251
      nextInt = /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand16() % BEACON_INTERVAL;
      nextInt += BEACON_INTERVAL >> 1;
    }
}

# 113 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  /*CtpP.Router*/CtpRoutingEngineP__0__RadioControl__startDone(error);
#line 113
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RadioControl__startDone(error);
#line 113
  RadioSubsystemP__AMControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RFA1DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 314 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__RadioState__turnOn(void )
{
  if (RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE) {
    return EBUSY;
    }
  else {
#line 318
    if (RFA1DriverLayerP__state == RFA1DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 320
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TURNON;
  RFA1DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RFA1DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 132 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Ieee154Send.nc"
inline static void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 189 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 4) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x40a28eb8, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x40a28eb8, msg, error);
#line 110
}
#line 110
# 98 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 127 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline network_header_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

#line 214
static inline void /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 255 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline uint16_t RFA1RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * 62500UL / 1000000UL);
}

# 40 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RFA1RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 96 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 91 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 217 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 230
  return addr == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR;
}

# 184 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 184
  unsigned char __nesc_result;
#line 184

#line 184
  __nesc_result = /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 184

#line 184
  return __nesc_result;
#line 184
}
#line 184
# 142 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 156 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x40a24488, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x40a24488, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 861 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 863
{
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(collection_id_t arg_0x40eca158, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__default__receive(arg_0x40eca158, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 71 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate(void ){
#line 71
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerRouteUpdate();
#line 71
}
#line 71
# 806 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(message_t *msg, ctp_options_t opt)
#line 806
{
  return (__nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

#line 731
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(message_t *msg, void *payload, uint8_t len)
#line 732
{


  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__option(msg, CTP_OPT_PULL)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerRouteUpdate();
    }

  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Snoop__receive(/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg), 
  msg, payload + sizeof(ctp_data_header_t ), 
  len - sizeof(ctp_data_header_t ));
}

# 151 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 153
  ;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x40a25010, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40a25010) {
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSnoop__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x40a25010, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 146 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x40a25d88, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x40a25d88, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 340 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 150 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id)
#line 150
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count++;
}

# 260 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key)
#line 260
{
}

# 85 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__incrementCounter(uint16_t arg_0x40d8d200){
#line 85
  switch (arg_0x40d8d200) {
#line 85
    case 170U:
#line 85
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(/*RadioSubsystemC.DissCommand*/DisseminatorC__0__TIMER_ID);
#line 85
      break;
#line 85
    default:
#line 85
      DisseminationEngineImplP__TrickleTimer__default__incrementCounter(arg_0x40d8d200);
#line 85
      break;
#line 85
    }
#line 85
}
#line 85
# 247 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 246
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno)
#line 249
{
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
inline static void DisseminationEngineImplP__DisseminationCache__storeData(uint16_t arg_0x40d8e6f8, void * data, uint8_t size, uint32_t seqno){
#line 48
  switch (arg_0x40d8e6f8) {
#line 48
    case 170U:
#line 48
      /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(data, size, seqno);
#line 48
      break;
#line 48
    default:
#line 48
      DisseminationEngineImplP__DisseminationCache__default__storeData(arg_0x40d8e6f8, data, size, seqno);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 117 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static inline uint32_t /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void )
#line 117
{
  return /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno;
}

# 252 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 251
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key)
#line 252
{
#line 252
  return DISSEMINATION_SEQNO_UNKNOWN;
}

# 49 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationCache.nc"
inline static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(uint16_t arg_0x40d8e6f8){
#line 49
  unsigned long __nesc_result;
#line 49

#line 49
  switch (arg_0x40d8e6f8) {
#line 49
    case 170U:
#line 49
      __nesc_result = /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno();
#line 49
      break;
#line 49
    default:
#line 49
      __nesc_result = DisseminationEngineImplP__DisseminationCache__default__requestSeqno(arg_0x40d8e6f8);
#line 49
      break;
#line 49
    }
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 170 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 172
{

  dissemination_message_t *dMsg = 
  (dissemination_message_t *)payload;

  uint16_t key = __nesc_ntoh_uint16(dMsg->key.nxdata);
  uint32_t incomingSeqno = __nesc_ntoh_uint32(dMsg->seqno.nxdata);
  uint32_t currentSeqno = DisseminationEngineImplP__DisseminationCache__requestSeqno(key);

  if (!DisseminationEngineImplP__m_running) {
#line 181
      return msg;
    }
  if (currentSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  incomingSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if (incomingSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  currentSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if ((int32_t )(incomingSeqno - currentSeqno) > 0) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);
      ;
      DisseminationEngineImplP__TrickleTimer__reset(key);
    }
  else {
#line 211
    if ((int32_t )(incomingSeqno - currentSeqno) == 0) {

        DisseminationEngineImplP__TrickleTimer__incrementCounter(key);
      }
    else {


        DisseminationEngineImplP__sendObject(key);
      }
    }


  return msg;
}

static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 228
{

  dissemination_probe_message_t *dpMsg = 
  (dissemination_probe_message_t *)payload;

  if (!DisseminationEngineImplP__m_running) {
#line 233
      return msg;
    }
  if (DisseminationEngineImplP__DisseminationCache__requestSeqno(__nesc_ntoh_uint16(dpMsg->key.nxdata)) != 
  DISSEMINATION_SEQNO_UNKNOWN) {
      DisseminationEngineImplP__sendObject(__nesc_ntoh_uint16(dpMsg->key.nxdata));
    }

  return msg;
}

# 169 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(4U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 884 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node)
#line 884
{
  return SUCCESS;
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/CollectionDebug.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__default__logEventMsg(type, msg, origin, node);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 567 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void )
#line 567
{
  /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpInfo.nc"
inline static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate(void ){
#line 78
  /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
#line 78
}
#line 78
# 798 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline uint16_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(message_t *msg)
#line 798
{
#line 798
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->etx.nxdata);
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 88 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static inline /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t */*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *rval = /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index];

#line 91
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[/*CtpP.MessagePoolP.PoolP*/PoolP__0__index] = (void *)0;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free--;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__index++;
      if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__index == 12) {
          /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get(void ){
#line 97
  nx_struct message_t *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 88 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static inline /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t */*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *rval = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index];

#line 91
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index] = (void *)0;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free--;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index++;
      if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__index == 12) {
          /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get(void ){
#line 97
  struct __nesc_unnamed4298 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 75 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static inline bool /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free == 0;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 75 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static inline bool /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty(void )
#line 75
{
  ;
  return /*CtpP.MessagePoolP.PoolP*/PoolP__0__free == 0;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Pool.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__empty();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 578 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(message_t * m)
#line 578
{
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__empty()) {
      ;

      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_MSG_POOL_EMPTY);
    }
  else {
#line 584
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__empty()) {
        ;


        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_QENTRY_POOL_EMPTY);
      }
    else {
        message_t *newMsg;
        fe_queue_entry_t *qe;
        uint16_t gradient;

        qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__get();
        if (qe == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_MSGPOOL_ERR);
            return m;
          }

        newMsg = /*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__get();
        if (newMsg == (void *)0) {
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_GET_QEPOOL_ERR);
            return m;
          }

        memset(newMsg, 0, sizeof(message_t ));
        memset(m->metadata, 0, sizeof(message_metadata_t ));

        qe->msg = m;
        qe->client = 0xff;
        qe->retries = MAX_RETRIES;


        if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(qe) == SUCCESS) {
            ;

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__getEtx(&gradient) == SUCCESS) {

                if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getEtx(m) <= gradient) {




                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__triggerImmediateRouteUpdate();
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(LOOPY_WINDOW, LOOPY_OFFSET);
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_LOOP_DETECTED, 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(m), 
                    /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(m));
                  }
              }

            if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__isRunning()) {


                ;
                /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
              }


            return newMsg;
          }
        else 
#line 643
          {

            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(newMsg) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
              }
#line 647
            if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
              /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
              }
          }
      }
    }



  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SEND_QUEUE_FULL);
  return m;
}

#line 850
static inline 
#line 849
bool 
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 851
{
  return TRUE;
}

# 31 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Intercept.nc"
inline static bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collection_id_t arg_0x40eca800, message_t * msg, void * payload, uint8_t len){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
    __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__default__forward(arg_0x40eca800, msg, payload, len);
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 819 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline bool /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(message_t *m1, message_t *m2)
#line 819
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getOrigin(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(m2) && 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m1) == /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(m2);
}

# 112 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__element(uint8_t idx)
#line 112
{
  idx += /*CtpP.SendQueueP*/QueueC__1__head;
  if (idx >= 16) {
      idx -= 16;
    }
  return /*CtpP.SendQueueP*/QueueC__1__queue[idx];
}

# 101 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__t  /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(uint8_t idx){
#line 101
  struct __nesc_unnamed4298 *__nesc_result;
#line 101

#line 101
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__element(idx);
#line 101

#line 101
  return __nesc_result;
#line 101
}
#line 101
# 57 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*CtpP.SendQueueP*/QueueC__1__Queue__size(void )
#line 57
{
  return /*CtpP.SendQueueP*/QueueC__1__size;
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*CtpP.SendQueueP*/QueueC__1__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 112 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(2U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength(void )
#line 69
{
  return /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__maxPayloadLength();
}

# 123 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 801 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(message_t *msg, uint8_t thl)
#line 801
{
#line 801
  __nesc_hton_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.nxdata, thl);
}

#line 668
static inline message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 669
{
  collection_id_t collectid;
  bool duplicate = FALSE;
  fe_queue_entry_t *qe;
  uint8_t i;
#line 673
  uint8_t thl;


  collectid = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(msg);



  thl = /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(msg);
  thl++;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__setThl(msg, thl);

  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_RCV_MSG, 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
  thl--);
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__maxPayloadLength()) {
      return msg;
    }



  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__lookup(msg)) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_CACHE);
      return msg;
    }

  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size() > 0) {
      for (i = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__size(); i > 0; i--) {
          qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__element(i - 1);
          if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__matchInstance(qe->msg, msg)) {
              duplicate = TRUE;
              break;
            }
        }
    }

  if (duplicate) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_DUPLICATE_QUEUE);
      return msg;
    }
  else {

    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__RootControl__isRoot()) {
      return /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg));
      }
    else {
      if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__Intercept__forward(collectid, msg, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(msg, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg)), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(msg))) {
        return msg;
        }
      else 
#line 725
        {
          ;
          return /*CtpP.Forwarder*/CtpForwardingEngineP__0__forward(msg);
        }
      }
    }
}

# 571 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(am_addr_t n, bool congested)
#line 571
{
  uint8_t idx;

#line 573
  if (/*CtpP.Router*/CtpRoutingEngineP__0__ECNOff) {
    return;
    }
#line 575
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(n);
  if (idx < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = congested;
    }
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.congested && !congested) {
    /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
  else {
#line 581
    if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == n && congested) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
      }
    }
}

#line 712
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(am_addr_t from, am_addr_t parent, uint16_t etx)
#line 712
{
  uint8_t idx;
  uint16_t linkEtx;

#line 715
  linkEtx = /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(from);

  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(from);
  if (idx == 10) {




      ;
      return FAIL;
    }
  else {
#line 726
    if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {

        if (/*CtpP.Router*/CtpRoutingEngineP__0__passLinkEtxThreshold(linkEtx)) {
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.congested = FALSE;
            /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive++;
            ;
          }
        else 
#line 736
          {
            ;
          }
      }
    else 
#line 739
      {

        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].neighbor = from;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.parent = parent;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.etx = etx;
        /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[idx].info.haveHeard = 1;
        ;
      }
    }
#line 747
  return SUCCESS;
}

# 759 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 759
{
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static void LinkEstimatorP__LinkEstimator__evicted(am_addr_t neighbor){
#line 78
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__evicted(neighbor);
#line 78
  /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(neighbor);
#line 78
}
#line 78
# 502 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline error_t LinkEstimatorP__LinkEstimator__insertNeighbor(am_addr_t neighbor)
#line 502
{
  uint8_t nidx;

  nidx = LinkEstimatorP__findIdx(neighbor);
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      return SUCCESS;
    }

  nidx = LinkEstimatorP__findEmptyNeighborIdx();
  if (nidx != LinkEstimatorP__INVALID_RVAL) {
      ;
      LinkEstimatorP__initNeighborIdx(nidx, neighbor);
      return SUCCESS;
    }
  else 
#line 516
    {
      nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__BEST_EETX);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;

          LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
          LinkEstimatorP__initNeighborIdx(nidx, neighbor);
          return SUCCESS;
        }
    }
  return FAIL;
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimator.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(am_addr_t neighbor){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = LinkEstimatorP__LinkEstimator__insertNeighbor(neighbor);
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 185 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1RadioP.nc"
static inline am_addr_t RFA1RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RFA1RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RFA1RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 189 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 467 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline message_t */*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 467
{
  am_addr_t from;
  ctp_routing_header_t *rcvBeacon;
  bool congested;


  if (len != sizeof(ctp_routing_header_t )) {
      ;




      return msg;
    }


  from = /*CtpP.Router*/CtpRoutingEngineP__0__AMPacket__source(msg);
  rcvBeacon = (ctp_routing_header_t *)payload;

  congested = /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_ECN);

  ;




  if (__nesc_ntoh_uint16(rcvBeacon->parent.nxdata) != INVALID_ADDR) {



      if (__nesc_ntoh_uint16(rcvBeacon->etx.nxdata) == 0) {
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__insertNeighbor(from);
          /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__pinNeighbor(from);
        }


      /*CtpP.Router*/CtpRoutingEngineP__0__routingTableUpdateEntry(from, __nesc_ntoh_uint16(rcvBeacon->parent.nxdata), __nesc_ntoh_uint16(rcvBeacon->etx.nxdata));
      /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__setNeighborCongested(from, congested);
    }

  if (/*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(msg, CTP_OPT_PULL)) {
      /*CtpP.Router*/CtpRoutingEngineP__0__resetInterval();
    }
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * LinkEstimatorP__Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconReceive__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 250 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline void LinkEstimatorP__updateReverseQuality(am_addr_t neighbor, uint8_t outquality)
#line 250
{
  uint8_t idx;

#line 252
  idx = LinkEstimatorP__findIdx(neighbor);
  if (idx != LinkEstimatorP__INVALID_RVAL) {
      LinkEstimatorP__NeighborTable[idx].outquality = outquality;
      LinkEstimatorP__NeighborTable[idx].outage = LinkEstimatorP__MAX_AGE;
    }
}

# 68 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t LinkEstimatorP__SubAMPacket__address(void ){
#line 68
  unsigned short __nesc_result;
#line 68

#line 68
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
#line 88
inline static am_addr_t LinkEstimatorP__SubAMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 78
inline static am_addr_t LinkEstimatorP__SubAMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 631 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline void LinkEstimatorP__processReceivedMessage(message_t * msg, void * payload, uint8_t len)
#line 631
{
  uint8_t nidx;
  uint8_t num_entries;

  ;
  LinkEstimatorP__print_packet(msg, len);

  if (LinkEstimatorP__SubAMPacket__destination(msg) == AM_BROADCAST_ADDR) {
      linkest_header_t *hdr = LinkEstimatorP__getHeader(msg);
      linkest_footer_t * footer;
      am_addr_t ll_addr;

      ll_addr = LinkEstimatorP__SubAMPacket__source(msg);

      ;

      num_entries = __nesc_ntoh_uint8(hdr->flags.nxdata) & NUM_ENTRIES_FLAG;
      LinkEstimatorP__print_neighbor_table();
#line 664
      nidx = LinkEstimatorP__findIdx(ll_addr);
      if (nidx != LinkEstimatorP__INVALID_RVAL) {
          ;
          LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
        }
      else 
#line 668
        {
          nidx = LinkEstimatorP__findEmptyNeighborIdx();
          if (nidx != LinkEstimatorP__INVALID_RVAL) {
              ;
              LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
              LinkEstimatorP__updateNeighborEntryIdx(nidx, __nesc_ntoh_uint8(hdr->seq.nxdata));
            }
          else 
#line 674
            {
              nidx = LinkEstimatorP__findWorstNeighborIdx(LinkEstimatorP__EVICT_EETX_THRESHOLD);
              if (nidx != LinkEstimatorP__INVALID_RVAL) {
                  ;

                  LinkEstimatorP__LinkEstimator__evicted(LinkEstimatorP__NeighborTable[nidx].ll_addr);
                  LinkEstimatorP__initNeighborIdx(nidx, ll_addr);
                }
              else 
#line 681
                {
                  ;
                }
            }
        }
#line 701
      if (nidx != LinkEstimatorP__INVALID_RVAL && num_entries > 0) {
          uint8_t payloadLen = LinkEstimatorP__SubPacket__payloadLength(msg);
          void * subPayload = LinkEstimatorP__SubPacket__getPayload(msg, payloadLen);
          void *payloadEnd = subPayload + payloadLen;

#line 705
          ;

          footer = (linkest_footer_t * )(payloadEnd - num_entries * sizeof(linkest_footer_t ));
          {
            uint8_t i;
            am_addr_t my_ll_addr;
            neighbor_stat_entry_t * neighborLists;

#line 712
            my_ll_addr = LinkEstimatorP__SubAMPacket__address();
            neighborLists = (neighbor_stat_entry_t * )footer->neighborList;
            for (i = 0; i < num_entries; i++) {
                ;

                if (__nesc_ntoh_uint16(neighborLists[i].ll_addr.nxdata) == my_ll_addr) {
                    LinkEstimatorP__updateReverseQuality(ll_addr, __nesc_ntoh_uint8(neighborLists[i].inquality.nxdata));
                  }
              }
          }
        }
      LinkEstimatorP__print_neighbor_table();
    }
}







static inline message_t *LinkEstimatorP__SubReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 735
{
  ;
  LinkEstimatorP__processReceivedMessage(msg, payload, len);
  return LinkEstimatorP__Receive__receive(msg, 
  LinkEstimatorP__Packet__getPayload(msg, LinkEstimatorP__Packet__payloadLength(msg)), 
  LinkEstimatorP__Packet__payloadLength(msg));
}

# 141 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 143
  ;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x40a268e0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40a268e0) {
#line 78
    case 96:
#line 78
      __nesc_result = DisseminationEngineImplP__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 97:
#line 78
      __nesc_result = DisseminationEngineImplP__ProbeReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 112:
#line 78
      __nesc_result = LinkEstimatorP__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 113:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x40a268e0, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 173 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline bool /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 225 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

#line 72
static inline void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 128
static inline message_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 304 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__computeBidirEETX(uint8_t q1, uint8_t q2)
#line 304
{
  uint16_t q;

#line 306
  if (q1 > 0 && q2 > 0) {
      q = 65025u / q1;
      q = 10 * q / q2 - 10;
      if (q > 255) {
          q = LinkEstimatorP__LARGE_EETX_VALUE;
        }
      return (uint8_t )q;
    }
  else 
#line 313
    {
      return LinkEstimatorP__LARGE_EETX_VALUE;
    }
}



static inline void LinkEstimatorP__updateNeighborTableEst(am_addr_t n)
#line 320
{
  uint8_t i;
#line 321
  uint8_t totalPkt;
  neighbor_table_entry_t *ne;
  uint8_t newEst;
  uint8_t minPkt;

  minPkt = LinkEstimatorP__BLQ_PKT_WINDOW;
  ;
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->ll_addr == n) {
          if (ne->flags & VALID_ENTRY) {
              if (ne->inage > 0) {
                ne->inage--;
                }
#line 334
              if (ne->outage > 0) {
                ne->outage--;
                }
              if (ne->inage == 0 && ne->outage == 0) {
                  ne->flags ^= VALID_ENTRY;
                  ne->inquality = ne->outquality = 0;
                }
              else 
#line 340
                {
                  ;
                  ne->flags |= MATURE_ENTRY;
                  totalPkt = ne->rcvcnt + ne->failcnt;
                  ;
                  if (totalPkt < minPkt) {
                      totalPkt = minPkt;
                    }
                  if (totalPkt == 0) {
                      ne->inquality = LinkEstimatorP__ALPHA * ne->inquality / 10;
                    }
                  else 
#line 350
                    {
                      newEst = 255 * ne->rcvcnt / totalPkt;
                      ;
                      ne->inquality = (LinkEstimatorP__ALPHA * ne->inquality + (10 - LinkEstimatorP__ALPHA) * newEst + 5) / 10;
                    }
                  ne->rcvcnt = 0;
                  ne->failcnt = 0;
                }
              LinkEstimatorP__updateEETX(ne, LinkEstimatorP__computeBidirEETX(ne->inquality, ne->outquality));
            }
          else {
              ;
            }
        }
    }
}

# 751 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(am_addr_t neighbor)
#line 751
{
  uint8_t idx;
#line 752
  uint8_t i;

#line 753
  idx = /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(neighbor);
  if (idx == /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive) {
    return FAIL;
    }
#line 756
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive--;
  for (i = idx; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i] = /*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i + 1];
    }
  return SUCCESS;
}

# 768 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline uint8_t LinkEstimatorP__Packet__maxPayloadLength(void )
#line 768
{
  return LinkEstimatorP__SubPacket__maxPayloadLength() - sizeof(linkest_header_t );
}

#line 620
static inline uint8_t LinkEstimatorP__Send__maxPayloadLength(void )
#line 620
{
  return LinkEstimatorP__Packet__maxPayloadLength();
}

# 123 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = LinkEstimatorP__Send__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 624 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline void *LinkEstimatorP__Send__getPayload(message_t *msg, uint8_t len)
#line 624
{
  return LinkEstimatorP__Packet__getPayload(msg, len);
}

# 135 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AMSend.nc"
inline static void * /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = LinkEstimatorP__Send__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 460 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline ctp_routing_header_t */*CtpP.Router*/CtpRoutingEngineP__0__getHeader(message_t * m)
#line 460
{
  return (ctp_routing_header_t *)/*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(m, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
}

# 68 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 165 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 165
{
}

# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x40aa73f0){
#line 102
  switch (arg_0x40aa73f0) {
#line 102
    case 0U:
#line 102
      /*RFA1RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x40aa73f0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 155 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static inline void /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId;
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data2ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 72 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data1ADC__readDone(error_t result, uint16_t val)
#line 72
{


  if (SUCCESS == result) {
    SensorSubsystemP__sensorData.data1 = val;
    }
  SensorSubsystemP__Data2ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data3ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 81 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data2ADC__readDone(error_t result, uint16_t val)
#line 81
{


  if (SUCCESS == result) {
    SensorSubsystemP__sensorData.data2 = val;
    }
  SensorSubsystemP__Data3ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data4ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 90 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data3ADC__readDone(error_t result, uint16_t val)
#line 90
{


  if (SUCCESS == result) {
    SensorSubsystemP__sensorData.data3 = val;
    }
  SensorSubsystemP__Data4ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data5ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 99 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data4ADC__readDone(error_t result, uint16_t val)
#line 99
{


  if (SUCCESS == result) {
    SensorSubsystemP__sensorData.data4 = val;
    }
  SensorSubsystemP__Data5ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data6ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 108 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data5ADC__readDone(error_t result, uint16_t val)
#line 108
{


  if (SUCCESS == result) {
    SensorSubsystemP__sensorData.data5 = val;
    }
  SensorSubsystemP__Data6ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data7ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 117 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data6ADC__readDone(error_t result, uint16_t val)
#line 117
{





  SensorSubsystemP__Data7ADC__read();
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorSubsystemP__Data8ADC__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 126 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__Data7ADC__readDone(error_t result, uint16_t val)
#line 126
{





  SensorSubsystemP__Data8ADC__read();
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
inline static error_t RadioSubsystemP__DataCollectionSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
#line 125
inline static void * RadioSubsystemP__DataCollectionSend__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 182 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline error_t RadioSubsystemP__SetRadioData__setNow(data_packet_t val)
{
  error_t err;
  data_packet_t *msgDataPtr;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 188
    {
      if (RadioSubsystemP__locked) 
        {
          {
            unsigned char __nesc_temp = 
#line 191
            EBUSY;

            {
#line 191
              __nesc_atomic_end(__nesc_atomic); 
#line 191
              return __nesc_temp;
            }
          }
        }
#line 193
      RadioSubsystemP__locked = TRUE;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }


  msgDataPtr = (data_packet_t *)RadioSubsystemP__DataCollectionSend__getPayload(&RadioSubsystemP__packet, sizeof(data_packet_t ));


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      *msgDataPtr = val;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }


  err = RadioSubsystemP__DataCollectionSend__send(&RadioSubsystemP__packet, sizeof(data_packet_t ));

  if (err != SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 209
        {
          RadioSubsystemP__locked = FALSE;
        }
#line 211
        __nesc_atomic_end(__nesc_atomic); }
    }
  return err;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/SetNow.nc"
inline static error_t ControllerP__SetRadioData__setNow(ControllerP__SetRadioData__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = RadioSubsystemP__SetRadioData__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 166 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
static inline void ControllerP__GetDataOne__readDone(error_t result, data_packet_t val)
#line 166
{
  if (SUCCESS == result) 
    {
      ControllerP__SetRadioData__setNow(val);
    }
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static void SensorSubsystemP__ReadOne__readDone(error_t result, SensorSubsystemP__ReadOne__val_t val){
#line 63
  ControllerP__GetDataOne__readDone(result, val);
#line 63
}
#line 63
# 229 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
static inline void ControllerP__SPEnable__set(uint8_t val)
#line 229
{
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Set.nc"
inline static void SensorControlP__SPEnable__set(SensorControlP__SPEnable__val_t val){
#line 55
  ControllerP__SPEnable__set(val);
#line 55
}
#line 55
# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Notify.nc"
inline static error_t SensorControlP__Notify__enable(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = ControllerP__SensorNotification__enable();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 57 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__size(void )
#line 57
{
  return /*SensorC.SensorBuffer*/QueueC__0__size;
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static uint8_t SensorControlP__StoreData__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*SensorC.SensorBuffer*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static inline void /*SensorC.SensorBuffer*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*SensorC.SensorBuffer*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 2;
}

#line 97
static inline error_t /*SensorC.SensorBuffer*/QueueC__0__Queue__enqueue(/*SensorC.SensorBuffer*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*SensorC.SensorBuffer*/QueueC__0__Queue__size() < /*SensorC.SensorBuffer*/QueueC__0__Queue__maxSize()) {
      ;
      /*SensorC.SensorBuffer*/QueueC__0__queue[/*SensorC.SensorBuffer*/QueueC__0__tail] = newVal;
      /*SensorC.SensorBuffer*/QueueC__0__tail++;
      if (/*SensorC.SensorBuffer*/QueueC__0__tail == 2) {
#line 102
        /*SensorC.SensorBuffer*/QueueC__0__tail = 0;
        }
#line 103
      /*SensorC.SensorBuffer*/QueueC__0__size++;
      /*SensorC.SensorBuffer*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Queue.nc"
inline static error_t SensorControlP__StoreData__enqueue(SensorControlP__StoreData__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*SensorC.SensorBuffer*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 112 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline void SensorControlP__ReadAdc__readDone(error_t result, data_packet_t val)
#line 112
{

  if (SUCCESS == result) 
    {
      if (SensorControlP__status.historyEnable) 
        {
          if (2 == SensorControlP__StoreData__size()) 
            {



              SensorControlP__StoreData__dequeue();
            }




          SensorControlP__StoreData__enqueue(val);
          if (SensorControlP__status.burstEnable == 1 && 2 == SensorControlP__StoreData__size()) 
            {



              SensorControlP__Notify__enable();
            }
        }
      else 
        {
          if (SensorControlP__status.burstEnable) 
            {
              SensorControlP__tempData = val;



              SensorControlP__Notify__enable();
            }
        }
    }

  SensorControlP__SPEnable__set(0x00);
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static void SensorSubsystemP__Read__readDone(error_t result, SensorSubsystemP__Read__val_t val){
#line 63
  SensorControlP__ReadAdc__readDone(result, val);
#line 63
}
#line 63
# 58 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorConfig.h"
static __inline void _SensorDataPreCalc(data_packet_t *val)
{



  val->data1 = val->data1 + (val->data1 >> 3) - 273;
  val->data2 = val->data2;
  val->data3 = val->data3;
  val->data4 = ~ val->data4 & 0x3FF;
  val->data5 = val->data5;
}

# 63 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline void SensorSubsystemP__FormDataPacket(void )
{
  static uint16_t sequenceNumber = 0;

  SensorSubsystemP__sensorData.source = 2;
  SensorSubsystemP__sensorData.seqNo = sequenceNumber++;
  _SensorDataPreCalc(&SensorSubsystemP__sensorData);
}

#line 135
static inline void SensorSubsystemP__Data8ADC__readDone(error_t result, uint16_t val)
#line 135
{





  SensorSubsystemP__FormDataPacket();
  if (SensorSubsystemP__mode) {
    SensorSubsystemP__Read__readDone(SUCCESS, SensorSubsystemP__sensorData);
    }
  else {
#line 145
    SensorSubsystemP__ReadOne__readDone(SUCCESS, SensorSubsystemP__sensorData);
    }
}

# 48 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x407ffa28, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x407ffa28) {
#line 63
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 63
      SensorSubsystemP__Data1ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 63
      SensorSubsystemP__Data2ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 63
      SensorSubsystemP__Data3ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 63
      SensorSubsystemP__Data4ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 63
      SensorSubsystemP__Data5ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 63
      SensorSubsystemP__Data6ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 63
      SensorSubsystemP__Data7ADC__readDone(result, val);
#line 63
      break;
#line 63
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 63
      SensorSubsystemP__Data8ADC__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x407ffa28, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x407fd990){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x407fd990) {
#line 120
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__HAL_ID);
#line 120
      break;
#line 120
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 120
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x407fd990);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 39 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x40728848, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x40728848, result, val);
#line 63
}
#line 63
# 103 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

# 66 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 8U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 218 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x4079edf0){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x4079edf0);
#line 65
}
#line 65
# 93 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 93
{
  * (volatile uint8_t *)0x7A &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 131 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 131
{
  /* atomic removed: atomic calls only */
#line 132
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 84 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 86 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 95
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x407feac8){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = AdcP__Read__read(arg_0x407feac8);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 35 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x4079f010){
#line 102
  switch (arg_0x4079f010) {
#line 102
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID);
#line 102
      break;
#line 102
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x4079f010);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x4079edf0){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x4079edf0);
#line 59
}
#line 59
# 190 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 69
{
#line 69
  union __nesc_unnamed4379 {
#line 69
    Atm128Adcsra_t f;
#line 69
    uint8_t t;
  } 
#line 69
  c = { .f = x };

#line 69
  return c.t;
}





static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 76
{
  * (volatile uint8_t *)0x7A = HplAtm128AdcP__Adcsra2int(x);
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 68 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 68
{
#line 68
  union __nesc_unnamed4380 {
#line 68
    Atm128Admux_t f;
#line 68
    uint8_t t;
  } 
#line 68
  c = { .f = x };

#line 68
  return c.t;
}



static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 73
{
  * (volatile uint8_t *)0x7C = HplAtm128AdcP__Admux2int(x);
}

# 58 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 141 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 141
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 55
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)0x7C;
}

# 53 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 53
  struct __nesc_unnamed4252 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 206 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 206
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsra;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;

  if (channel & 0x20) 
    {
      * (volatile uint8_t *)0x7B |= 1 << 3;
    }
  else 
    {
      * (volatile uint8_t *)0x7B &= ~(1 << 3);
    }

  admux.mux = channel & 0xDF;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsra.aden = ATM128_ADC_ENABLE_ON;
  adcsra.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsra.adate = Atm128AdcP__f.multiple;
  adcsra.adif = ATM128_ADC_INT_FLAG_ON;
  adcsra.adie = ATM128_ADC_INT_ENABLE_ON;


  adcsra.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 241
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 247
        Atm128AdcP__f.precise;

        {
#line 247
          __nesc_atomic_end(__nesc_atomic); 
#line 247
          return __nesc_temp;
        }
      }
    }
#line 250
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 14 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSensorP.nc"
static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

#line 14
static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getChannel(void )
{
  return 41;
}

# 137 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_1_23;
}

# 25 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x407e2dc0){
#line 25
  unsigned char __nesc_result;
#line 25

#line 25
  switch (arg_0x407e2dc0) {
#line 25
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 25
      __nesc_result = /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      __nesc_result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x407e2dc0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return __nesc_result;
#line 25
}
#line 25
# 70 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 19 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSensorP.nc"
static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

#line 19
static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getRefVoltage(void )
{
  return ATM128_ADC_VREF_1_6;
}

# 141 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x407e2dc0){
#line 32
  unsigned char __nesc_result;
#line 32

#line 32
  switch (arg_0x407e2dc0) {
#line 32
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 32
      __nesc_result = /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      __nesc_result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x407e2dc0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return __nesc_result;
#line 32
}
#line 32
# 74 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 24 "/opt/tinyos-main/src/tinyos-main/tos/platforms/rcb128rfa1/PlatformSensorP.nc"
static inline uint8_t /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

#line 24
static inline uint8_t /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

# 145 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x407e2dc0){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x407e2dc0) {
#line 39
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data1.PlatformSensorP*/PlatformSensorP__0__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data2.PlatformSensorP*/PlatformSensorP__1__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data3.PlatformSensorP*/PlatformSensorP__2__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data4.PlatformSensorP*/PlatformSensorP__3__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data5.PlatformSensorP*/PlatformSensorP__4__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data6.PlatformSensorP*/PlatformSensorP__5__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data7.PlatformSensorP*/PlatformSensorP__6__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 39
      __nesc_result = /*SensorSubsystemC.Data8.PlatformSensorP*/PlatformSensorP__7__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x407e2dc0);
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
# 78 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
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

# 44 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorSubsystemP.nc"
static inline error_t SensorSubsystemP__Read__read(void )
#line 44
{

  SensorSubsystemP__mode = TRUE;

  SensorSubsystemP__Data1ADC__read();

  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Read.nc"
inline static error_t SensorControlP__ReadAdc__read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = SensorSubsystemP__Read__read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 60 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline void SensorControlP__Timer0__fired(void )
#line 60
{




  SensorControlP__SPEnable__set(0xff);
  SensorControlP__ReadAdc__read();
}

# 92 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 94
  {
#line 94
    /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
  }
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum){
#line 63
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(bitnum);
#line 63
}
#line 63
# 199 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num)
{
  return /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].dt;
}

# 151 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void ){
#line 151
  unsigned long __nesc_result;
#line 151

#line 151
  __nesc_result = /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(1U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 176 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void )
#line 176
{
  uint8_t i;
  uint32_t dt = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt();

#line 179
  ;
  for (i = 0; i < 1U; i++) {
      uint32_t remaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 182
      if (remaining != 0) {
          remaining -= dt;
          if (remaining == 0) {
              if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count < 1) {
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 186
                    {
                      ;
                      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(i);
                    }
#line 189
                    __nesc_atomic_end(__nesc_atomic); }
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
                }
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(i);
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(i);







              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
            }
        }
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
}

# 198 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval(void )
#line 198
{
  /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval *= 2;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__currentInterval > 512000L) {
      /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval = 512000L;
    }
  /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime();
}

# 73 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(uint32_t dt){
#line 73
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 206 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval(void )
#line 206
{
  uint32_t remaining = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;

#line 208
  remaining -= /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = TRUE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(remaining);
}

# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 445 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired(void )
#line 445
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      if (!/*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed) {
          /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
          /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__postTask();
          ;
          /*CtpP.Router*/CtpRoutingEngineP__0__remainingInterval();
        }
      else {
          /*CtpP.Router*/CtpRoutingEngineP__0__decayInterval();
        }
    }
}

#line 439
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired(void )
#line 439
{
  if (/*CtpP.Router*/CtpRoutingEngineP__0__radioOn && /*CtpP.Router*/CtpRoutingEngineP__0__running) {
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

# 744 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline void /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired(void )
#line 744
{
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
  ;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
}

# 204 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x406c8ec8){
#line 83
  switch (arg_0x406c8ec8) {
#line 83
    case 0U:
#line 83
      SensorControlP__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*CtpP.Router*/CtpRoutingEngineP__0__RouteTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x406c8ec8);
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

# 118 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
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

# 113 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
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

# 61 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = 2 << 4;
  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 55 "/opt/tinyos-main/src/tinyos-main/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(2 + 1);

  return SUCCESS;
}

# 183 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static inline error_t RFA1DriverLayerP__SoftwareInit__init(void )
{

  RFA1DriverLayerP__txPower = 0 & RFA1_TX_PWR_MASK;
  RFA1DriverLayerP__channel = 26 & RFA1_CHANNEL_MASK;

  * (volatile uint8_t *)0x149 = RFA1_CCA_THRES_VALUE;
  * (volatile uint8_t *)0x148 = (RFA1_CCA_MODE_VALUE << 5) | RFA1DriverLayerP__channel;

  * (volatile uint8_t *)0x145 = ((0 & RFA1_TX_PWR_MASK) | (3 << 6)) | (0 << 4);




  * (volatile uint8_t *)0xDC = ((1 << 5) | (1 << 3)) | (1 << 4);








  * (volatile uint8_t *)0x139 |= 1 << 1;
  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_SLEEP;
  return SUCCESS;
}

# 77 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits);
}

# 45 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void ){
#line 45
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll();
#line 45
}
#line 45
# 77 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits);
}

# 45 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void ){
#line 45
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll();
#line 45
}
#line 45
# 82 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void )
#line 82
{
  int i;

#line 84
  for (i = 0; i < 1U; i++) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].period = 1024;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].remainder = 0;
    }
  /* atomic removed: atomic calls only */
#line 90
  {
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll();
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll();
  }
  return SUCCESS;
}

# 431 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static inline void LinkEstimatorP__initNeighborTable(void )
#line 431
{
  uint8_t i;

  for (i = 0; i < 10; i++) {
      LinkEstimatorP__NeighborTable[i].flags = 0;
    }
}











static inline error_t LinkEstimatorP__Init__init(void )
#line 449
{
  ;
  LinkEstimatorP__initNeighborTable();
  return SUCCESS;
}

# 211 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static inline error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init(void )
#line 211
{
  int i;

#line 213
  for (i = 0; i < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT; i++) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[i] = /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientEntries + i;
      ;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsgPtr = &/*CtpP.Forwarder*/CtpForwardingEngineP__0__loopbackMsg;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno = 0;
  return SUCCESS;
}

# 694 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline void /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit(void )
#line 694
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive = 0;
}

# 26 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/TreeRouting.h"
static __inline void routeInfoInit(route_info_t *ri)
#line 26
{
  ri->parent = INVALID_ADDR;
  ri->etx = 0;
  ri->haveHeard = 0;
  ri->congested = FALSE;
}

# 213 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__Init__init(void )
#line 213
{
  uint8_t maxLength;

#line 215
  /*CtpP.Router*/CtpRoutingEngineP__0__radioOn = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__running = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__parentChanges = 0;
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableInit();
  /*CtpP.Router*/CtpRoutingEngineP__0__beaconMsg = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__getPayload(&/*CtpP.Router*/CtpRoutingEngineP__0__beaconMsgBuffer, /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength());
  maxLength = /*CtpP.Router*/CtpRoutingEngineP__0__BeaconSend__maxPayloadLength();
  ;

  return SUCCESS;
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static inline error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[i] = &/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__free = 12;
  /*CtpP.MessagePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 12; i++) {
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[i] = &/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free = 12;
  /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 64 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static inline error_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init(void )
#line 64
{
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first = 0;
  /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count = 0;
  return SUCCESS;
}

# 50 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__SerialPacketForwarderInit__init(void )
{
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
  __nesc_result = ecombine(__nesc_result, /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.MessagePoolP.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Router*/CtpRoutingEngineP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*CtpP.Forwarder*/CtpForwardingEngineP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, LinkEstimatorP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RFA1DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RFA1RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
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

# 60 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static inline error_t RadioSubsystemP__RadioSubsystemInit__init(void )
{


  return RadioSubsystemP__AMControl__start();
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t ControllerP__RadioSubsystemInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RadioSubsystemP__RadioSubsystemInit__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline error_t Atm128Rfa1SerialP__Uart1Control__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 58
    {
      if (Atm128Rfa1SerialP__rxBusy || Atm128Rfa1SerialP__txBusy) 
        {
          unsigned char __nesc_temp = 
#line 60
          EBUSY;

          {
#line 60
            __nesc_atomic_end(__nesc_atomic); 
#line 60
            return __nesc_temp;
          }
        }
#line 61
      Atm128Rfa1SerialP__started = FALSE;

      * (volatile uint8_t *)0xC8 &= ~(1 << 7);
      * (volatile uint8_t *)0xC8 &= ~(1 << 6);

      * (volatile uint8_t *)0xC9 |= 1 << 7;
      * (volatile uint8_t *)0xC9 |= 1 << 6;

      * (volatile uint8_t *)0xC9 |= 1 << 4;
      * (volatile uint8_t *)0xC9 |= 1 << 3;
    }
#line 71
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 105 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t SerialPacketForwarderP__UartControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = Atm128Rfa1SerialP__Uart1Control__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 96 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__CommandNotification__disable(void )
{

  if (!SerialPacketForwarderP__enabled) {
    return EOFF;
    }
#line 101
  if (SerialPacketForwarderP__started) {
    return EBUSY;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 104
    {
      SerialPacketForwarderP__commandReceptionEnabled = FALSE;
    }
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  SerialPacketForwarderP__started = FALSE;
  return SUCCESS;
}

#line 69
static inline error_t SerialPacketForwarderP__SerialPacketForwarderControl__stop(void )
{
  if (SerialPacketForwarderP__started) {
    return EBUSY;
    }
#line 73
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      SerialPacketForwarderP__enabled = FALSE;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }
  SerialPacketForwarderP__CommandNotification__disable();
  return SerialPacketForwarderP__UartControl__stop();
}

# 105 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t ControllerP__SerialPacketForwarderControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = SerialPacketForwarderP__SerialPacketForwarderControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 615 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__unsetRoot(void )
#line 615
{
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 0;
  routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);

  ;
  /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
inline static error_t ControllerP__RadioSubsystemRootControl__unsetRoot(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__unsetRoot();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 48 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/usart/Atm128Rfa1SerialP.nc"
static inline error_t Atm128Rfa1SerialP__Uart1Control__start(void )
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
# 58 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static inline error_t SerialPacketForwarderP__SerialPacketForwarderControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    {
      SerialPacketForwarderP__enabled = TRUE;
    }
#line 62
    __nesc_atomic_end(__nesc_atomic); }

  SerialPacketForwarderP__UartControl__start();
  return SerialPacketForwarderP__CommandNotification__enable();
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/StdControl.nc"
inline static error_t ControllerP__SerialPacketForwarderControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = SerialPacketForwarderP__SerialPacketForwarderControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 601 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static inline error_t /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot(void )
#line 601
{
  bool route_found = FALSE;

#line 603
  route_found = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR;
  /*CtpP.Router*/CtpRoutingEngineP__0__state_is_root = 1;
  /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent = /*CtpP.Router*/CtpRoutingEngineP__0__my_ll_addr;
  /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx = 0;

  if (route_found) {
    /*CtpP.Router*/CtpRoutingEngineP__0__Routing__routeFound();
    }
#line 610
  ;
  /*CtpP.Router*/CtpRoutingEngineP__0__CollectionDebug__logEventRoute(NET_C_TREE_NEW_PARENT, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent, 0, /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx);
  return SUCCESS;
}

# 41 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/RootControl.nc"
inline static error_t ControllerP__RadioSubsystemRootControl__setRoot(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = /*CtpP.Router*/CtpRoutingEngineP__0__RootControl__setRoot();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t ControllerP__SerialPacketForwarderInit__init(void ){
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
# 54 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )44U & (1 << 6)) != 0;
}

# 43 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static bool ControllerP__CheckRoot__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 48 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SensorControlP.nc"
static inline error_t SensorControlP__Init__init(void )
#line 48
{

  SensorControlP__status.historyEnable = 0;
  SensorControlP__status.burstEnable = 0;
  SensorControlP__status.reserved = 0;
  SensorControlP__status.intervalType = 0;
  SensorControlP__status.burstInterval = 01;
  SensorControlP__status.node_id = 2;

  return SUCCESS;
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Init.nc"
inline static error_t ControllerP__InitSensorC__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SensorControlP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )45U &= ~(1 << 6);
}

# 44 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void ControllerP__CheckRoot__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__22__IO__makeInput();
#line 44
}
#line 44
# 92 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
static inline error_t ControllerP__Init__init(void )
#line 92
{

  ControllerP__CheckRoot__makeInput();

  while (SUCCESS != ControllerP__InitSensorC__init()) ;

  ControllerP__IAmRoot = !ControllerP__CheckRoot__get();

  if (ControllerP__IAmRoot) 
    {
      while (SUCCESS != ControllerP__SerialPacketForwarderInit__init()) ;
      while (SUCCESS != ControllerP__RadioSubsystemRootControl__setRoot()) ;
      while (SUCCESS != ControllerP__SerialPacketForwarderControl__start()) ;
    }
  else 
    {
      while (SUCCESS != ControllerP__RadioSubsystemRootControl__unsetRoot()) ;
      while (SUCCESS != ControllerP__SerialPacketForwarderControl__stop()) ;
    }
  while (SUCCESS != ControllerP__RadioSubsystemInit__init()) ;



  return SUCCESS;
}

#line 88
static inline void ControllerP__Boot__booted(void )
#line 88
{
  while (SUCCESS != ControllerP__Init__init()) ;
}

# 60 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  ControllerP__Boot__booted();
#line 60
}
#line 60
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

# 131 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline mcu_power_t HplAtm128AdcP__McuPowerOverride__lowestState(void )
#line 131
{
  if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
      return ATM128_POWER_ADC_NR;
    }
  else {
    return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128AdcP__McuPowerOverride__lowestState();
#line 62
  __nesc_result = mcombine(__nesc_result, HplAtmRfa1TimerMacP__McuPowerOverride__lowestState());
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
# 61 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 61
{
  return * (volatile uint16_t *)0x78;
}

#line 58
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 58
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)0x7A;
}

#line 139
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 139
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 143
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 160
      oldSr.adif || oldSr.adsc;

#line 160
      return __nesc_temp;
    }
  }
}

# 150 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 274 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 275
{
  return FALSE;
}

# 119 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char __nesc_result;
#line 119

#line 119
  __nesc_result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return __nesc_result;
#line 119
}
#line 119
# 150 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x407e3888, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x407e3888, result, val);
#line 66
}
#line 66
# 67 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 108 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 98 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 98
{
#line 98
  * (volatile uint8_t *)0x7A &= ~(1 << 3);
}

# 95 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 146 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 146
{
  bool precise;
#line 147
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 155
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 174
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 182
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 202
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 156 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
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

# 124 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static void SerialPacketForwarderP__UartStream__receivedByte(uint8_t byte)
{
  uint8_t incoming;

#line 127
  incoming = byte;

  if (!SerialPacketForwarderP__enabled) {
    return;
    }
#line 131
  if (!SerialPacketForwarderP__commandReceptionEnabled) {
    return;
    }

  SerialPacketForwarderP__UartByte__send(incoming);

  if (incoming == '[') 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 139
        {
          SerialPacketForwarderP__pos = 0;
          SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = incoming;
        }
#line 142
        __nesc_atomic_end(__nesc_atomic); }
      SerialPacketForwarderP__started = TRUE;
    }
  else {
#line 145
    if (incoming == ']' && SerialPacketForwarderP__started) 
      {
        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 147
          {
            if (SerialPacketForwarderP__pos + 1 < 64) 
              {
                SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = incoming;
                SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos] = 0;
              }
            else {
              SerialPacketForwarderP__pos = 0;
              }
          }
#line 156
          __nesc_atomic_end(__nesc_atomic); }
#line 156
        SerialPacketForwarderP__started = FALSE;


        { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
          {
            memcpy((char *)SerialPacketForwarderP__temporaryBuffer, (char *)SerialPacketForwarderP__receiveBuffer, SerialPacketForwarderP__pos <= 64 ? SerialPacketForwarderP__pos : 64);
            SerialPacketForwarderP__temporaryBuffer[SerialPacketForwarderP__pos] = 0;
            SerialPacketForwarderP__temporaryPos = SerialPacketForwarderP__pos;
          }
#line 163
          __nesc_atomic_end(__nesc_atomic); }
        SerialPacketForwarderP__processReceiveBufferTask__postTask();
      }
    else {
#line 166
      if (SerialPacketForwarderP__started) 
        {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
            {
              if (SerialPacketForwarderP__pos < 64) 
                {
                  SerialPacketForwarderP__receiveBuffer[SerialPacketForwarderP__pos++] = incoming;
                }
              else {
                SerialPacketForwarderP__pos = 0;
                }
            }
#line 176
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

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      time.ll = * (volatile uint8_t *)0xE1;
      time.lh = * (volatile uint8_t *)0xE2;
      time.hl = * (volatile uint8_t *)0xE3;
      time.hh = * (volatile uint8_t *)0xE4;
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }

  return time.full;
}

#line 266
__attribute((signal))   void __vector_66(void )
#line 266
{
#line 266
  HplAtmRfa1TimerMacP__CompareB__fired();
}

# 112 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 119
            __nesc_atomic_end(__nesc_atomic); 
#line 119
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 74
static void TaskletC__doit(void )
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 90
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 66 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 99 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static rfa1_metadata_t *RFA1DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RFA1DriverLayerP__RadioPacket__metadataLength(msg);
}

# 65 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 137 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

#line 97
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

#line 183
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 102 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/AtmegaCompareP.nc"
static void /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__Alarm__start(/*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type ndt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__size_type n = /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__AtmegaCounter__get();


      n += 2 > ndt ? 2 : ndt;

      /*RFA1RadioC.AlarmC.AtmegaCompareP*/AtmegaCompareP__1__setAlarm(n);
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 217 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static void *RFA1DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RFA1DriverLayerP__RadioPacket__headerLength(msg);
}

# 109 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

#line 210
static bool /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 106 "/opt/tinyos-main/src/tinyos-main/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 106
{
  am_addr_t myAddr;

#line 108
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    myAddr = ActiveMessageAddressC__addr;
#line 108
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 829 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static void RFA1DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;

  __nesc_hton_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

#line 330
static error_t RFA1DriverLayerP__RadioSend__send(message_t *msg)
{

  uint32_t time;
  uint8_t length;
  uint8_t *data;
  uint8_t header;
  void *timesync;

  if ((RFA1DriverLayerP__cmd != RFA1DriverLayerP__CMD_NONE || RFA1DriverLayerP__state != RFA1DriverLayerP__STATE_RX_ON) || RFA1DriverLayerP__radioIrq) {
    return EBUSY;
    }
  length = RFA1DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RFA1DriverLayerP__PacketTransmitPower__get(msg) : 0;

  if (length != RFA1DriverLayerP__txPower) 
    {
      RFA1DriverLayerP__txPower = length;
      * (volatile uint8_t *)0x145 = ((RFA1DriverLayerP__txPower & RFA1_TX_PWR_MASK) | (3 << 6)) | (0 << 4);
    }


  if (
#line 351
  RFA1DriverLayerP__Config__requiresRssiCca(msg)
   && (* (volatile uint8_t *)0x146 & RFA1_RSSI_MASK) > ((RFA1DriverLayerP__rssiClear + RFA1DriverLayerP__rssiBusy) >> 3)) {
    return EBUSY;
    }
  * (volatile uint8_t *)0x142 = 9;


  timesync = RFA1DriverLayerP__PacketTimeSyncOffset__isSet(msg) ? (void *)msg + RFA1DriverLayerP__PacketTimeSyncOffset__get(msg) : 0;


  if ((* (volatile uint8_t *)0x141 & RFA1_TRX_STATUS_MASK) != RFA1_PLL_ON) 
    {
      for (; 0; ) ;

      RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_PLL_ON_2_RX_ON;
      return EBUSY;
    }


  for (; 0; ) ;

  data = RFA1DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata);


  * (volatile uint8_t *)0x180 = length;


  length -= 2;

  header = RFA1DriverLayerP__Config__headerPreloadLength();
  if (header > length) {
    header = length;
    }
  length -= header;


  memcpy((void *)(& * (volatile uint8_t *)0x180 + 1), data, header);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      * (volatile uint8_t *)0x142 = 2;

      time = RFA1DriverLayerP__LocalTime__get();
      time += RFA1DriverLayerP__TX_SFD_DELAY;
    }
#line 396
    __nesc_atomic_end(__nesc_atomic); }


  if (timesync != 0) {
    __nesc_hton_int32((* (timesync_relative_t *)timesync).nxdata, __nesc_ntoh_uint32((* (timesync_absolute_t *)timesync).nxdata) - time);
    }

  memcpy((void *)(& * (volatile uint8_t *)0x180 + 1 + header), data + header, length);
#line 422
  RFA1DriverLayerP__state = RFA1DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RFA1DriverLayerP__cmd = RFA1DriverLayerP__CMD_TRANSMIT;

  * (volatile uint8_t *)0x142 = 6;

  if (timesync != 0) {
    __nesc_hton_uint32((* (timesync_absolute_t *)timesync).nxdata, time);
    }
  RFA1DriverLayerP__PacketTimeStamp__set(msg, time);
#line 446
  return SUCCESS;
}

# 61 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 824 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
static uint8_t RFA1DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RFA1DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 50 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RFA1RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(0U, timeout);
#line 50
}
#line 50
# 193 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint16_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 252 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 84 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 346 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/timer/HplAtmRfa1TimerMacP.nc"
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
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RFA1RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask:
#line 75
      /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__changedTask__runTask();
#line 75
      break;
#line 75
    case /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask:
#line 75
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask:
#line 75
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__runTask();
#line 75
      break;
#line 75
    case /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask:
#line 75
      /*CtpP.Router*/CtpRoutingEngineP__0__sendBeaconTask__runTask();
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
      memcpy((char *)Atm128Rfa1SerialP__txTmpBuf, (char *)buf, len);
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

# 131 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminationEngineImplP.nc"
static void DisseminationEngineImplP__sendObject(uint16_t key)
#line 131
{
  void *object;
  uint8_t objectSize = 0;
  dissemination_message_t *dMsg;




  if (!DisseminationEngineImplP__m_running || DisseminationEngineImplP__m_bufBusy) {
#line 139
      return;
    }
  dMsg = 
  (dissemination_message_t *)DisseminationEngineImplP__AMSend__getPayload(&DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ));
  if (dMsg != (void *)0) {
      DisseminationEngineImplP__m_bufBusy = TRUE;

      __nesc_hton_uint16(dMsg->key.nxdata, key);
      __nesc_hton_uint32(dMsg->seqno.nxdata, DisseminationEngineImplP__DisseminationCache__requestSeqno(key));

      if (__nesc_ntoh_uint32(dMsg->seqno.nxdata) != DISSEMINATION_SEQNO_UNKNOWN) {
          object = DisseminationEngineImplP__DisseminationCache__requestData(key, &objectSize);
          if (objectSize + sizeof(dissemination_message_t ) > 
          DisseminationEngineImplP__AMSend__maxPayloadLength()) {
              objectSize = DisseminationEngineImplP__AMSend__maxPayloadLength() - sizeof(dissemination_message_t );
            }
          memcpy(dMsg->data, object, objectSize);
        }
      DisseminationEngineImplP__AMSend__send(AM_BROADCAST_ADDR, 
      &DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ) + objectSize);
    }
}

# 277 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static void */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

# 59 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RFA1RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RFA1DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 286 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static uint8_t /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_header_t );
}

# 272 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static uint8_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

#line 67
static activemessage_header_t */*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

# 90 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 4) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 4) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 4;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 296 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static void /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RFA1RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_header_t ));
}

# 79 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

# 132 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RFA1RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

# 99 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 104
          __nesc_atomic_end(__nesc_atomic); 
#line 104
          return;
        }
        }
#line 106
      TaskletC__state = 1;
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/system/SimpleArbiterP.nc"
static error_t /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__reqResId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RFA1RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 130 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id)
#line 130
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      ;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
        {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
        }
#line 137
        __nesc_atomic_end(__nesc_atomic); }
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
    }
  else 
#line 142
    {
      ;
    }
}

# 92 "/opt/tinyos-main/src/tinyos-main/tos/system/BitVectorC.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    {
#line 94
      /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 268 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id)
#line 268
{
  uint32_t newTime;
  uint16_t rval;

  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period *= 2;
      if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period > 1024) {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1024;
        }
    }

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder;

  newTime = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period;
  newTime = newTime << (10 - 1);

  rval = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16() % (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << (10 - 1));
  newTime += rval;

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = ((uint32_t )/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << 10) - newTime;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time += newTime;
  ;
}

# 69 "/opt/tinyos-main/src/tinyos-main/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 209 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void )
#line 209
{
  uint8_t i;
  uint32_t lowest = 0;
  bool set = FALSE;





  uint32_t elapsed = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow() - /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0();

  for (i = 0; i < 1U; i++) {
      uint32_t timeRemaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 222
      ;

      if (timeRemaining == 0) {
          continue;
        }

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
        {
          if (!/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(i)) {
              if (timeRemaining > elapsed) {
                  ;
                  timeRemaining -= elapsed;
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time -= elapsed;
                }
              else {
                  ;
                  timeRemaining = 1;
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = 1;
                }
            }
          else {
              ;
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(i);
            }
        }
#line 245
        __nesc_atomic_end(__nesc_atomic); }
      if (!set) {
          lowest = timeRemaining;
          set = TRUE;
        }
      else {
#line 250
        if (timeRemaining < lowest) {
            lowest = timeRemaining;
          }
        }
    }
  if (set) {
      uint32_t timerVal = lowest;

#line 257
      ;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(timerVal);
    }
  else {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop();
    }
}

# 159 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 144
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 456 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static uint16_t LinkEstimatorP__LinkEstimator__getLinkQuality(am_addr_t neighbor)
#line 456
{
  uint8_t idx;

#line 458
  idx = LinkEstimatorP__findIdx(neighbor);
  if (idx == LinkEstimatorP__INVALID_RVAL) {
      return LinkEstimatorP__VERY_LARGE_EETX_VALUE;
    }
  else 
#line 461
    {
      if (LinkEstimatorP__NeighborTable[idx].flags & MATURE_ENTRY) {
          return LinkEstimatorP__NeighborTable[idx].eetx;
        }
      else 
#line 464
        {
          return LinkEstimatorP__VERY_LARGE_EETX_VALUE;
        }
    }
}

#line 190
static uint8_t LinkEstimatorP__findIdx(am_addr_t ll_addr)
#line 190
{
  uint8_t i;

#line 192
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
          if (LinkEstimatorP__NeighborTable[i].ll_addr == ll_addr) {
              return i;
            }
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}

#line 530
static error_t LinkEstimatorP__LinkEstimator__pinNeighbor(am_addr_t neighbor)
#line 530
{
  uint8_t nidx = LinkEstimatorP__findIdx(neighbor);

#line 532
  if (nidx == LinkEstimatorP__INVALID_RVAL) {
      return FAIL;
    }
  LinkEstimatorP__NeighborTable[nidx].flags |= PINNED_ENTRY;
  return SUCCESS;
}

# 185 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__chooseAdvertiseTime(void )
#line 185
{
  /*CtpP.Router*/CtpRoutingEngineP__0__t = /*CtpP.Router*/CtpRoutingEngineP__0__currentInterval;
  /*CtpP.Router*/CtpRoutingEngineP__0__t /= 2;
  /*CtpP.Router*/CtpRoutingEngineP__0__t += /*CtpP.Router*/CtpRoutingEngineP__0__Random__rand32() % /*CtpP.Router*/CtpRoutingEngineP__0__t;
  /*CtpP.Router*/CtpRoutingEngineP__0__tHasPassed = FALSE;
  /*CtpP.Router*/CtpRoutingEngineP__0__BeaconTimer__startOneShot(/*CtpP.Router*/CtpRoutingEngineP__0__t);
}

# 773 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static void *LinkEstimatorP__Packet__getPayload(message_t *msg, uint8_t len)
#line 773
{
  void *payload = LinkEstimatorP__SubPacket__getPayload(msg, len + sizeof(linkest_header_t ));

#line 775
  if (payload != (void *)0) {
      payload += sizeof(linkest_header_t );
    }
  return payload;
}

#line 420
static void LinkEstimatorP__print_packet(message_t *msg, uint8_t len)
#line 420
{
  uint8_t i;
  uint8_t *b;

  b = (uint8_t *)msg->data;
  for (i = 0; i < len; i++) 
    ;
  ;
}

# 546 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static error_t /*CtpP.Router*/CtpRoutingEngineP__0__CtpInfo__getEtx(uint16_t *etx)
#line 546
{
  if (etx == (void *)0) {
    return FAIL;
    }
#line 549
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == INVALID_ADDR) {
    return FAIL;
    }
#line 551
  if (/*CtpP.Router*/CtpRoutingEngineP__0__state_is_root == 1) {
      *etx = 0;
    }
  else 
#line 553
    {
      *etx = /*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.etx + /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__getLinkQuality(/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent);
    }
  return SUCCESS;
}

# 84 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/LruCtpMsgCacheP.nc"
static uint8_t /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__lookup(message_t *m)
#line 84
{
  uint8_t i;
  uint8_t idx;

#line 87
  for (i = 0; i < /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__count; i++) {
      idx = (i + /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__first) % 4;


      if (
#line 89
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getOrigin(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].origin && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getSequenceNumber(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].seqno && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getThl(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].thl && 
      /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__CtpPacket__getType(m) == /*CtpP.SentCacheP.CacheP*/LruCtpMsgCacheP__0__cache[idx].type) {
          break;
        }
    }
  return i;
}

# 799 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getSequenceNumber(message_t *msg)
#line 799
{
#line 799
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.nxdata);
}

#line 800
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getThl(message_t *msg)
#line 800
{
#line 800
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->thl.nxdata);
}

#line 796
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpPacket__getType(message_t *msg)
#line 796
{
#line 796
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->type.nxdata);
}

# 85 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static /*CtpP.SendQueueP*/QueueC__1__queue_t /*CtpP.SendQueueP*/QueueC__1__Queue__dequeue(void )
#line 85
{
  /*CtpP.SendQueueP*/QueueC__1__queue_t t = /*CtpP.SendQueueP*/QueueC__1__Queue__head();

#line 87
  ;
  if (!/*CtpP.SendQueueP*/QueueC__1__Queue__empty()) {
      /*CtpP.SendQueueP*/QueueC__1__head++;
      if (/*CtpP.SendQueueP*/QueueC__1__head == 16) {
#line 90
        /*CtpP.SendQueueP*/QueueC__1__head = 0;
        }
#line 91
      /*CtpP.SendQueueP*/QueueC__1__size--;
      /*CtpP.SendQueueP*/QueueC__1__printQueue();
    }
  return t;
}

# 103 "/opt/tinyos-main/src/tinyos-main/tos/system/PoolP.nc"
static error_t /*CtpP.MessagePoolP.PoolP*/PoolP__0__Pool__put(/*CtpP.MessagePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*CtpP.MessagePoolP.PoolP*/PoolP__0__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.MessagePoolP.PoolP*/PoolP__0__index + /*CtpP.MessagePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*CtpP.MessagePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

#line 103
static error_t /*CtpP.QEntryPoolP.PoolP*/PoolP__1__Pool__put(/*CtpP.QEntryPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*CtpP.QEntryPoolP.PoolP*/PoolP__1__free >= 12) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*CtpP.QEntryPoolP.PoolP*/PoolP__1__index + /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 12) {
          emptyIndex -= 12;
        }
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*CtpP.QEntryPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 779 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void */*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 779
{
  uint8_t *payload = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__getPayload(msg, len + sizeof(ctp_data_header_t ));

#line 781
  if (payload != (void *)0) {
      payload += sizeof(ctp_data_header_t );
    }
  return payload;
}

#line 767
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__payloadLength(message_t *msg)
#line 767
{
  return /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__payloadLength(msg) - sizeof(ctp_data_header_t );
}

#line 855
static message_t *
/*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(collection_id_t collectid, message_t *msg, void *payload, 
uint8_t len)
#line 857
{
  return msg;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Receive.nc"
static message_t * /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__receive(collection_id_t arg_0x40ecba40, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40ecba40) {
#line 78
    case 0xbb:
#line 78
      __nesc_result = RadioSubsystemP__DataCollectionReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0xcc:
#line 78
      __nesc_result = RadioSubsystemP__StatusCollectionReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0xdd:
#line 78
      __nesc_result = RadioSubsystemP__CommandCollectionReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 0xee:
#line 78
      __nesc_result = RadioSubsystemP__HistoryCollectionReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Receive__default__receive(arg_0x40ecba40, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 195 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static error_t SerialPacketForwarderP__ForwardData__setNow(data_packet_t val)
{
  error_t err;

  if (!SerialPacketForwarderP__enabled) {
    return EOFF;
    }
#line 201
  err = SerialPacketForwarderP__DataQueue__enqueue(val);
  if (err == SUCCESS) {
    SerialPacketForwarderP__forwardNextPacketTask__postTask();
    }
#line 204
  return err;
}

# 527 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubSend__sendDone(message_t *msg, error_t error)
#line 527
{
  fe_queue_entry_t *qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__head();

#line 529
  ;

  if (error != SUCCESS) {

      ;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL, 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_FAIL_WINDOW, SENDDONE_FAIL_OFFSET);
    }
  else {
#line 540
    if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ACK_PENDING) && !/*CtpP.Forwarder*/CtpForwardingEngineP__0__PacketAcknowledgements__wasAcked(msg)) {

        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txNoAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CtpInfo__recomputeRoutes();
        if (-- qe->retries) {
            ;
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_WAITACK, 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_NOACK_WINDOW, SENDDONE_NOACK_OFFSET);
          }
        else 
#line 551
          {

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
            /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);

            /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, FALSE);
          }
      }
    else {



        /*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__dequeue();
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__clearState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(SENDDONE_OK_WINDOW, SENDDONE_OK_OFFSET);
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__LinkEstimator__txAck(/*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(qe, msg, TRUE);
      }
    }
}

#line 790
static uint8_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(message_t *msg)
#line 790
{
#line 790
  return __nesc_ntoh_uint8(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->originSeqNo.nxdata);
}

#line 788
static am_addr_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(message_t *msg)
#line 788
{
#line 788
  return __nesc_ntoh_uint16(/*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg)->origin.nxdata);
}

#line 249
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__startRetxmitTimer(uint16_t window, uint16_t offset)
#line 249
{
  uint16_t r = /*CtpP.Forwarder*/CtpForwardingEngineP__0__Random__rand16();

#line 251
  r %= window;
  r += offset;
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__RetxmitTimer__startOneShot(r);
  ;
}

# 268 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static void LinkEstimatorP__updateDEETX(neighbor_table_entry_t *ne)
#line 268
{
  uint16_t estETX;

  if (ne->data_success == 0) {



      estETX = (ne->data_total - 1) * 10;
    }
  else 
#line 276
    {
      estETX = 10 * ne->data_total / ne->data_success - 10;
      ne->data_success = 0;
      ne->data_total = 0;
    }
  LinkEstimatorP__updateEETX(ne, estETX);
}

#line 262
static void LinkEstimatorP__updateEETX(neighbor_table_entry_t *ne, uint16_t newEst)
#line 262
{
  ne->eetx = (LinkEstimatorP__ALPHA * ne->eetx + (10 - LinkEstimatorP__ALPHA) * newEst + 5) / 10;
}

# 483 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__packetComplete(fe_queue_entry_t *qe, message_t *msg, bool success)
#line 483
{



  if (qe->client < /*CtpP.Forwarder*/CtpForwardingEngineP__0__CLIENT_COUNT) {
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[qe->client] = qe;
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__sendDone(qe->client, msg, SUCCESS);
      if (success) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENT_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else 
#line 496
        {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_SEND, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
    }
  else {
      if (success) {
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__SentCache__insert(qe->msg);
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_FWD_MSG, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      else {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEventMsg(NET_C_FE_SENDDONE_FAIL_ACK_FWD, 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getSequenceNumber(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionPacket__getOrigin(msg), 
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__AMPacket__destination(msg));
        }
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__MessagePool__put(qe->msg) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_MSGPOOL_ERR);
        }
#line 522
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__QEntryPool__put(qe) != SUCCESS) {
        /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_PUT_QEPOOL_ERR);
        }
    }
}

# 94 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static void /*CtpP.Forwarder*/CtpForwardingEngineP__0__SubPacket__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 127 "/home/alpsayin/tinyos_workspace/SensorAppC/src/RadioSubsystemP.nc"
static void RadioSubsystemP__CommandValue__changed(void )
{
  command_packet_t receivedCommandPacket;

#line 130
  RadioSubsystemP__receiveBusy = TRUE;
  if (RadioSubsystemP__commandDisseminationEnabled) 
    {
      receivedCommandPacket = *RadioSubsystemP__CommandValue__get();
      RadioSubsystemP__NotifyRadioCommand__notify(receivedCommandPacket);
    }
  RadioSubsystemP__receiveBusy = FALSE;
}

# 44 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbitratedReadC.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x407fd990){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x407fd990) {
#line 88
    case /*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data1.Adc*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data2.Adc*/AdcReadClientC__1__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data3.Adc*/AdcReadClientC__2__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data4.Adc*/AdcReadClientC__3__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data5.Adc*/AdcReadClientC__4__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data6.Adc*/AdcReadClientC__5__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data7.Adc*/AdcReadClientC__6__HAL_ID);
#line 88
      break;
#line 88
    case /*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__ID:
#line 88
      __nesc_result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*SensorSubsystemC.Data8.Adc*/AdcReadClientC__7__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x407fd990);
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
# 77 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 75 "/opt/tinyos-main/src/tinyos-main/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 125 "/home/alpsayin/tinyos_workspace/SensorAppC/src/ControllerP.nc"
static error_t ControllerP__SensorNotification__enable(void )
#line 125
{

  error_t err;
  static data_packet_t SampleDataBuffer[2];

  uint8_t i_Packet_Number;
  uint8_t i_SetDataToRadio;



  i_Packet_Number = !2;
  i_Packet_Number = ControllerP__GetData__getArray(SampleDataBuffer, 2);

  if (i_Packet_Number == 0) {
    return SUCCESS;
    }
#line 140
  while (SUCCESS != (err = ControllerP__SetRadioHistory__sendArray(SampleDataBuffer, i_Packet_Number))) 
    {
    }
#line 155
  return SUCCESS;
}

# 85 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static /*SensorC.SensorBuffer*/QueueC__0__queue_t /*SensorC.SensorBuffer*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*SensorC.SensorBuffer*/QueueC__0__queue_t t = /*SensorC.SensorBuffer*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*SensorC.SensorBuffer*/QueueC__0__Queue__empty()) {
      /*SensorC.SensorBuffer*/QueueC__0__head++;
      if (/*SensorC.SensorBuffer*/QueueC__0__head == 2) {
#line 90
        /*SensorC.SensorBuffer*/QueueC__0__head = 0;
        }
#line 91
      /*SensorC.SensorBuffer*/QueueC__0__size--;
      /*SensorC.SensorBuffer*/QueueC__0__printQueue();
    }
  return t;
}

# 294 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpForwardingEngineP.nc"
static error_t /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__send(uint8_t client, message_t *msg, uint8_t len)
#line 294
{
  ctp_data_header_t *hdr;
  fe_queue_entry_t *qe;

#line 297
  ;
  if (!/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__ROUTING_ON)) {
#line 298
      return EOFF;
    }
#line 299
  if (len > /*CtpP.Forwarder*/CtpForwardingEngineP__0__Send__maxPayloadLength(client)) {
#line 299
      return ESIZE;
    }
  /*CtpP.Forwarder*/CtpForwardingEngineP__0__Packet__setPayloadLength(msg, len);
  hdr = /*CtpP.Forwarder*/CtpForwardingEngineP__0__getHeader(msg);
  __nesc_hton_uint16(hdr->origin.nxdata, 2);
  __nesc_hton_uint8(hdr->originSeqNo.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP__0__seqno++);
  __nesc_hton_uint8(hdr->type.nxdata, /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionId__fetch(client));
  __nesc_hton_uint8(hdr->thl.nxdata, 0);

  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client] == (void *)0) {
      ;
      return EBUSY;
    }

  qe = /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client];
  qe->msg = msg;
  qe->client = client;
  qe->retries = MAX_RETRIES;
  ;
  if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__SendQueue__enqueue(qe) == SUCCESS) {
      if (/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__RADIO_ON) && !/*CtpP.Forwarder*/CtpForwardingEngineP__0__hasState(/*CtpP.Forwarder*/CtpForwardingEngineP__0__SENDING)) {
          ;
          /*CtpP.Forwarder*/CtpForwardingEngineP__0__sendTask__postTask();
        }
      /*CtpP.Forwarder*/CtpForwardingEngineP__0__clientPtrs[client] = (void *)0;
      return SUCCESS;
    }
  else {
      ;




      /*CtpP.Forwarder*/CtpForwardingEngineP__0__CollectionDebug__logEvent(NET_C_FE_SEND_QUEUE_FULL);


      return FAIL;
    }
}

# 97 "/opt/tinyos-main/src/tinyos-main/tos/system/QueueC.nc"
static error_t /*CtpP.SendQueueP*/QueueC__1__Queue__enqueue(/*CtpP.SendQueueP*/QueueC__1__queue_t newVal)
#line 97
{
  if (/*CtpP.SendQueueP*/QueueC__1__Queue__size() < /*CtpP.SendQueueP*/QueueC__1__Queue__maxSize()) {
      ;
      /*CtpP.SendQueueP*/QueueC__1__queue[/*CtpP.SendQueueP*/QueueC__1__tail] = newVal;
      /*CtpP.SendQueueP*/QueueC__1__tail++;
      if (/*CtpP.SendQueueP*/QueueC__1__tail == 16) {
#line 102
        /*CtpP.SendQueueP*/QueueC__1__tail = 0;
        }
#line 103
      /*CtpP.SendQueueP*/QueueC__1__size++;
      /*CtpP.SendQueueP*/QueueC__1__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 154 "/opt/tinyos-main/src/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*TimerMilliP.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 215 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x40dd69d8, message_t * msg, error_t error){
#line 100
  switch (arg_0x40dd69d8) {
#line 100
    case 0U:
#line 100
      /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 2U:
#line 100
      /*CtpP.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 3U:
#line 100
      /*CtpP.SendControl.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x40dd69d8, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 174 "/opt/tinyos-main/src/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 4) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 76 "/opt/tinyos-main/src/tinyos-main/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static error_t /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RFA1RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 406 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static void LinkEstimatorP__print_neighbor_table(void )
#line 406
{
  uint8_t i;
  neighbor_table_entry_t *ne;

#line 409
  for (i = 0; i < 10; i++) {
      ne = &LinkEstimatorP__NeighborTable[i];
      if (ne->flags & VALID_ENTRY) {
          ;
        }
    }
}

#line 371
static void LinkEstimatorP__updateNeighborEntryIdx(uint8_t idx, uint8_t seq)
#line 371
{
  uint8_t packetGap;

  if (LinkEstimatorP__NeighborTable[idx].flags & INIT_ENTRY) {
      ;
      LinkEstimatorP__NeighborTable[idx].lastseq = seq;
      LinkEstimatorP__NeighborTable[idx].flags &= ~INIT_ENTRY;
    }

  packetGap = seq - LinkEstimatorP__NeighborTable[idx].lastseq;
  ;

  LinkEstimatorP__NeighborTable[idx].lastseq = seq;
  LinkEstimatorP__NeighborTable[idx].rcvcnt++;
  LinkEstimatorP__NeighborTable[idx].inage = LinkEstimatorP__MAX_AGE;
  if (packetGap > 0) {
      LinkEstimatorP__NeighborTable[idx].failcnt += packetGap - 1;
    }
  if (packetGap > LinkEstimatorP__MAX_PKT_GAP) {
      LinkEstimatorP__NeighborTable[idx].failcnt = 0;
      LinkEstimatorP__NeighborTable[idx].rcvcnt = 1;
      LinkEstimatorP__NeighborTable[idx].outage = 0;
      LinkEstimatorP__NeighborTable[idx].outquality = 0;
      LinkEstimatorP__NeighborTable[idx].inquality = 0;
    }

  if (LinkEstimatorP__NeighborTable[idx].rcvcnt >= LinkEstimatorP__BLQ_PKT_WINDOW) {
      LinkEstimatorP__updateNeighborTableEst(LinkEstimatorP__NeighborTable[idx].ll_addr);
    }
}

#line 203
static uint8_t LinkEstimatorP__findEmptyNeighborIdx(void )
#line 203
{
  uint8_t i;

#line 205
  for (i = 0; i < 10; i++) {
      if (LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY) {
        }
      else 
#line 207
        {
          return i;
        }
    }
  return LinkEstimatorP__INVALID_RVAL;
}

#line 174
static void LinkEstimatorP__initNeighborIdx(uint8_t i, am_addr_t ll_addr)
#line 174
{
  neighbor_table_entry_t *ne;

#line 176
  ne = &LinkEstimatorP__NeighborTable[i];
  ne->ll_addr = ll_addr;
  ne->lastseq = 0;
  ne->rcvcnt = 0;
  ne->failcnt = 0;
  ne->flags = INIT_ENTRY | VALID_ENTRY;
  ne->inage = LinkEstimatorP__MAX_AGE;
  ne->outage = LinkEstimatorP__MAX_AGE;
  ne->inquality = 0;
  ne->outquality = 0;
  ne->eetx = 0;
}

#line 216
static uint8_t LinkEstimatorP__findWorstNeighborIdx(uint8_t thresholdEETX)
#line 216
{
  uint8_t i;
#line 217
  uint8_t worstNeighborIdx;
  uint16_t worstEETX;
#line 218
  uint16_t thisEETX;

  worstNeighborIdx = LinkEstimatorP__INVALID_RVAL;
  worstEETX = 0;
  for (i = 0; i < 10; i++) {
      if (!(LinkEstimatorP__NeighborTable[i].flags & VALID_ENTRY)) {
          ;
          continue;
        }
      if (!(LinkEstimatorP__NeighborTable[i].flags & MATURE_ENTRY)) {
          ;
          continue;
        }
      if (LinkEstimatorP__NeighborTable[i].flags & PINNED_ENTRY) {
          ;
          continue;
        }
      thisEETX = LinkEstimatorP__NeighborTable[i].eetx;
      if (thisEETX >= worstEETX) {
          worstNeighborIdx = i;
          worstEETX = thisEETX;
        }
    }
  if (worstEETX >= thresholdEETX) {
      return worstNeighborIdx;
    }
  else 
#line 243
    {
      return LinkEstimatorP__INVALID_RVAL;
    }
}

# 517 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static void /*CtpP.Router*/CtpRoutingEngineP__0__LinkEstimator__evicted(am_addr_t neighbor)
#line 517
{
  /*CtpP.Router*/CtpRoutingEngineP__0__routingTableEvict(neighbor);
  ;
  if (/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo.parent == neighbor) {
      routeInfoInit(&/*CtpP.Router*/CtpRoutingEngineP__0__routeInfo);
      /*CtpP.Router*/CtpRoutingEngineP__0__justEvicted = TRUE;
      /*CtpP.Router*/CtpRoutingEngineP__0__updateRouteTask__postTask();
    }
}

#line 700
static uint8_t /*CtpP.Router*/CtpRoutingEngineP__0__routingTableFind(am_addr_t neighbor)
#line 700
{
  uint8_t i;

#line 702
  if (neighbor == INVALID_ADDR) {
    return /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive;
    }
#line 704
  for (i = 0; i < /*CtpP.Router*/CtpRoutingEngineP__0__routingTableActive; i++) {
      if (/*CtpP.Router*/CtpRoutingEngineP__0__routingTable[i].neighbor == neighbor) {
        break;
        }
    }
#line 708
  return i;
}

# 78 "/opt/tinyos-main/src/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t LinkEstimatorP__SubPacket__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RFA1RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 784 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/ctp/CtpRoutingEngineP.nc"
static bool /*CtpP.Router*/CtpRoutingEngineP__0__CtpRoutingPacket__getOption(message_t *msg, ctp_options_t opt)
#line 784
{
  return (__nesc_ntoh_uint8(/*CtpP.Router*/CtpRoutingEngineP__0__getHeader(msg)->options.nxdata) & opt) == opt ? TRUE : FALSE;
}

# 749 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/le/LinkEstimatorP.nc"
static uint8_t LinkEstimatorP__Packet__payloadLength(message_t *msg)
#line 749
{
  linkest_header_t *hdr;

#line 751
  hdr = LinkEstimatorP__getHeader(msg);
  return LinkEstimatorP__SubPacket__payloadLength(msg)
   - sizeof(linkest_header_t )
   - sizeof(linkest_footer_t ) * (NUM_ENTRIES_FLAG & __nesc_ntoh_uint8(hdr->flags.nxdata));
}

# 106 "/opt/tinyos-main/src/tinyos-main/tos/lib/net/drip/DisseminatorP.nc"
static void /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno)
#line 107
{
  memcpy(&/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__valueCache, data, size < sizeof(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t ) ? size : sizeof(/*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__t ));
  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__seqno = newSeqno;




  /*RadioSubsystemC.DissCommand.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

# 111 "/opt/tinyos-main/src/tinyos-main/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 82 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
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

# 82 "/home/alpsayin/tinyos_workspace/SensorAppC/src/SerialPacketForwarderP.nc"
static error_t SerialPacketForwarderP__CommandNotification__enable(void )
{

  if (!SerialPacketForwarderP__enabled) {
    return EOFF;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 88
    {
      SerialPacketForwarderP__commandReceptionEnabled = TRUE;
    }
#line 90
    __nesc_atomic_end(__nesc_atomic); }
  SerialPacketForwarderP__started = FALSE;
  return SUCCESS;
}

# 122 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_29(void )
#line 122
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 740 "/opt/tinyos-main/src/tinyos-main/tos/chips/atm128rfa1/radio/RFA1DriverLayerP.nc"
__attribute((signal))   void __vector_59(void )
#line 740
{

  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 743
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_START;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_60(void )
#line 752
{

  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 755
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_RX_END;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_63(void )
#line 764
{
  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 766
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_TX_END;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_57(void )
#line 775
{
  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 777
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_PLL_LOCK;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_58(void )
#line 786
{
}



__attribute((signal))   void __vector_64(void )
#line 791
{
  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 793
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_AWAKE;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_61(void )
#line 802
{
  for (; 0; ) ;
  /* atomic removed: atomic calls only */
#line 804
  {
    RFA1DriverLayerP__radioIrq |= RFA1DriverLayerP__IRQ_CCA_ED_DONE;
  }
  RFA1DriverLayerP__Tasklet__schedule();
}




__attribute((signal))   void __vector_62(void )
#line 813
{
}

