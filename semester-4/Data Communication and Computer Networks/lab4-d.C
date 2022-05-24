#include<stdio.h>
#include<string.h>
int main()
{
    // add two  strings
   
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("\nThe first string is: %s", str1);
    printf("\nThe second string is: %s", str2);
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    char str3[100];
    int i = 0;
    for (i = 0; i < length1; i++)
    {
        str3[i] = str1[i];
    }
    for (int j = 0; j < length2; j++)
    {
        str3[i] = str2[j];
        i++;
    }
    str3[i] = '\0';
    printf("\nThe concatenated string is: %s", str3);


    return 0;

}