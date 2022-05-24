#include <stdio.h>
#include<malloc.h>
int main()
{
    // Define two pointer array to store the input data
    int *arr1 = NULL;
    int *arr2 = NULL;
    // Take the input from the user
    int length1, length2;
    printf("\nEnter the length of the first array: ");
    scanf("%d", &length1);
    printf("\nEnter the length of the second array: ");
    scanf("%d", &length2);
    // Allocate memory for the array
    arr1 = (int *)malloc(sizeof(int) * length1);
    arr2 = (int *)malloc(sizeof(int) * length2);
    // Take the input from the user
    printf("\nEnter the elements of the first array: ");
    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the elements of the second array: ");
    for (int i = 0; i < length2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // Print the input data
    printf("\nThe first array is: ");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nThe second array is: ");
    for (int i = 0; i < length2; i++)
    {
        printf("%d ", arr2[i]);
    }

    
    
    return 0;

}