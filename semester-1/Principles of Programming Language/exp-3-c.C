#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number");
    scanf("%d %d", &a, &b);
    printf("Before Swapping \n First variable = %d\n Second variable = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping \n First variable = %d \nSecond variable = %d \n", a, b);
    return 0;
}