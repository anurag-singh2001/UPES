#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

int main()
{
    char *ptr1, *ptr2;
    char temp;
    char input[MAXSIZE];
    char stuff[MAXSIZE];
    char destuff[MAXSIZE];

    int c = 0;

    printf("enter the input character string (0's & 1's only):\n");
    scanf("%s", input);

    ptr1 = input;
    ptr2 = stuff;

    while (*ptr1 != '\0')
    {
        if (*ptr1 == '0')
        {
           *ptr2 = *ptr1;
            ptr2++;
            ptr1++;
        }
        else
        {
            while (*ptr1 == '1' && c != 5)
            {
                c++;
                *ptr2 = *ptr1;
                ptr2++;
                ptr1++;
            }

            if (c == 5)
            {
                *ptr2 = '0';
                ptr2++;
            }
            c = 0;
        }
    }
    *ptr2 = '\0';
    printf("\nthe stuffed character string is");
    printf("\n%s", stuff);

    ptr1 = stuff;
    ptr2 = destuff;
    while (*ptr1 != '\0')
    {
        if (*ptr1 == '0')
        {
            *ptr2 = *ptr1;
            ptr2++;
            ptr1++;
        }
        else
        {
            while (*ptr1 == '1' && c != 5)
            {
                c++;
                *ptr2 = *ptr1;
                ptr2++;
                ptr1++;
            }
            if (c == 5)
            {
                ptr1++;
            }
            c = 0;
        }
    }
    *ptr2 = '\0';
    printf("\nthe destuffed character string is");
    printf("\n%s\n", destuff);
    return 0;
}