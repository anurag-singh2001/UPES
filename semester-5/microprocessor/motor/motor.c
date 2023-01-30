#include<reg51.h>
delay()
{
    for(int i=0;i<=2000;i++);//1000 fast///3000 medium//6000  slow
}

void clockwise() {
    P0=0x01;
    delay();

    P0=0x02;
    delay();
}

void anticlockwise() {
    P0=0x08;
    delay();

    P0=0x04;
    delay();
}

void main()
{
    while(1)
    {
        P0=0x01;
				delay();

				P0=0x02;
				delay();

    };
}