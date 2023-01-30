#line 1 "C:/Users/Prateek/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/DC motor/DC motor.c"





void main()
{
char i;
 DDRD  = 0xFF;

 while(1)
 {
  PORTD.F0 =1; PORTD.F1 =0;
 delay_ms(4000);
  PORTD.F0 =0; PORTD.F1 =0;
 delay_ms(1000);
  PORTD.F0 =0; PORTD.F1 =1;
 delay_ms(4000);
  PORTD.F0 =0; PORTD.F1 =0;
 delay_ms(1000);
 }
}
