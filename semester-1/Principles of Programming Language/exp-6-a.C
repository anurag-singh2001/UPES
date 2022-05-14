#include <stdio.h>
void armstrong(int a)
{
    int n, d, s = 0;
    n = a;
    while (n != 0)
    {
        d = n % 10;
        s = s + d * d * d;
        n = n / 10;
    }
    if (s == a)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
}
void coprime(int a)
{
    int n, hcf, d, i, r = 0;
    n = a;
    while (n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0 && r % i == 0)
        {
            hcf = i;
        }
    }
    // Making Decision
    if (hcf == 1)
    {
        printf("%d and %d are CO-PRIME NUMBERS.\n", a, r);
    }
    else
    {
        printf("%d and %d are NOT CO-PRIME NUMBERS.\n", a, r);
    }
}
long int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int main()
{
    long int factorial(int a);
    int a;
    printf("enter a number");
    scanf("%d", &a);
    armstrong(a);
    coprime(a);
    printf("factorial of %d = %ld", a, factorial(a));
    return 0;
}
