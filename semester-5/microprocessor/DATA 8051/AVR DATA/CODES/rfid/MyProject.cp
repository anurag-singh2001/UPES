#line 1 "C:/Users/Prateek/Desktop/VNIT WIRELESS CODES/AVR WIRELESS CODES/ATMEGA 16/rfid/MyProject.c"
#line 1 "c:/users/prateek/desktop/vnit wireless codes/avr wireless codes/atmega 16/rfid/lcd.h"
void cmd_lcd (unsigned char dat)
{
  PORTA =dat;
  PORTC.F0 =0;
  PORTC.F1 =1;
 delay_us(100);
  PORTC.F1 =0;
 delay_us(100);
}

void data_lcd (unsigned char dat)
{
  PORTA =dat;
  PORTC.F0 =1;
  PORTC.F1 =1;
 delay_us(100);
  PORTC.F1 =0;
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
#line 1 "c:/users/prateek/desktop/vnit wireless codes/avr wireless codes/atmega 16/rfid/serial.h"

void init_serial(unsigned long Baud_Rate)
{
 unsigned int ubrr_value;
 ubrr_value =  8000000UL /(Baud_Rate*16)-1;

 UBRRL = ubrr_value;
 UBRRH = (ubrr_value>>8);
 UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);

 UCSRB=(1<<RXEN)|(1<<TXEN);
}

void trans_serial(char data1)
{
 while(!(UCSRA & (1<<UDRE)));
 UDR=data1;
}
void string_serial(char *str)
{
 while(*str!='\0')
 {
 trans_serial(*str);
 str++;
 delay_ms(1);
 }
}

unsigned char rec_serial()
{
 while(!(UCSRA & (1<<RXC)));
 return UDR;
}
#line 12 "C:/Users/Prateek/Desktop/VNIT WIRELESS CODES/AVR WIRELESS CODES/ATMEGA 16/rfid/MyProject.c"
int i;
char temp[15];

void main()
{
  DDRC =0Xff;
  DDRA =0Xff;
 init_lcd();
 string_lcd("RFID test code");
 delay_ms(1000);
 while(1)
 {
 init_serial(9600);
 for(i=0;i<12;i++)
 {
 temp[i]=rec_serial();
 }
 cmd_lcd(0xc0);
 for(i=0;i<12;i++)
 {
 data_lcd(temp[i]);
 }
 delay_ms(1000);
 }
}
