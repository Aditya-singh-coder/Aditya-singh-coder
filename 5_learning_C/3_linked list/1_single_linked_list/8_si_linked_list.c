// adding a node at the start of linked list
// method 2, pass by refernce

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_at_start(struct node **head, int d){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data =d;
    ptr->link= NULL;

    ptr->link=*head;
    *head=ptr;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=44;
    head->link=NULL;

    struct node *current= malloc(sizeof(struct node));
    current->data=34;
    current->link=NULL;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->data=12;
    current->link=NULL;
    head->link->link=current;

    add_at_start(head,3);
    
    struct node *temp = malloc(sizeof(struct node));
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->link;
    }
    return 0;
}