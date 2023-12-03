//  passing structure memeber as argument
//  call by reference
#include <stdio.h>
struct charset{
    char s;
    int i;
};

void keyvalue(char* s, int* i){
    printf("enter the values of s and i\n");
    scanf(" %c", s);
    scanf("%d", i);
    /*
    In the main function, when you call keyvalue, you're passing the addresses of cs.s and cs.i:
    keyvalue(&cs.s,&cs.i);
    So, within the keyvalue function, s and i are already pointers. They already hold the addresses of cs.s and cs.i,
    respectively. Therefore, you don't need to use the & operator in the scanf calls. 
    If you did, you'd be trying to get the address of the pointers themselves,
    not the addresses they're pointing to, which is not what you want.
    */
}

int main(){
    struct charset cs;
    keyvalue(&cs.s, &cs.i);
    printf("Char: %c, Int: %d\n", cs.s, cs.i);
    return 0;
}