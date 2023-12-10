//deleting a node from the end of linked list.
//without the help of double pointer
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
/*
it will only work for adding nodes to a non-empty list.
If you want to add a node to an empty list, you need to use a double pointer to modify the head pointer itself.
*/
void add_node(struct node *head, int dt) {
    struct node *temp = malloc(sizeof(struct node));
    temp->data = dt;
    temp->link = NULL;

    struct node *ptr = head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// this one has no problem. we can easily use this one instead of using the one with double pointers.
void delete_node(struct node *head) {
    if (head == NULL) {
        return;
    } else if ((head)->link == NULL) {
        free(head);
        head = NULL;
    } else {
        struct node *temp = head;
        while (temp->link->link != NULL) {
            temp = temp->link;
        }
        temp->link = NULL;
        free(temp->link);
        temp->link=NULL;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    
    add_node(head, 23);
    add_node(head, 3);
    add_node(head, 5);
    add_node(head, 13);

    printf("before deletion:\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }

    printf("\nAfter deletion:\n");
    delete_node(head);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
    return 0;
}
