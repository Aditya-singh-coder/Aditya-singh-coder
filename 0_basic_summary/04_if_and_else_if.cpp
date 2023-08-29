#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "enter your rating " << endl;
    cin >> num;
    
    if(num == 1) {
        cout << "your rating is 1. "<<endl;
    }
    else if(num ==2) {
        cout << "your rating is 2."<< endl;
    }
    else if(num == 3) {
        cout << "your rating is 3."<< endl;
    }
    else if(num ==4) {
        cout << "your rating is 4." << endl;
    }
    else if(num ==5) {
        cout << " your rating is 5." << endl;
    }
    else {
        cout << " invalid rating. "<<endl;
    }
    return 0;
}