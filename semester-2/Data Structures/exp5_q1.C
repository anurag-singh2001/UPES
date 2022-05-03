#include<stdio.h>
#include<stdlib.h>
#define size 100

int q[10];
int rear=-1;
int front=-1;

void insert(){
    int num;
    printf("enter inserted element");
    scanf("%d",&num);
    if(rear==size-1){
        printf("list is overflow");
    }
    else{
        if(front==-1){
            front=rear=0;
        }
        else{
            rear++;
        }
        q[rear]=num;
    }
}

void deletion(){
    if(front==-1){
        printf("list is underflow");
    }
    else{
        int p=q[front];
        if(front==rear){
            front=rear=-1;
        }
        else{
            front++;
        }
        printf("\ndeleted element is=%d",p);

    }
}
void display(){
    if(front==-1){
        printf("list is empty");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("\n%d",q[i]);
        }
    }
}

int main(){
    int choice;
    do
    {
        printf("\nenter 1 for insert\n");
        printf("enter 2 for deletion\n");
        printf("enter 3 for display\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: insert();
            break;
        case 2: deletion();
            break;
        case 3: display();
             break;    
        default:
            printf("invaid choice");
        }
    
    } while (choice>=1&&choice<=3);
 return 0;   
}
