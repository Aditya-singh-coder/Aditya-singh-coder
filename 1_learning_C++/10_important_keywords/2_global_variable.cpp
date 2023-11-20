/*we can define a variable that works in all the functions ussng method of declaring global variable.
difference between this variable and one defined by #define is that-
-> variable made by #define did not take extra space while this one does take space.
-> variable declared by #define could not reassigned value while this one can be reassinged.
it is prefered to not use this method. we should rather use #define in similar situation.
it is becaue value can be changed in global variable. */
#include<iostream>
using namespace std;
int glob = 2;       //this is global variable
int hi(int b){
    return glob*b;
}

int hello(int b){
    return glob+b;
}
int main(){
    int b=4;
    cout <<"before"<< hi(b)<<endl<< hello(b);

    glob = 5;    //changing the value of global varibale

    cout <<"after"<< hi(b)<<endl<< hello(b);
    
    return 0;
}