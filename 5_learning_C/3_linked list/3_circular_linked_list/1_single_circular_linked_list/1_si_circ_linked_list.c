// adding node at the end of citcular linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} st;

void add_node(st **head, int num)
{
    st *ptr = malloc(sizeof(st));
    ptr->data = num;
    ptr->link = NULL;
    if (*head == NULL)
    {
        *head = ptr;
        (*head)->link = *head;
    }
    else
    {
        st *temp = *head;
        while (temp->link != *head)
        {
            temp = temp->link;
        }
        temp->link = ptr;
        ptr->link = *head;
    }
}

void print(char *msg, st *head)
{ 
st *temp =head;
printf("%s ",msg);
    do
    {
        printf("%d ", temp->data);
        temp = temp->link;
    } while (temp!= head);
}

int main()
{
    st *head;
    int n_node, num;

    printf("enter the size of linked list:\n");
    scanf("%d", &n_node);
    printf("enter the data: \n");
    for (int i = 0; i < n_node; i++)
    {
        scanf("%d", &num);
        add_node(&head, num);
    }
    print("the linked list is", head);
    return 0;
}