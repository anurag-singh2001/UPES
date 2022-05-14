#include <stdio.h>
int main()
{
    int n, num, sum, rem;
    printf("enter number");
    scanf("%d", &n);
    num = n;
    sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem * rem * rem;
        num = num / 10;
    }
    if (n == sum)
    {
        printf("%d is an Armstrong number\n", n);
    }
    else
    {
        printf("%d is an not a Armstrong number\n", n);
    }

    return 0;
}
