/********************ADC*********************/

/***************Connections******************/

/********	LCD control --- PORT 2 **********/
/********	LCD data ----- PORT 0  **********/
/********    ADC control ---- PORT 3   *********/
/********	ADC data ----- PORT 1 ***********/



#include<reg51.h>

char arr4[12]="DIGITAL O/P ";

	sbit ALE=P1^2;
	sbit SOC=P1^1;
	sbit OE=P1^0;
	sbit EOC=P1^3;
	sbit SET0=P1^4;
	sbit SET1=P1^5;
	sbit SET2=P1^6;
	sbit CLOCK=P1^7;
	sbit rs=P2^0;
	sbit e=P2^1;

unsigned char adc_val;
unsigned char temp[5];

	void instwrt(void);
	void datawrt(void);
	void int_lcd(void);
	void clock(void);
	void delay(int x);

void main(void)
{ 
  int i;
  char dummy;
  int_lcd();
  for(i=0;i<12;i++)
   {
    P0=arr4[i];
	datawrt();
	delay(2);
   }
   while(1)
   {
    SET0=1;
    SET1=1;                               //for the select line
    SET2=1;
    ALE=1;
    SOC=1;
    clock();
    ALE=0;  
    SOC=0;
    clock();
    while(!EOC);
    OE=1;
    adc_val=P3;
    dummy=P3;
   
    for(i=0;i<3;i++)
    {
	 temp[i]=adc_val%10;
	 adc_val /=10;
    } 
    P0=0x8C;
    instwrt();
    delay(2);
    for(i=2;i>=0;i--)
    {
     P0=temp[i]+0x30;
	 datawrt();
	 delay(2);
    }
    
  
   }
 }

void instwrt(void)
{
rs=0;
e=1;
e=0;
}
void datawrt(void)
{
rs=1;
e=1;
e=0;
}
void int_lcd(void)
{
P0=0x38;
instwrt();
delay(2);
P0=0x01;
instwrt();
delay(2);
P0=0x06;
instwrt();
delay(2);
P0=0x0c;
instwrt();
delay(2);
P0=0x80;
instwrt();
delay(2);
}

void delay(int x)
{
 int i,j;
 for(j=0;j<x;j++)
  for(i=0;i<10000;i++);
}
void clock(void)
{
 int a,b;
 for(b=0;b<=1000;b++)
 {
  for(a=0;a<30;a++);
  CLOCK=~CLOCK;
 }
}