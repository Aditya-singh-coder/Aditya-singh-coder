// creating a node
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head= NULL;
    head=(struct node *)malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;

    printf("%d",head->data);
    return 0;
}

/*
let's use this analogy to understand what is happening.
struct node itself is like a blueprint on how to make a building.
But when you decalre struct node head, it is like creating a building with help of "struct node" blueprint.
But when you create a pointer "struct node *head" it is like creating a map which is capable of pointing to any building made with the help of "struct node" blueprint.
When you declare struct node head;, you're creating a "building" (an instance of struct node) directly.
This "building" is allocated on the stack and you can access its "rooms" (data and link) directly.
When you declare struct node *head;, you're creating a "map" (a pointer) that can point to any "building" (instance of struct node).
Initially, this "map" doesn't point to any "building". When you later do head = (struct node *)malloc(sizeof(struct node));,
you're using the "blueprint" (struct node) to build a new "building" on the heap, and making your "map" point to this "building".
Now, you can use the "map" to access and modify the "rooms" in the "building".
*/