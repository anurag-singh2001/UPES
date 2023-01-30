#line 1 "E:/Embedded codes/AVR/AVR Basic Code/AVR interfacing codes/BLDC Interfce.c"




void main()
{
unsigned char i=0;
 DDRC  = 0xFF;
 PORTC =0x00;

while(1)
{

for(i=0;i<100;i++)
{
  PORTC =0xFF;
 delay_us(1000);
  PORTC =0x00;
 delay_us(19000);
}

for(i=0;i<100;i++)
{
  PORTC =0xFF;
 delay_us(1110);
  PORTC =0x00;
 delay_us(18890);
}

for(i=0;i<100;i++)
{
  PORTC =0xFF;
 delay_us(1130);
  PORTC =0x00;
 delay_us(18870);
}
}
}
