#include<stdio.h>
#include<stdlib.h>
#define n 100
void push(int stack[],int &top , int num){
    if(top==n-1){
        printf("overflow");
    }
    else{
        top++;
        stack[top]=num;
    }
}

int pop(int stack[], int &top){
    if(top==-1){
        return -999;
    }
    else{
        int p=stack[top];
        top--;
        return p;
    }
}
void display(int stack[],int &top){
    int i;
    if(top==-1){
        printf("stack is overflow");
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){

    int choice,st[n],top=-1;
    do{
        printf("enter 1 for push\n");
        printf("enter 2 for pop\n");
        printf("enter 3 for display\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: int sno;
            printf("enter element\n");
            scanf("%d",&sno);
            push(st,top,sno);
            break;
            case 2: int p;
            p= pop(st,top);
            if(p==-999){
                printf("list is underflow\n");
            }
            else{
                printf("deleted element is= %d\n",p);
            }
            break;
            case 3: display(st,top);
            break;
            default: printf("invalid choice");


        }

    }while(choice>=1&&choice<=3);


return 0;
}
