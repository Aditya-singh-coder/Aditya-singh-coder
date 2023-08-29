// code to find a number in a sorted array using binary search. return -1 if the searched number doesn't exist in array.
#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end =size - 1;
    int mid =start + (end - start) / 2;  // (start + end)/2 is being written in this away becacuse (start + end) could go out of bound. 
    while(start <= end) {
        if(arr[mid] == key) {
        return mid;
        }
        else if(key > arr[mid]) {
            start=mid +1;
        }
        else {
            end = mid -1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1,2 ,23 ,44 ,56};
    int key;
    cout<< "Enter the number you wish to find in even array "<< endl;
    cin>> key;
    int evenindex = binarysearch(even, 6, key);
    cout << " the place of "<< key <<" is "<< evenindex<< endl;
    return 0;
}