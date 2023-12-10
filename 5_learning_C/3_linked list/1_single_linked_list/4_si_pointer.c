// counting no. of nodes
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

int count(struct node *head){
    int count = 0;
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
        struct node *ptr=head;
        while(ptr!=NULL){
            count++;
            ptr=ptr->link;
        }
    }
    return count;
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

    int ans= count(head);
    printf("total no. of node is %d",ans);
    return 0;
}