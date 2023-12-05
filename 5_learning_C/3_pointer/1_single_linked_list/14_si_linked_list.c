// deleting a node from certain position in a linked list.
// using one pointer in delete function
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* link;
};

void add_node(struct node *head,int dt){
    struct node *temp=malloc(sizeof(struct node));
    temp->data=dt;
    temp->link=NULL;

    struct node *ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}

void delete(struct node **head, int position) {
    if (*head == NULL) {
        return;
    }

    struct node* temp = *head;

    if (position == 1) {
        *head = temp->link;
        free(temp);
        return;
    }

    for (int i=1; temp!=NULL && i<position-1; i++) {
        temp = temp->link;
    }

    if (temp == NULL || temp->link == NULL) {
        return;
    }

    struct node *next = temp->link->link;
    free(temp->link);
    temp->link = next;
}

// Assuming add_node is implemented correctly

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    add_node(head,32);
    add_node(head,21);
    add_node(head,1);
    add_node(head,45);
    add_node(head,32);

    printf("before deletion:\n");
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\nafter deleting 1 from postion 4th\n");
    delete(&head,4);

    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
    return 0;
}