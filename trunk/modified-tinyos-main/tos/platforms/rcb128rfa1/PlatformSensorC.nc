generic configuration PlatformSensorC(uint8_t channel) {
  
  provides interface Read<uint16_t>;
//  provides interface Set<uint8_t> as SetChannel;
}
implementation {

  components new AdcReadClientC() as Adc;
  components new PlatformSensorP(channel);
  
  Read = Adc.Read;
//  SetChannel = PlatformSensorP.SetChannel;

  Adc.Atm128AdcConfig -> PlatformSensorP.Atm128AdcConfig;

}
