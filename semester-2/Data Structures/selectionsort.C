#include <stdio.h>

int main()
{
    int a[10], n, key, j;
    printf("Number of elements you want");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element.");
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("\n\nAfter sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}