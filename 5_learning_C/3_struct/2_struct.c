//  passing structure memeber as argument
//  call by reference
#include <stdio.h>
struct charset{
    char s;
    int i;
};

void keyvalue(char* s, int* i){
    scanf(" %c", s); // space before %c to skip any whitespace characters
    scanf("%d", i);
}

int main(){
    struct charset cs;
    keyvalue(&cs.s, &cs.i);
    printf("Char: %c, Int: %d\n", cs.s, cs.i);
    return 0;
}