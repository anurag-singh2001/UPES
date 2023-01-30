#line 1 "C:/Users/amit/OneDrive/Desktop/New folder/LED_BLINK_USING_FOR_LOOP.c"
char a;
void main(){
DDRB =0Xff;
for(a=0;a<5;a++)
{
PORTB= 0X80;
delay_ms(100);
PORTB= 0X00;
delay_ms(100);
}
}
