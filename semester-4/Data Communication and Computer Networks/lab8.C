#include<stdio.h>
#include <stdlib.h>
#include <conio.h>  
#include <time.h>
#include<math.h>
int main()
{
    srand(time(NULL)); 
    int k=0,kmax=15,r,tb;
    int x=rand() % 2;
    printf("%d",x);

    if(x!=0)
    {
        k=k+1;
    }

    if(k>=kmax)
        exit(0);
     else
     {
         r=pow(2,k)-1;
         tb=(rand()%k)*1.5;

     }   

     


    return 0;
}