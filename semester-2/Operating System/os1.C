#include<stdio.h>
int main(){

    int arr[10],n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array element");
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        arr[i+1]=arr[i]+arr[i+1];
    }

    for(int i=0;i<4;i++){
        printf("%d \t",arr[i]);
    }
    
    
    return 0;

}