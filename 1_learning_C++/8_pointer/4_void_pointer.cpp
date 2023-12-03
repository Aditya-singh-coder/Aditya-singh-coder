/*use of void pointer
    malloc and calloc return void pointer. due to this reason, they can allocate a memory for any type of data
*/
// void pointer 
#include <iostream>
using namespace std;
int main() {
    int i = 5;
    float f = 2.3;

    // void pointer
    void* ptr;

    // the void pointer can take the address of any variable
    ptr = &i;
   cout << "The value of int i is: " << *(static_cast<int*>(ptr)) <<endl;
    // in C language type casting would be something like this:-
    // printf("%d",*(int*)ptr);
    ptr = &f;
   cout << "The value of float f is: " << *(static_cast<float*>(ptr)) <<endl;


    // there's also null pointers 
    return 0;
}