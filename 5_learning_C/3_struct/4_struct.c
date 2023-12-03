// passing pointers to structures as arguments.
#include <stdio.h>
struct point
{
    int x;
    int y;
};

void print(struct point *ptr)
{
    printf("%d %d\n", ptr->x, ptr->y);
    //ptr->x means "access the x member of the structure that ptr points to".
    //  This is equivalent to (*ptr).x, but ptr->x is easier to read and write.
}

int main(){
    struct point p1 = {23,45};
    struct point p2 = {56, 90};
    print(&p1);
    print(&p2);
    return 0;
}