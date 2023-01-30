 ////relay buzzer------Port P0//////

#include<reg51.h>
void delay()
{
int j;
for(j=0;j<20000;j++);
}
void main()
{ char k;
while(1)
{

P0=0x01;
delay();
for(k=0;k<7;k++)
{
P0=P0<<1;
delay();
}
}
}
