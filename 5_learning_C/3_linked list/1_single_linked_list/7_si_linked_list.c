// adding node at the start of the linked list
//method 1, pass by variable
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

struct node *add_At_start(struct node *head,int data){
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=3;
    ptr->link=NULL;    

    // adding ptr at the start of linked list
    ptr->link=head;
    head=ptr;
    return head;
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

    head=add_At_start(head,3);

    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return 0;
}