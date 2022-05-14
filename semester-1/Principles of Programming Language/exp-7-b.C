#include <stdio.h>
void delete (int a1[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        a1[i] = a1[i + 1];
    }
    size = size - 1;
}
void add(int a1[], int size, int index, int element)
{
    for (int i = size - 1; i > index; i--)
        a1[i] = a1[i - 1];
    a1[index] = element;
    printf("\nArray after addition\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a1[i]);
}
int main()
{
    int a1[] = {10, 50, 30, 40, 20};
    int size = 5, index = 2, element = 60;
    printf("Array before deletion\n");
    for (int i = 0; i < size; i++)
        printf("%d ", a1[i]);
    delete(a1, size, index);
    printf("\nArray after deletion\n");
    for (int i = 0; i < size - 1; i++)
        printf("%d ", a1[i]);
    add(a1, size, index, element);

    return 0;
}