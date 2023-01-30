#line 1 "C:/Users/Prateek/Desktop/VNIET NAGPUR/UNIVERSAL BOARD_ new  board codes/UNIVERSAL BOARD AVR/AVR_MICROC_BASIC_16/DAC/MyProject.c"



void main()
{
int i,j;
 DDRD  = 0xFF;

while(1)
{
for(i=0;i<255;i++)
{
  PORTD  = i;
 for(j=0;j<2;j++);
 }
for(i=255;i>0;i--)
{
  PORTD  = i;
 for(j=0;j<2;j++);
 }
}
}
