#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    Node *next;
} *front =NULL,*rear=NULL;

void insert(int val){
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->info=val;
    ptr->next=NULL;
    if(front==NULL){
        front=rear=ptr;
    }
    else{
        rear->next=ptr;
        rear=ptr;
    }
}

void deletion(){
    struct Node *ptr;
    if(front==NULL){
        printf("list is underflow");
    }
    else{
        ptr=front;
    
    if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    printf("deleted is %d\n",ptr->info);
    free(ptr);
    }
}
void display(){
    struct Node *ptr;
    ptr=front;
    if(front==NULL){
        printf("list is overflow");
    }
    else{
        while(ptr!=NULL){
            printf("%d\n",ptr->info);
            ptr=ptr->next;
        }
    }
}

int main(){
    int choice;
    do
    {
        printf("enter one for insert\n");
        printf("enter 2 for deletion\n");
        printf("enter 3 for display\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: int x;
        printf("enter value of x\n");
        scanf("%d",&x);
        insert(x);
            break;
        case 2: 
        deletion();   
        break; 
        case 3:
        display();
        break;
        default:
        printf("invalid choice");
        }
    } while (choice>=1&&choice<=3);
    
    return 0;
}
