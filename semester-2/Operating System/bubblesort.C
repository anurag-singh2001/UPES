/*
Name: Anurag Singh
Batch: B9
SAP ID: 500083382 
*/
#include<stdio.h>

int main()
{

int a[10],b[10],c[10],d[10],n;
printf("Number of process you want");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("enter program no.");
    scanf("%d",&a[i]);
    printf("enter burst time.");
    scanf("%d",&b[i]);
    printf("enter arrival time.");
    scanf("%d",&c[i]);
}

for (int i = 0; i < n-1; i++)
{
    for(int j=0; j< n-1-i; j++)
    {
        if(c[j]>c[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            int temp1=b[j];
            b[j]=b[j+1];
            b[j+1]=temp1;
            int temp2=c[j];
            c[j]=c[j+1];
            c[j+1]=temp2;

        }
    }
}
printf("\n\nAfter sorting\n");
for (int i = 0; i < n; i++)
{   
    printf("program no.");
    printf("%d\n",a[i]);
    printf("burst time.");
    printf("%d\n",b[i]);
    printf("arrival time.");
    printf("%d\n",c[i]);
}


    return 0;
}
