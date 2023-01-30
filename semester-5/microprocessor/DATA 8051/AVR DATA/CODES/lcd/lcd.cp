#line 1 "C:/Users/AMAN/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/lcd/lcd.c"
#line 1 "c:/users/aman/desktop/vniet nagpur/universal board_ new  board codes/universal board avr/avr_microc_basic_16/lcd/lcd.h"
void cmd_lcd (unsigned char dat)
{
  PORTD =dat;
  PORTB.F0 =0;
  PORTB.F1 =1;
 delay_us(100);
  PORTB.F1 =0;
 delay_us(100);
}

void data_lcd (unsigned char dat)
{
  PORTD =dat;
  PORTB.F0 =1;
  PORTB.F1 =1;
 delay_us(100);
  PORTB.F1 =0;
 delay_us(100);
}

void init_lcd()
{

 cmd_lcd (0x38);
 delay_ms(50);
 cmd_lcd (0x0c);
 delay_ms(1);
 cmd_lcd (0x06);
 delay_ms(1);
 cmd_lcd (0x01);
 delay_ms(5);
}

void string_lcd(unsigned char *str)
{
 while(*str!='\0')
 {
 data_lcd(*str);
 str++;
 }
}
#line 10 "C:/Users/AMAN/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/lcd/lcd.c"
void main()
{
char i;
 DDRB =0XFF;
 DDRD =0XFF;
init_lcd();
while(1)
 {
 cmd_lcd(0x80);
 string_lcd("LCD DISPLAY");
 cmd_lcd(0xc0);
 string_lcd("** AVR ** ");

 for(i=0;i<5;i++)
 {
 cmd_lcd(0x1C);
 delay_ms(1000);
 }
 for(i=0;i<5;i++)
 {
 cmd_lcd(0x18);
 delay_ms(1000);
 }
 }
}
