#include<iostream>
using namespace std;
int main() {
    int n = 7;
    int arr[n] = {1,32,7,44,36,2,6};
    cout << " the sorted numbers are: " <<endl;
    for(int a=0; a<n; a++) {
        for(int b=a+1; b<n; b++) {
            if( arr[b] < arr[a]) {
                swap( arr[a], arr[b]);
            }
        }
        cout <<arr[a] << " ";
    }
    return 0;
}