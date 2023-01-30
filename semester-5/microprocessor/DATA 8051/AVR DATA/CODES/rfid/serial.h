//////////////////////////////////////////////////
void init_serial(unsigned long Baud_Rate)
{
   unsigned int ubrr_value;
   ubrr_value = F_CPU/(Baud_Rate*16)-1;
   //Set Baud rate
   UBRRL = ubrr_value;
   UBRRH = (ubrr_value>>8);
   UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
   //Enable The receiver and transmitter
   UCSRB=(1<<RXEN)|(1<<TXEN);
}
////////////////////////////////////////////////
void trans_serial(char data1)
{
   while(!(UCSRA & (1<<UDRE)));
   UDR=data1;
}
void string_serial(char *str)
{
  while(*str!='\0')
  {
     trans_serial(*str);
     str++;
     delay_ms(1);
  }
}
////////////////////////////////////////////////
unsigned char rec_serial()
{
   while(!(UCSRA & (1<<RXC)));
   return UDR;
}
///////////////////////////////////////////////