// Write a program that prints the Fibonacci sequence up to a given number using a for loop.

#include<iostream>
using namespace std;
int main() {
    int a=0,b=1,c,size;
    cout<< "enter the size of the fibonacci number "<< endl;
    cin >> size;
    cout << "0, 1, "; 
    for(int i=0; i<size; i++) {
        c=a+b;
        a=b;
        b=c;
    cout << c << ", ";
    }
    return 0;
}