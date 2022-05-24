#include <stdio.h>
int baud(float c, float N, int r)
{
    return c * N * (1 / r);
}

int main()
{
    int r;
    float N, c, S;
    printf("\n enter case factor");
    scanf("%f", &c);
    printf("\n enter ratio");
    scanf("%d", &r);
    printf("\n enter data rate ");
    scanf("%f", &N);
    S = baud(c, N, r);
    printf("%f kbauds", S / 1000);


    return 0;
}
