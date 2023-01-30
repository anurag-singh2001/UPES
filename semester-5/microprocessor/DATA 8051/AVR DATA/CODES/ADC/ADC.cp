#line 1 "D:/0000000000000FINALCODES2014/FINAL PRODUCT CODES 2014/EMBEDDED SYSTEM/UNIVERSAL BOARD/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/ADC/ADC.c"
#line 21 "D:/0000000000000FINALCODES2014/FINAL PRODUCT CODES 2014/EMBEDDED SYSTEM/UNIVERSAL BOARD/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/ADC/ADC.c"
void cmd_lcd (char dat)
{
 PORTC=dat;
  PORTA.F0 =0;
  PORTA.F1 =1;
 delay_ms(20);
  PORTA.F1 =0;
}

void data_lcd (char dat)
{
 PORTC=dat;
  PORTA.F0 =1;
  PORTA.F1 =1;
 delay_ms(20);
  PORTA.F1 =0;
}

void init_lcd()
{
 cmd_lcd (0x38);
 cmd_lcd (0x0e);
 cmd_lcd (0x06);
 cmd_lcd (0x01);
 cmd_lcd (0x80);
}

void string_lcd(char *str)
{
 while(*str!='\0')
 {
 data_lcd(*str);
 str++;
 }
}

void number_lcd(int num)
{
data_lcd( (num / 100) + 0x30);
data_lcd( (num / 10)%10 + 0x30);
data_lcd( (num % 10) + 0x30);
}

void clock(void)
{
 int a,b;
 for(b=0;b<=3000;b++)
 {
  PORTB.F7 =~ PORTB.F7 ;
 delay_us(100);
 }
}

void main(void)
{
unsigned char x;
DDRA=0XFF;
DDRB=0XF7;
DDRC=0XFF;
DDRD=0X00;
PORTD=0XFF;
PORTB=0X00;

 PORTB.F1 = PORTB.F2 = PINB.F3 =1;
 PORTB.F0 =0;
init_lcd();
string_lcd("ADC check");
while(1)
{
 cmd_lcd(0xc0);
  PORTB.F4 =0;  PORTB.F5 =0;  PORTB.F6 =0;
  PORTB.F2 =1;  PORTB.F1 =1; clock();
  PORTB.F2 =0;  PORTB.F1 =0; clock();
 while( PINB.F3 ==0);
  PORTB.F0  = 1;
 number_lcd(PIND);
 }
}
