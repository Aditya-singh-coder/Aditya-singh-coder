/*
malloc:-
->malloc is an built-in function declared in the header file<stdlib.h>
-> mallloc is the short  name for memory allocation and is used to dynamically allocate a single large block of conatiguous memory according to the size specified.
syntax: (void*)malloc(size_t size)
-> malloc function simply allocates a memory block according to the size specified in the heap and on success it returns a pointer pointing to the first byte memory else returns NULL
-> size_t is defined in <stdlib.h> as unsigned int.

why malloc returns void pointer?
-> malloc doesn't have any idea what it is pointing to
-> it merely allocates memory requested by the user without knowing the type of data to be stored inside the memory.
-> the void pointer can be typecasted to an appropriate type.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

}