#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    struct node *next;
    int data;
}st;

st *top=NULL;

int isempty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

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
int pop(){
    st* temp;
    temp=top;
    if (isempty()){
        printf("stack underflow.");
        exit(1);
    }
    int val=temp->data;
    free(temp);
    return val;
}

int peek(){
    if(isempty()){
        printf("stack underflow");
        exit(1);
    }
    return top->data;
}

void print(){
    st *ptr=top;
    if(isempty()){
        printf("stack overflow");
        exit(1);
    }
    printf("teh stack elements are: ");
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