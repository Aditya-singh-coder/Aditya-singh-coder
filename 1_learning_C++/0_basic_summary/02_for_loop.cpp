//adding numbers from 1 to 100
#include<iostream>
using namespace std;
int main() {
    int n=0;
    for(int i=1;i<=100;i++) {
        n=n+i;
    }
    cout<< "the value of addition of addition of digits from 1 to 100 is " << n <<endl;
    return 0;
}