// adding node at specific postion in betweem first and last node in  circular linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}st;

void print_list(char *msg,st *head){
    printf("%s ",msg);
    st *temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}

void add_node_in_mid(st *head,int data,int position){
    st *ptr= malloc(sizeof(st));
    ptr->data=data;
    ptr->next=NULL;

    st *temp1=head,*temp2=head->next;
    while(position-->2){
        temp1=temp2;
        temp2=temp2->next;
    }

    temp1->next=ptr;
    ptr->next=temp2;
}

void add_node_in_end(st **head, int num)
{
    st *ptr = malloc(sizeof(st));
    ptr->data = num;
    ptr->next = NULL;
    if (*head == NULL)
    {
        *head = ptr;
        (*head)->next = *head;
    }
    else
    {
        st *temp = *head;
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = *head;
    }
}

int main(){
    st *head=NULL;
    add_node_in_end(&head,23);
    add_node_in_end(&head,2);
    add_node_in_end(&head,3);
    add_node_in_end(&head,54);
    add_node_in_end(&head,21);

    print_list("before adding node:\n",head);
    add_node_in_mid(head,1,3);
    print_list("\nafter adding node:\n",head);
    return 0;
}