#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    Node *next;
}* top=NULL;
void push(int n){
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->info=n;
    ptr->next=top;
    top=ptr;
}
void pop(){
    struct Node *ptr;
    if(top==NULL){
        printf("list is empty");
    }
    else{
        ptr=top;
        top=top->next;
        printf("\ndeleted element is = %d\n",ptr->info);
        free(ptr);
    }
}

void display(){
    struct Node *ptr;
    ptr=top;
    if(top==NULL){
        printf("list is empty");
    }
    else{
        while(ptr!=NULL){
            printf("%d",ptr->info);
            ptr=ptr->next;
        }
        ptr=ptr->next;
    }
}
int main(){
    int choice;
    do
    {
        printf("enter 1 for push\n");
        printf("enter 2 for pop\n");
        printf("enter 3 for display\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: int x;
        printf("enter value of x");
        scanf("%d",&x);
        push(x);
        break;

        case 2: 
        pop();
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
