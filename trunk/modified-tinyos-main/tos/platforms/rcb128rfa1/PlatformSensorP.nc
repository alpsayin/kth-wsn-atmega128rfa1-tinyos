#include "Atm128Adc.h"
#include "PlatformSensorChannel.h"

module PlatformSensorP
{
  provides interface Atm128AdcConfig;

  provides interface Set<uint8_t> as SetChannel;

}
implementation
{
  uint8_t channel = ATM128_ADC_INT_TEMP;
  async command uint8_t Atm128AdcConfig.getChannel()
  {
    return channel;
  }

  async command uint8_t Atm128AdcConfig.getRefVoltage()
  {
    return ATM128_ADC_VREF_AVCC;
  }

  async command uint8_t Atm128AdcConfig.getPrescaler()
  {
    return ATM128_ADC_PRESCALE_128;
  }

  command void SetChannel.set(uint8_t val)
  {
	atomic {
		switch(val)
		{
			case ATM128_ADC_INT_TEMP:
			case ATM128_ADC_SNGL_ADC0:
			case ATM128_ADC_SNGL_ADC1:
			case ATM128_ADC_SNGL_ADC2:
			case ATM128_ADC_SNGL_ADC3:
			case ATM128_ADC_SNGL_ADC4:
			case ATM128_ADC_SNGL_ADC5:
			case ATM128_ADC_SNGL_ADC6:
			case ATM128_ADC_SNGL_ADC7:
				channel = val;
				break;
			default:
				channel = ATM128_ADC_INT_TEMP;
		}
	}
  }

}
