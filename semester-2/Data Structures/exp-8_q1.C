#include<stdio.h>
#define size 10
int arr[size];
void init()
{
    int i;
    for (i=0;i<size;i++)
    arr[i]=-1;
}
void insert(int value)
{
    int key=value%size;
    if (arr[key]==-1)
    {
        arr[key]=value;
        printf("%d inserted at arr[%d]\n",value,key);
    }
    else
    {
        printf("Collision : arr[%d] has element %d already!\n",key,arr[key]);
        printf("Unable to insert %d\n",value);
    }
}
void print()
{
    int i;
    for (i=0;i<size;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
}

int main()
{
    init();
    insert(500082636);
    insert(500085671);
    insert(500088781);
    insert(500083636);
    insert(500087899);
    insert(500085678);
    insert(500083356);
    
    printf("Hash Table\n");
    print();
    printf("\n");
    return 0;
}
