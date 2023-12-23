#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    struct node *next;
    int data;
}st;

st *top=NULL;

void push(int data){
    st *newnode = malloc(sizeof(st));
    if(newnode==NULL){
        printf("stack overflow");
        exit(1);
    }
    newnode ->data= data;
    newnode-> next=NULL;
    newnode ->next=top;
    top = newnode;
}

void print(){
    st *ptr=top;
    while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    int choice,data;
    while(1){
        printf("1. push\n");
        printf("2. print\n");
        printf("3. quit");
        printf("\nenter your choice \n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("enter the element to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;

            case 2: print(); break;
            case 3: exit(1); break;
            default:
            printf("invalid input\n");
            break;
        }
    }
    return 0;
}