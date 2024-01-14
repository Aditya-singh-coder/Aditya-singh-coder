#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* link;

    node(){}
    node(int d){
        this->data=d;
        this->link=nullptr;
    }
};


void insert_at_end(node* &head,int dt){
    node* temp= head;
    node* ptr= new node(dt);
    while(temp->link!=nullptr){
        temp=temp->link;
    }
    temp->link=ptr;
}

void print(node* &head){
    node* temp=head;
    while(temp!=nullptr){
        cout << temp->data<<" ";
        temp=temp->link;
    }
}
int main(){
    node *head= new node(10);
    insert_at_end(head,22);
    insert_at_end(head,8);
    print(head);
    return 0;
}