#include <stdio.h>
int main()
{
    int a, s;
    printf("enter a");
    scanf("%d", &a);
    s = 0;
    while (a > 0)
    {
        s = s + (a % 10);
        a = a / 10;
    }
    printf("sum is %d", s);
    return 0;
}
