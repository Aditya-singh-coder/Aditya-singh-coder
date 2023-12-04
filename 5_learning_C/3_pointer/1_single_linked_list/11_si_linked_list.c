//deleting a node from the end of linked list.
//with the help of double pointer.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_node(struct node **head, int dt)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = dt;
    temp->link = NULL;

    if (*head == NULL)
    {
        *head = temp;
    }
    else
    {
        struct node *ptr = *head;
        while (ptr->link != NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void delete_node(struct node **head) {
    if (*head == NULL) {
        return;
    } else if ((*head)->link == NULL) {
        free(*head);
        *head = NULL;
    } else {
        struct node *temp = *head, *temp2 = *head;
        while (temp2->link != NULL) {
            temp = temp2;
            temp2 = temp2->link;
        }
        temp->link = NULL;
        free(temp2);
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=12;
    head->link=NULL;
    
    add_node(&head, 23);
    add_node(&head, 3);
    add_node(&head, 5);
    add_node(&head, 13);

    printf("before deletion:\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }

    printf("\nAfter deletion:\n");
    delete_node(&head);
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp=temp->link;
    }
    return 0;
}
