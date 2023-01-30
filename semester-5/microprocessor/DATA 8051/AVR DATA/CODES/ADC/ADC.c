/*
  LCD CONTROL PORTA
  LCD DATA PORTC
  ADC DATA PORTD
  ADC CONTROL PORTB
*/


#define RS    PORTA.F0
#define E     PORTA.F1

#define ALE   PORTB.F2
#define SOC   PORTB.F1
#define OE    PORTB.F0
#define EOC   PINB.F3
#define SET0  PORTB.F4
#define SET1  PORTB.F5
#define SET2  PORTB.F6
#define CLOCK PORTB.F7

void cmd_lcd (char dat)    // function to write command at lcd port
{
        PORTC=dat;
        RS=0;                          //clear RS (ie. RS=0) to write command
        E=1;                          // send  H-L pulse        at E pin
        delay_ms(20);
        E=0;
}

void data_lcd (char dat)        // function to write data at lcd port
{
        PORTC=dat;
        RS=1;                                // set RS=1 to write DATA
        E=1;                          // send  H-L pulse        at E pin
        delay_ms(20);
        E=0;
}

void init_lcd()                                 // function to initialize the LCD at power on time
{
        cmd_lcd (0x38);                         // 2x16 display select
        cmd_lcd (0x0e);                         // display on cursor off command
        cmd_lcd (0x06);                         // automatic cursor movement to right
        cmd_lcd (0x01);                         // lcd clear command
        cmd_lcd (0x80);                                 // first row first coloumn select command
}

void string_lcd(char *str)           // function to display string to lcd
{
         while(*str!='\0')                                  // '\0' is null char as last char of pointer is null
         {
                 data_lcd(*str);
                 str++;
         }
}

void number_lcd(int num)      // function to display 3 digit decimal value to lcd
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
  CLOCK=~CLOCK;
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

SOC=ALE=EOC=1;
OE=0;
init_lcd();
string_lcd("ADC check");
while(1)
{
    cmd_lcd(0xc0);
    SET0=0;        SET1=0;        SET2=0;  //channel selection "000"
    ALE=1;    SOC=1;    clock();
    ALE=0;    SOC=0;    clock();
    while(EOC==0);
    OE = 1;
   number_lcd(PIND);
 }
}