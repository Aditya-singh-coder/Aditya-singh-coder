#include<iostream>
using namespace std;
int main() {
    int arr[7]={0};
    cout << "enter the numbers you wish to sort " << endl;

    for(int i=0; i<7; i++) {
    cin >> arr[i];
    }
    cout << " the sorted numbers are: " <<endl;
    for(int a=0; a<7; a++) {
        for(int b=a+1; b<7; b++) {
            if( arr[b] < arr[a]) {
                swap( arr[a], arr[b]);
            }
        }
        cout <<arr[a] << " ";
    }
    return 0;
}