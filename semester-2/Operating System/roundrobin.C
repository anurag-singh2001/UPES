#include <stdio.h>

int main()
{

    int p[10], bt[10], qt=2, n, l;
    float c;
    printf("Number of process you want");
     scanf("%d", &n);
    // printf("enter time quantum");
    //scanf("%d", &qt);
    for (int i = 0; i < n; i++)
    {
        printf("enter program no.");
        scanf("%d", &p[i]);
        printf("enter burst time.");
        scanf("%d", &bt[i]);
    }
    l = bt[0];
    for (int i = 0; i < n; i++)
    {
        if (bt[i] > l)
        {
            l = bt[i];
        }
    }
    printf("\nlargest burst time: %d\n", l);
    c=l/qt;
    printf("total number of cycles: %f",c);

    
    return 0;

}
