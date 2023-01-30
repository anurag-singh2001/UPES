#define DAC_DIR DDRD
#define DAC     PORTD

void main()
{
int i,j;
DAC_DIR = 0xFF;

while(1)
{
for(i=0;i<255;i++)
{
 	DAC = i;
 	for(j=0;j<2;j++);
 }
for(i=255;i>0;i--)
{
 	DAC = i;
 	for(j=0;j<2;j++);
 }
}
}
