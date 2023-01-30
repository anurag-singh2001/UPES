#define SEG_DATA_DIR DDRC
#define SEG_CTRL_DIR DDRA
#define SEG_DATA PORTC
#define SEG_CTRL PORTA
unsigned char SEV_SEG[10]={0XBF,0X86,0XDB,0XCF,0XE6,0XED,0xfd,0X87,0XFF,0XEF};
unsigned char a,b,c,d,e;
int main()
{
  SEG_DATA_DIR=0xff;
  SEG_CTRL_DIR=0xff;
  while(1)
  {
  for(d=0;d<10;d++)
  {
    for(c=0;c<10;c++)
    {
    for(b=0;b<10;b++)
    {
    for(a=0;a<10;a++)
    {
    for(e=0;e<10;e++)
    {
    SEG_CTRL=0x01;
    SEG_DATA=SEV_SEG[a];
    delay_ms(1);
    
    SEG_CTRL=0x02;
    SEG_DATA=SEV_SEG[b];
    delay_ms(1);

    SEG_CTRL=0x04;
    SEG_DATA=SEV_SEG[c];
    delay_ms(5);
    
    SEG_CTRL=0x08;
    SEG_DATA=SEV_SEG[d];
    delay_ms(2);
    
    SEG_CTRL=0x10;
    SEG_DATA=SEV_SEG[e];
    delay_ms(2);
    }}}}}}}