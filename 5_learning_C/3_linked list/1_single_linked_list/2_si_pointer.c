// creating a linked list
//using method 1
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

    struct node *head3=malloc(sizeof(struct node));
    head->data=22;
    head->link=head2;
    return 0;
}