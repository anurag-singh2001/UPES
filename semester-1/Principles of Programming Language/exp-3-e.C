#include <stdio.h>
int main()
{
    int ndays, year, month, days;
    printf("Enter the number of days\n");
    scanf("%d", &ndays);
    year = ndays / 365;
    month = (ndays % 365) / 30;
    days = (ndays % 365) % 30;
    printf("%d is equivalent to %d years, %d month and %d remaining days /n",
           ndays, year, month, days);
    return 0;
}
