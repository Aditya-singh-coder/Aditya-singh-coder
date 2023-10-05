/* swap the numbers which are adjacent to each other  
for example if array is     1, 2, 3, 4, 5, 6
then it should change into  2, 1, 4, 3, 6, 5 */

#include<iostream>
using namespace std;
void printArray( int arr[], int n) {
    for( int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

void swapAlternate(int arr[], int n)  {
    for(int i = 0; i < n; i += 2 ) {
        if(i+1 < n) { 
        swap( arr[i], arr[i+1]);
        }
    }
}

int main() {
    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {1,2,3,4,5};
    
    swapAlternate(odd, 5);
    printArray(odd, 5);
    // same thing can be done for even array. just the word from odd to even and size to 8.
    return 0;
}