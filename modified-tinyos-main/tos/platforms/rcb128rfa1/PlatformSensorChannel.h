#include "Atm128Adc.h"


#define Sensor_Channel_0 ATM128_ADC_SNGL_ADC0		//Analog input channel 0-7
#define Sensor_Channel_1 ATM128_ADC_SNGL_ADC1		//mapped to GPIO PF0-PF7
#define Sensor_Channel_2 ATM128_ADC_SNGL_ADC2
#define Sensor_Channel_3 ATM128_ADC_SNGL_ADC3
#define Sensor_Channel_4 ATM128_ADC_SNGL_ADC4
#define Sensor_Channel_5 ATM128_ADC_SNGL_ADC5
#define Sensor_Channel_6 ATM128_ADC_SNGL_ADC6
#define Sensor_Channel_7 ATM128_ADC_SNGL_ADC7

#define Sensor_Channel_T ATM128_ADC_INT_TEMP		//internal temperature sensor output


#define Sensor_Channel_01_10x  ATM128_ADC_DIFF_ADC10_10x
#define Sensor_Channel_01_200x ATM128_ADC_DIFF_ADC10_200x
#define Sensor_Channel_23_10x  ATM128_ADC_DIFF_ADC32_10x
#define Sensor_Channel_23_200x ATM128_ADC_DIFF_ADC32_200x

#define Sensor_Channel_GND ATM128_ADC_SNGL_GND

