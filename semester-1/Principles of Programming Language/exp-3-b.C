#include <stdio.h>
int main()
{
    int a, b, temp = 0;
    printf("Enter two integers \n");
    scanf("%d%d", &a, &b);
    printf("Before Swapping \n First variable = %d \nSecond variable = %d \n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping \n First variable = %d \n Second variable = %d \n", a, b);
    return 0;
}
