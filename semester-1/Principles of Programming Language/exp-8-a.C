#include <stdio.h>
int main()
{
    int arr[3][3], i, j, sum, a;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("sum of %d row =%d\n", i + 1, sum);
    }
    for (j = 0; j < 3; j++)
    {
        a = 0;
        printf("\n");
        for (i = 0; i < 3; i++)
        {
            a = a + arr[i][j];
        }
        printf("sum of %d column =%d\n", j + 1, a);
    }
    return 0;
}
