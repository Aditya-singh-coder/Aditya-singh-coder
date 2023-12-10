// insert node at end and start of double linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}st;

void print(st *head){
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
}

void add_node_at_end(st *head, int data){
    st *ptr=malloc(sizeof(st));
    ptr->data=data;
    ptr->next=NULL;

    while(head->next!=NULL){
        head=head->next;
    }
    ptr->prev=head;
    head->next=ptr;
}

void add_node_at_start(st **head,int data){
    st *ptr=malloc(sizeof(st));
    ptr->data=data;
    ptr->prev=NULL;

    (*head)->prev=ptr;
    ptr->next=(*head);
    (*head)=ptr;
    }


int main(){
    st *head= malloc(sizeof(st));
    head->prev=NULL;
    head->data=12;
    head->next=NULL;
    
    add_node_at_end(head,22);
    add_node_at_end(head,1);
    add_node_at_end(head,24);
    add_node_at_end(head,45);

    add_node_at_start(&head,100);
    print(head);

    return 0;
}