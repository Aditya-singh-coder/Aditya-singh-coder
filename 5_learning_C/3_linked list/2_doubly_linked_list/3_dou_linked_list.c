// delete node at specific postion in the linked list
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

void delete_node_in_bet(st *head,int position){
    while(position>2){
        head=head->next;
        position--;
    }

    st *ptr1= head->next;
    st *ptr2 = ptr1->next;
    head->next=ptr2;
    ptr2->prev=head;
    free(ptr1);
    ptr1=NULL;
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



int main(){
    st *head= malloc(sizeof(st));
    head->prev=NULL;
    head->data=12;
    head->next=NULL;
    
    add_node_at_end(head,22);
    add_node_at_end(head,1);
    add_node_at_end(head,24);
    add_node_at_end(head,45);

    printf("before deletion\n");
    print(head);

    delete_node_in_bet(head,3);
    printf("\nafter deletion\n");
    print(head);

    return 0;
}