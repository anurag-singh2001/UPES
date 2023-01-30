#line 1 "C:/Users/Prateek/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/stepper motor/stepper motor.c"






void main()
{
char i;
 DDRD  = 0xFF;

while(1)
{
 for(i=0;i<12;i++)
 {
  PORTD.F0 =1; PORTD.F3 = PORTD.F1 = PORTD.F2 =0;
 delay_ms(1000);
  PORTD.F3 =1; PORTD.F0 = PORTD.F1 = PORTD.F2 =0;
 delay_ms(1000);
  PORTD.F1 =1; PORTD.F0 = PORTD.F3 = PORTD.F2 =0;
 delay_ms(1000);
  PORTD.F0 = PORTD.F3 = PORTD.F1 =0; PORTD.F2 =1;
 delay_ms(1000);
 }
 for(i=0;i<12;i++)
 {
  PORTD.F0 = PORTD.F3 = PORTD.F1 =0; PORTD.F2 =1;
 delay_ms(1000);
  PORTD.F1 =1; PORTD.F0 = PORTD.F3 = PORTD.F2 =0;
 delay_ms(1000);
  PORTD.F3 =1; PORTD.F0 = PORTD.F1 = PORTD.F2 =0;
 delay_ms(1000);
  PORTD.F0 =1; PORTD.F3 = PORTD.F1 = PORTD.F2 =0;
 delay_ms(1000);
 }
}
}
