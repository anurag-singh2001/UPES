///////////////////// pin defined ///////////////////
#define LCD_DIR   DDRA
#define CTRL_DIR  DDRC
#define LCD       PORTA
#define RS        PORTC.F0
#define E         PORTC.F1
/////////////////////////////////////////////////////
#define F_CPU 8000000UL
#include"lcd.h"
#include"serial.h"

int i;
char temp[15];

void main()
{
  CTRL_DIR=0Xff;
  LCD_DIR=0Xff;
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