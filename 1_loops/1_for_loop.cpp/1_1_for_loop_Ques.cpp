//Write a program that asks the user to enter a number and then prints the multiplication table (till 10) for that number using a for loop.

#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "enter the number whose table you want "<< endl;
    cin >> num;
    for(int i = 1; i <= 10; i++) {
        cout<< num*i << endl;
    }
    return 0;
}