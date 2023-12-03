// passing array of structures as argument
#include<stdio.h>
 struct point {
    int x;
    int y;
 };

//  note:- compilar will allocate contiguous block of memory for the data members of the structure (just like how memory of an array is stored).
void print(struct point arr[]){
    int i;
    for(i=0;i<2;i++){
        printf("%d %d\n",arr[i].x,arr[i].y);
    }
}

int main(){
    struct point arr[2] = {{1,2},{3,4}};
    print(arr);
    return 0;
}
