#include<stdio.h>
#include<stdlib.h>
#define size 10

int arr[size];
void init()
{
    int i;
    for (i=0; i<size;i++)
    arr[i]=-1;
}
void insert()
{
    int value;
    printf("Enter a value to insert into the Hash Table\n");
    scanf("%d",&value);
    int key=value%size;
    if (arr[key]==-1)
    {
        arr[key]=value;
        printf("%d inserted at arr[%d]\n",value,key);
    }
    else
    {
        printf("Collision: arr[%d] has element %d already\n",key,arr[key]);
        printf("Unable to insert %d\n",value);
    }
}
void del()
{
    int value;
    printf("\n Enter the value to delete from Hash table:");
    scanf("%d",&value);
    int key=value%size;
    if (arr[key]==value)
    {
        arr[key]=-1;
        printf("%d value deleted from arr[%d]\n",value,key);
    }
    else
    {
        printf("%d not present in Hash Table\n",value);
    }
}
void search()
{
    int value;
    printf("\nEnter a value to be searched in Hash Table:\n");
    scanf("%d",&value);
    int key=value%size;
    if (arr[key]==value)
    {
        printf("%d value's search found in: arr[%d]\n",value,key);
    }
    else
    {
        printf("Search not found\n");
    }
}
void display()
{
    int i;
    for (i=0;i<size;i++)
    printf("arr[%d]=%d\n",i,arr[i]);
}
int main()
{
    init();
    int choice;
    printf("HASH TABLE OPERATIONS USING ARRAY\n");
    printf("\t 1. INSERT\n\t 2. DELETE\n\t 3. DISPLAY\n\t 4. SEARCH\n\t 5. EXIT\n");
    
    do
    {
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            insert();
            break;
        }
        case 2:
        {
            del();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            search();
            break;
        }
        case 5:
        {
            printf("See you again!BYE");
            break;
        }
        default:
        {
            printf("Please enter a valid choice:\n");
        }
        }
        
    } while (choice!=5);
    return 0;
}
