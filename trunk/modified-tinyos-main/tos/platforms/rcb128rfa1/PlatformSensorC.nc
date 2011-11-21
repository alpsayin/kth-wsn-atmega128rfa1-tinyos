configuration PlatformSensorC {
  
  provides interface Read<uint16_t>;
  provides interface Set<uint8_t> as SetChannel;
}
implementation {

  components new AdcReadClientC() as Adc;
  components PlatformSensorP;
  
  Read = Adc.Read;
  SetChannel = PlatformSensorP.SetChannel;

  Adc.Atm128AdcConfig -> PlatformSensorP.Atm128AdcConfig;

}
