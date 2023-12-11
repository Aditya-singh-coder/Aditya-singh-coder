#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *prev;
    struct node *next;
    int data;
} st;

void print(const char *msg, const st *head) {
    printf("%s", msg);
    while (head) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

st *add_node(st **head, int data) {
    st *ptr = malloc(sizeof(st));
    if (ptr == NULL)
        return NULL;
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = NULL;
    if (*head == NULL) {
        return *head = ptr;
    } else {
        st *last = *head;
        while (last->next) {
            last = last->next;
        }
        ptr->prev = last;
        return last->next = ptr;
    }
}

st *reverse_list(st *head) {
    // iterate on the list, swapping the next and prev links
    for (st *node = head; node; node = node->prev) {
        st *next = node->next;
        node->next = node->prev;
        node->prev = next;
        head = node;
    }
    return head;
}

void free_list(st **headp) {
    for (st *node = *headp; node;) {
        st *next = node->next;
        free(node);
        node = next;
    }
    *headp = NULL;
}

int main(void)
{
    st *head = NULL;

    add_node(&head, 12);
    add_node(&head, 22);
    add_node(&head, 1);
    add_node(&head, 24);
    add_node(&head, 45);

    print("before reverse: ", head);
    head = reverse_list(head);
    print("after reverse:  ", head);

    free_list(&head);
    return 0;
}