///////////////////// pin defined ///////////////////
#define LCD_DIR   DDRD
#define CTRL_DIR  DDRB
#define LCD       PORTD
#define RS        PORTB.F0
#define E         PORTB.F1
/////////////////////////////////////////////////////
#include"lcd.h"

void main()
{
char i;
CTRL_DIR=0XFF;
LCD_DIR=0XFF;
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