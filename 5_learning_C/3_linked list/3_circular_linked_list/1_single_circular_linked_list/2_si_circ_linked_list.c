//  add node at start in circular single linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}st;

void print(char *msg,st *tail){
    printf("%s ",msg);
    st *temp=tail->link;
    do{
        printf("%d ",temp->data);
        temp=temp->link;
    }
    while(temp!=tail->link);
}

void add_node(st **tail,int data){
    st *ptr= malloc(sizeof(st));
    ptr->data=data;
    ptr->link=NULL;
    if(*tail==NULL){
        *tail=ptr;
        (*tail)->link=*tail;
    }
    else{
    st *head= (*tail)->link;
    ptr->link=head;
    (*tail)->link=ptr;
    }
}

int main(){
int n_node,num;
st *tail=NULL;
printf("print the size of linked list\n");
scanf("%d",&n_node);
printf("enter the data: \n");
for(int i=0;i<n_node;i++){
    scanf("%d",&num);
    add_node(&tail,num);
}
print("the linked list is:",tail);
return 0;
}

