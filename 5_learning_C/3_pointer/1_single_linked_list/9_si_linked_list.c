// adding a node between two nodes 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
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

    // Create a new node
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data=3;
    ptr->link=NULL;

    //adding this node between 2nd and 3rd node to make this the new 3rd node.
    ptr->link=current;
    head->link->link=ptr;

    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return 0;
}