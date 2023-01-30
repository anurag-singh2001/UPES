#define MOTOR_DIR DDRD
#define m1 PORTD.F0                    //control bits of stepper motor
#define m2 PORTD.F3
#define m3 PORTD.F1
#define m4 PORTD.F2

void main()
{
char i;
MOTOR_DIR = 0xFF;

while(1)
{
  for(i=0;i<12;i++)
  {
      m1=1;m2=m3=m4=0;
      delay_ms(1000);
      m2=1;m1=m3=m4=0;
      delay_ms(1000);
      m3=1;m1=m2=m4=0;
      delay_ms(1000);
      m1=m2=m3=0;m4=1;
      delay_ms(1000);
  }                                       //motor will move anticlockwise
  for(i=0;i<12;i++)
  {
      m1=m2=m3=0;m4=1;
      delay_ms(1000);
      m3=1;m1=m2=m4=0;
      delay_ms(1000);
      m2=1;m1=m3=m4=0;
      delay_ms(1000);
      m1=1;m2=m3=m4=0;
      delay_ms(1000);
  }
}
}