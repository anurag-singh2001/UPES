#include <stdio.h>

int main()
{
    // design a program for error detection using c program
    
    int data[10]={1,0,1,1,0,1};
    int noise[10]={0,0,0,0,0,1};
    int result[10];

    // binary addition of data and noise
   int carry=0;
    for( int i = 0; i < 6; i++ )
    {
        int bitA = i < 6 && data[i] ? 1 : 0;    
        int bitB = i < 6 && noise[i] ? 1 : 0;     
        int sum = bitA + bitB + carry;            
        result[i] = sum == 1 || sum == 3 ? 1 : 0; 
        carry = sum > 1 ? 1 : 0;                  
    }
     result[ 6 ] = carry;
     printf("\n result:");
     for(int i=0;i<6;i++)
     {
         printf("%d",result[6-i]);
     }
     for(int i=0;i<6;i++){
         if(result[i]!=data[i]){
             printf("\nError detected at bit %d",i);
             break;
         }
     }
    

    return 0;


}