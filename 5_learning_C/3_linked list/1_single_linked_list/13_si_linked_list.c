// deleting a node from certain position in a linked list.
//using two pointers in delete function
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int print_node(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

void delete(struct node **head, int position)
{
    struct node *previous = *head, *current = *head;
    if (*head == NULL)
    {
        printf("linked list is empty");
        return;
    }
    else if ((*head)->link == NULL || position == 1)
    {
        *head = (*head)->link;
        free(current);
        current = NULL;
    }
    else
    {
        while (position > 1)
        {
            current = previous;
            previous = previous->link;
            position--;
        }
        current->link = previous->link;
        free(previous);
        previous = NULL;
    }
}

void add_node(struct node *head, int dt)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = dt;
    temp->link = NULL;

    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    add_node(head, 32);
    add_node(head, 21);
    add_node(head, 1);
    add_node(head, 45);
    add_node(head, 32);

    printf("before deletion:\n");
    print_node(head);

    delete (&head, 4);
    printf("\nafter deleting 1 from postion 4th\n");
    print_node(head);

   
    return 0;
}