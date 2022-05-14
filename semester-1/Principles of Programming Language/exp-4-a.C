#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three number");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is largest", a);
    if (b >= a && b >= c)
        printf("%d is largest", b);
    if (c >= b && c >= a)
        printf("%d is largest", c);
    return 0;
}