// write a program which stores an amount of number and then output them multiplied by 2.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< " enter the size of the number "  << endl;
    cin >> n;
    int arr[n];
    cout << " enter the numbers of array " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << " the end result array is " << endl;
    for(int j=0; j<n; j++) {
    cout << arr[j]*2 << endl;
    }
    return 0;
}