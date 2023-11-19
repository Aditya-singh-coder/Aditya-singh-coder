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

int main(){
    int value = 5;
    int  *p = &value;
    print(p);

    cout << "before "<< p <<endl;
    update(p);
    cout << "after "<< p <<endl;
    //address will not change here.
    return 0; 
}
