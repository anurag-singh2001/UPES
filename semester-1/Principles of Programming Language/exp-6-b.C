#include <stdio.h>
#include <string.h>
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
int triangle_area(int base, int height)
{
    int a = 0.5 * base * height;
    return a;
}
float *remainder(int a, int b)
{
    float rem;
    rem = a % b;
    printf("\nRemainder=%f", rem);
}
void main()
{

    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1,
           num2);
    swap(&num1, &num2); /* Call by Reference to function swap */
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1,
           num2);
    printf("\nArea of triangle is %d", triangle_area(num1, num2));
    remainder(num1, num2);
}
