#line 1 "C:/Users/AMAN/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/led/led.c"




void main()
{
unsigned char i=0;
 DDRD  = 0xFF;
 PORTD =0x00;

while(1)
{

  PORTD =0x0f;
 delay_ms(1000);
  PORTD =0xf0;
 delay_ms(1000);

  PORTD =0xaa;
 delay_ms(1000);
  PORTD =0x55;
 delay_ms(1000);

  PORTD =0x01;
 delay_ms(1000);
 for(i=0;i<=7;i++)
 {
  PORTD = PORTD <<1;
 delay_ms(1000);
 }

  PORTD =0x80;
 delay_ms(1000);
 for(i=0;i<=7;i++)
 {
  PORTD = PORTD >>1;
 delay_ms(1000);
 }

  PORTD =0x01;
 delay_ms(1000);
 for(i=0;i<=7;i++)
 {
  PORTD = PORTD <<1 | 0x01;
 delay_ms(1000);
 }

  PORTD =0x80;
 delay_ms(1000);
 for(i=0;i<=7;i++)
 {
  PORTD = PORTD >>1 | 0x80;
 delay_ms(1000);
 }

}
}
