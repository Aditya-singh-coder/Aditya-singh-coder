// self refrential structures
// self referential structures are those structures in which one or more pointers points to the structure of ths same type
#include<stdio.h>
struct code{
    int i;
    char c;
    struct code *ptr;
};

int main(){
    struct code var1;
    var1.i = 65;
    var1.c='A';
    var1.ptr = NULL;

    struct code var2;
    var2.i =66;
    var2.c='B';
    var1.ptr=NULL;
    /*
    it can also be written as :-
    struct code var2={66,'B',NULL};
    */
    var1.ptr=&var2;

    printf("%d %c",var1.ptr->i,var1.ptr->c);  // output will be "66 B"
    return 0;
}
