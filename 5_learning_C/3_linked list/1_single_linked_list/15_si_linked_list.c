#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void add_node(struct node *head, int dt)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = dt;
    temp->link = NULL;

    struct node *ptr = head;
   while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void delete_linked_list(struct node **head)
{

    struct node *ptr = *head;
    struct node *ptr2=(*head)->link;
    while (ptr2->link != NULL)
    {
        free(ptr);
        ptr=NULL;
        ptr = ptr2;
        ptr2 = ptr2->link;
    }
    *head=NULL;
}

void print(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->link;
        }
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 46;
    head->link = NULL;
    add_node(head, 12);
    add_node(head, 23);
    add_node(head, 123);
    add_node(head, 3);
    add_node(head, 4);

    printf("before deletion\n");
    print(head);

    delete_linked_list(&head);

    printf("\nafter deletion\n");
    print(head);
    return 0;
}