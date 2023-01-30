#define MOTOR_DIR DDRD
#define m1 PORTD.F0                    //control bits of dc motor
#define m2 PORTD.F1


void main()
{
char i;
MOTOR_DIR = 0xFF;

  while(1)
  {
        m1=1;m2=0;
        delay_ms(4000);
        m1=0;m2=0;
        delay_ms(1000);
        m1=0;m2=1;
        delay_ms(4000);
        m1=0;m2=0;
        delay_ms(1000);
  }
}