// finding behaviour of pointer in functions 
#include<iostream>
using namespace std;
void print(int *p)
{
    cout << *p <<endl;
}

void update(int *p){
    p = p + 1;
    cout << "inside "<< p << endl;
    // address will be changed here but not in main function
}

void sum(int arr[]){
    cout << "size: "<< sizeof(arr)<<endl;
    //it will give size of pointer, not the size of array because a pointer is send in function, not the wholle array.
}

int main(){
    int value = 5;
    int  *p = &value;
    print(p);

    cout << "before "<< p <<endl;
    update(p);
    cout << "after "<< p <<endl;
    //address will not change here.

    int arr[5] ={1,2,3,4,5};
    sum(arr);
    return 0; 
}
