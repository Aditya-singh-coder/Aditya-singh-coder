// adding numbers from 1 to 1003
#include<iostream>
using namespace std;
int main() {
    int n=0,k=0;
    while(k<=100) {
        n = n + k;
        k++;
    }
    cout<<" the value of addtion of numbers from 1 to 100 is "<< n <<endl;
    return 0;
}