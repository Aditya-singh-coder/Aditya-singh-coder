#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *link;

    node(int data)
    {
        this->data = data;
        this->link = nullptr;
    }
};

void add_node(node *&head, int data)
{
    node *ptr = new node(data);
    node *ptr2 = head;

    while (ptr2->link != nullptr)
    {
        ptr2 = ptr2->link;
    }
    ptr2->link = ptr;
}

void print(node *&head)
{
    node *ptr = head;
    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
}

int main()
{
    node *head = new node(11);
    add_node(head, 1);
    add_node(head, 66);
    add_node(head, 8);
    add_node(head, 2);
    add_node(head, 4);
    print(head);
    return 0;
}