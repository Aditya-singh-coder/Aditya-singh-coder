//Write a program that calculates the sum of the first n natural numbers using a for loop.

#include<iostream>
using namespace std;
int main() {
    int num,sum = 0;
    cout<< " enter the number till which you want sum of "<< endl;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        sum+=i;
    }
    cout << " the sum of numbers till " << num << " is " << sum;
}