// program to add node at start
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *link;

    // condstructor
    node(int data){
        this->data=data;
        this->link=nullptr;
    }
};

void insert_node(node* &head, int d){
    node* temp= new node(d);
    temp->link=head;
    head=temp;
}
void print(node* &head){
    node* temp= head;
    while(temp!=nullptr){
        cout << temp->data<<" ";
        temp=temp->link;
    }
} 

int main(){
    node* head= new node(10); 
    insert_node(head,12);
    print(head);

    return 0;
}