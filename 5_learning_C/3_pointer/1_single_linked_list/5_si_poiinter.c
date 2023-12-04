// printing data from all nodes of pointers
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

void print(struct node *head){
    struct node *ptr = head;
    while(head!= NULL){
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

    print(head);

    return 0;
}