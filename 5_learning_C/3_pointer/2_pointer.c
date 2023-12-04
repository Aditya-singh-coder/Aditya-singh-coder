// creating a linked list
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *head2 = malloc(sizeof(struct node));
    head2->data= 15;
    head2->link=NULL;
    
    head->link=head2;
    return 0;
}