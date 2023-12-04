// add a node in the end of an already made linked list. the added node must have data = 40
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

void add_at_end(struct node *head,struct node *temp){
    struct node *ptr=head;
    while(ptr->link!= NULL){
        ptr= ptr->link;
    }
    ptr->link=temp;
}

void print(struct node *head){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
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

    struct node *temp=malloc(sizeof(struct node));
    temp->data=40;
    temp->link=NULL;

    add_at_end(head,temp);
    print(head);
    return 0;
    }