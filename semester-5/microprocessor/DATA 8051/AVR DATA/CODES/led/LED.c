#define LED_DIR DDRD
#define LED     PORTD


void main()
{
unsigned char i=0;
LED_DIR = 0xFF;         // output port
LED=0x00;

while(1)
{
/////////////////////////////////////////////////
	LED=0x0f;
	delay_ms(1000);
	LED=0xf0;
        delay_ms(1000);
///////////////////////////////////////////////odd even
	LED=0xaa;
        delay_ms(1000);
	LED=0x55;
        delay_ms(1000);
//////////////////////////////////////////////left shift
	LED=0x01;
        delay_ms(1000);
	for(i=0;i<=7;i++)
	{
		LED=LED<<1;
                delay_ms(1000);
	}
//////////////////////////////////////////////////right shift
	LED=0x80;
        delay_ms(1000);
	for(i=0;i<=7;i++)
	{
		LED=LED>>1;
                delay_ms(1000);
	}
/////////////////////////////////////////////////rotate left
	LED=0x01;
        delay_ms(1000);
	for(i=0;i<=7;i++)
	{
		LED=LED<<1 | 0x01;
                delay_ms(1000);
	}
//////////////////////////////////////////////////rotate right
	LED=0x80;
        delay_ms(1000);
	for(i=0;i<=7;i++)
	{
		LED=LED>>1 | 0x80;
                delay_ms(1000);
	}
/////////////////////////////////////////////////////
}
}