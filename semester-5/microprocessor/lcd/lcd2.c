 // CONTROL PORT 2
//DATA PORT 0
				  #include<reg51.h>

sbit RS	=	P2 ^ 0;
sbit E	=	P2 ^ 1;

void instwrt(void)
{
	RS=0;
	E=1;
	E=0;
}

void datawrt(void)
{
	RS=1;
	E=1;
	E=0;
}


void delay(void)
{
	unsigned int i;
	for(i=0;i<=30000;i++)
		{}
}


void main(void)
{
while(1)
{	
P0=0x38;
	instwrt();
	delay();
	P0=0x0E;
	instwrt();
	delay();
	P0=0x01;
	instwrt();
	delay();
	P0=0x06;
	instwrt();
	delay();
	P0=0x83;
	instwrt();
	delay();
	P0='K';
	datawrt();
	delay();
	P0='A';
	datawrt();
	delay();
	P0='R';
	datawrt();
	delay();
	P0='A';
	datawrt();
	delay();
	P0='N';
	datawrt();
	delay();
	/*shift();
	delay();*/
	P0=0xC3;
	instwrt();
	delay();



		}
}


