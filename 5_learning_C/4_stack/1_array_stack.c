/* 
push(data): inserts data onto stack
pop(): deletes the last inserted element from the stack
top(): returns the last inserted element without removing it
size(): returns the size or the number of the lements in the stack
isempty(): returns TRUE if the stack is empty, else returns FALSE
isFull(): returns TRUE if the stock is full, else returns FALSE
*/
// arrray implementation of stacks
#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int data){
    if(top== MAX-1){
        printf("stack overflow");
        return;
    }
    top = top+1;
    stack_arr[top]=data;
}

int pop(){
    int value;
    if(top==-1){
        printf("stack overflow");
        exit(1);
        // exit() will end the execution of whole program.
        // exit(-1) or exit(any non zero no.) indicates failur in executing the code.
        // exit(0) indicates succesfull execution of the code.
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}

void print(){
      for(int i=0;i<top;i++){
        printf("%d ",stack_arr[i]);
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    // push(5);  // this will not be put inside array as array is already maxed out.

  
    int data;
    data =pop();
    data =pop();
    print();
    return 0;
}