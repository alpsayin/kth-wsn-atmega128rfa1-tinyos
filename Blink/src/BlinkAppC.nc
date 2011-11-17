

/**
 * Blink is a basic application that toggles a mote's LED periodically.
 * It does so by starting a Timer that fires every second. It uses the
 * OSKI TimerMilli service to achieve this goal.
 *
 * @author tinyos-help@millennium.berkeley.edu
 **/

configuration BlinkAppC
{
}
implementation
{
  components MainC, BlinkC, LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new TimerMilliC() as Timer2;
  components ApplicationSerialC;
  components PushButtonC;
  components McuSleepC;
  
  BlinkC.Uart1Init -> ApplicationSerialC;
  BlinkC.Uart1Byte -> ApplicationSerialC;
  BlinkC.Uart1Stream -> ApplicationSerialC;
  BlinkC.Boot -> MainC.Boot;
  BlinkC.Timer0 -> Timer0;
  BlinkC.Timer1 -> Timer1;
  BlinkC.Timer2 -> Timer2;
  BlinkC.Leds -> LedsC;
  BlinkC.PushButton -> PushButtonC;
}

