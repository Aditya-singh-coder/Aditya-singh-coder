// reverse a double linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} st;

void print(st *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

void add_node(st *head, int data)
{
    st *ptr = malloc(sizeof(st));
    ptr->data = data;
    ptr->next = NULL;
    while (head->next)
    {
        head = head->next;
    }
    head->next = ptr;
    ptr->prev=head;
}

st *reverse_list(st *head)
{
    st *ptr = head->next;
    head->next = NULL;
    while (ptr->next!= NULL)
    {
        head->prev=ptr;
        ptr->prev=ptr->next;
        ptr->next=head;
        head=ptr;
        ptr=ptr->prev;
    }
    ptr->prev=NULL;
    ptr->next = head;
    head=ptr;
    return head;
}

int main()
{
    st *head = malloc(sizeof(st));
    head->prev = NULL;
    head->data = 12;
    head->next = NULL;

    add_node(head, 22);
    add_node(head, 1);
    add_node(head, 24);
    add_node(head, 45);

    printf("\nbefore reverse\n");
    print(head);

    head= reverse_list(head);
    printf("\nafter reverse\n");
    print(head);

    return 0;
}