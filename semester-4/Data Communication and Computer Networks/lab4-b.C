#include<stdio.h>
#include<malloc.h>
int main()
{
    // find element in pointer array
    int *arr1 = NULL;
    // Take the input from the user
    int length;
    printf("\nEnter the length of the first array: ");
    scanf("%d", &length);
    // Allocate memory for the array
    arr1 = (int *)malloc(sizeof(int) * length);
    // Take the input from the user
    printf("\nEnter the elements of the first array: ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // search element
    int element;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &element);
    int flag = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr1[i] == element)
        {
            printf("\nElement found at index %d", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\nElement not found");
    }

    
    
    return 0;

}