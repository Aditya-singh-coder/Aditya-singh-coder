/* In C++, when you pass a variable to a function, it's passed by value.
 This means that a copy of the variable is created and used inside the function. 
Any changes made to the copy do not affect the original variable.*/
#include<iostream>
using namespace std;

int incr(int n){
    n++;
    return n;
}

/* we can get the changed value in main function by two methods.
by storing the returned value back to n using  n=incr(n), as done in line 16.
or we call by refrence to function.
this will directly connect n inside the incr2 function with n in main function,
instead of creating a copy and using it in function.*/
int incr2(int& n){
    n++;
    return n;
}

int main() {
    int n=2;
    incr(n);             // this will bring no change
    cout <<"first: "<< n <<endl;     
    n = incr(n);         // this will bring the change. it is because it reasigns the changed value to n.
    cout <<"second: "<< n <<endl;

    //resting value of n
    n=2;
    incr2(n);          //this will bring change     
    cout <<"third: "<< n <<endl;
    return 0;
}

