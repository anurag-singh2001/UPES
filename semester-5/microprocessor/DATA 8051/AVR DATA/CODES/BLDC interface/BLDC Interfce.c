#define LED_DIR DDRC
#define LED     PORTC


void main()
{
unsigned char i=0;
LED_DIR = 0xFF;         // output port
LED=0x00;

while(1)
{
/////////////////////////////////////////////////
for(i=0;i<100;i++)
{
       LED=0xFF;
        delay_us(1000);
        LED=0x00;
        delay_us(19000);
}
///////////////////////////////////////////////
for(i=0;i<100;i++)
{
        LED=0xFF;
        delay_us(1110);
        LED=0x00;
        delay_us(18890);
}
///////////////////////////////////////////////
for(i=0;i<100;i++)
{
        LED=0xFF;
        delay_us(1130);
        LED=0x00;
        delay_us(18870);
}
}
}