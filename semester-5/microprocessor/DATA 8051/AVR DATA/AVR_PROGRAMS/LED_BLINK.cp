#line 1 "C:/Users/amit/OneDrive/Desktop/New folder/LED_BLINK.c"
char a;
void main(){
DDRB =0Xff;
while(1){
PORTB= 0X80;
delay_ms(100);
PORTB= 0X00;
delay_ms(100);
}}
