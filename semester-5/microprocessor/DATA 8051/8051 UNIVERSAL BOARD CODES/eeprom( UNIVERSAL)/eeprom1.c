					 

/* CONNECT P0---Lcd control///
/*  P2-----LCd data/////
/*  P1L--- Eprom sec.*/



#include<reg51.h>
#include<intrins.h>

typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned int  uint;

#define		TIMER_RELOAD (-921)
#define		port_delay()	 _nop_(), _nop_(), _nop_(), _nop_()
#define		AVG	10

sbit  LRS		=   P0 ^ 0;
sbit  LEN		=   P0 ^ 1;
sbit SCL		=	P1 ^ 5;	
sbit SDA		=	P1 ^ 4;

uint count;
uchar rdata,edata;

void timer0(void)
interrupt 1 using 1
{
	count++;
	TH0 = (uchar)(TIMER_RELOAD>>8);
	TL0 = (uchar)TIMER_RELOAD;
}

void delay(uint n)
{
	n = count + n;
   while (n != count);
}

void dispstr(uchar *str, uchar stcol, uchar encol) 
{
   uint q;
	if(stcol <= 15)
		P2 = 0x80 + stcol;
	else
		P2 = 0xB0 + stcol;
	LRS = 0;
	LEN = 1;
    LEN = 0;
    delay(1);
	LRS = 1;
	q=0;
	for(; stcol <= encol; stcol++)
	{
		if(stcol == 16)
		{
			P2 = 0xB0 + stcol;
			LRS = 0;
			LEN = 1;
		   LEN = 0;
			delay(1);
			LRS = 1;
		}
		P2 = str[q];
		q++;
		LEN = 1;
	   LEN = 0;
		delay(1);
	}
}
 

void dispnum(uint no, uchar stcol, uchar encol) 
{
	uchar temp[5];
	uchar i,k;
	for (i = 0; i < 5; i++)
	{
		temp[i] = no % 10;
		no /= 10;
	}
	if(stcol <= 15)
		P2 = 0x80 + stcol;
	else
		P2 = 0xB0 + stcol;
	LRS = 0;
	LEN = 1;
    LEN = 0;
    delay(1);
	LRS = 1;
	i = k = 4;
	for(; stcol <= encol; stcol++)
	{
		if( k == 1)
		{
			k = 200;
			dispstr(".",stcol,stcol);
		}
		else
		{
			P2 = temp[i] + 0x30;
			i--;
			k--;
			LEN = 1;
		    LEN = 0;
			delay(1);
		}
	}
}

void clrlcd()
{
	LRS = 0;
	P2 = 0x01;
	LEN = 1;
	LEN = 0;
	delay(6);
}

void start(void)
{
   SDA = 1 ;
   _nop_() , _nop_() , _nop_() ;
	SCL = 1;
   _nop_() , _nop_() , _nop_() ;
   SDA = 0 ;
   _nop_() , _nop_() , _nop_() ;
   SCL = 0 ;
   _nop_() , _nop_() , _nop_() ;
}

void stop(void)
{
   SDA = 0 ;
   _nop_() , _nop_() , _nop_() ;
   SCL = 1;
   _nop_() , _nop_() , _nop_() ;
   SDA = 1 ;
   _nop_() , _nop_() , _nop_() ;
   SCL = 0 ;
   _nop_() , _nop_() , _nop_() ;
}

void clock(void)
{
   _nop_() ; _nop_() ; _nop_() ;
   SCL = 1;
   _nop_() ; _nop_() ; _nop_() ;
   SCL = 0 ;
   _nop_() ; _nop_() ; _nop_() ;
}

void nack(void)
{
    SDA = 1 ;
    clock() ;
} 

void opdat(uchar dat)
{
   uchar i ;
   _nop_() , _nop_() , _nop_() ;
   for ( i = 0 ; i < 8 ; i++ )
   {
      if ( ( dat >> ( 7 - i ) ) & 0x01 )	SDA = 1 ; 
      else	 							  	SDA = 0 ;
      clock() ;
   }
}

void waitack(void)
{
   SDA = 1 ;
   SCL = 1;
   _nop_() , _nop_() , _nop_() ;
   SCL = 0 ;
   _nop_() , _nop_() , _nop_() ;
}


uchar getdat(void)
{
   uchar i , dat;
   SDA = 1;
   _nop_() , _nop_() , _nop_();
   for ( i = 0 ; i < 8 ; i++ ) 
   {
	   SCL = 1;
      dat = ( ( ( dat << 1 ) & 0xfe ) | SDA );
	   _nop_() , _nop_() , _nop_();
      SCL = 0;
 	   _nop_() , _nop_() , _nop_();
   }
   return dat;
}

uchar i2c_read(uchar addr)
{
	start();		//dummy write start
	opdat(0xa0);	//send dev addr
	waitack();

	opdat(addr);
	waitack();

    start();		//start read
    opdat(0xa1);    //give dev adddr or with for read 
    waitack();		//operation coz lsb gives r|w
                                            
    rdata = getdat();
    nack() ;
    stop() ;

   return(rdata);
}
   
void i2c_write(uchar dat, uchar addr)
{                   	
	start();			
							
	opdat(0xa0);	//dummy write start
	waitack();		//send dev addr
	
	opdat(addr);
	waitack();

	opdat(dat);		//write data
	waitack();

	stop();
}

void io_open(void)
{
	LEN = 0;
	TMOD = 0x21;
	IE = 0x92; //1001 0010
	SCON = 0x50; //0101 0000
	REN = 1;
	TL0 = (uchar)TIMER_RELOAD;
	TH0 = (uchar)TIMER_RELOAD >> 8;
	TH1 = TL1 = 0xFA;
	TR0 = 1;
	TR1 = 1;
}

void initlcd(void)
{
	LEN = 0;
	LRS = 0;
	delay(20);

   P2 = 0x30;
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);
  
   P2 = 0x30;
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x30; 
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x38;  //funtion set	
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x0c8;    //display off
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x01;  //clear display;
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x06; //entry mode set
   LEN = 1;
   delay(1);
   LEN = 0;
   delay(6);

   P2 = 0x0c; //display  on
   LEN = 1;
	delay(1);
   LEN = 0;
   delay(6);

}

void main(void)
{
	uchar i;

	io_open();
	initlcd();
	clrlcd ();
	dispstr("     ADVANCE    ",0,15);

	for(i = 0; i <200;i++)
	{
		i2c_write(i,i);
		delay(50);
	}
	i = 0;

	clrlcd();
	while(1)
	{
		edata = i2c_read(i);
		dispnum(edata,16,21);
		i++;
		dispstr("     ADVANCE    ",0,15);
		delay(2000);
		clrlcd();
	}
}


