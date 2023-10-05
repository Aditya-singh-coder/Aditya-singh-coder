// Write a program that prints the factorials of a given number using a for loop.

#include<iostream>
using namespace std;
int main() {
    int num;
    cout << " enter the number whose factorials you want " << endl;
    cin >> num;
    cout<< "the factorials of " << num << " is " << 1 <<", ";
    for(int i=2; i <= num; i++) {
            if( num % i == 0) {
            cout << i <<", ";
            }
        } 
    return 0;
}