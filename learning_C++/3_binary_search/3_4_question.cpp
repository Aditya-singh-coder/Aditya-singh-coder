/* Given a rotated sorted array, find the index of its pivot element. 
The pivot element is the largest element in the array and is smaller than its right neighbor. If there is no pivot, return -1.
For example, given the array [4, 5, 6, 7, 0, 1, 2], the pivot index is 3. */
#include<iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid < high && arr[mid] > arr[mid + 1]) {
            return mid;
        } else if (mid > low && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        } else if (arr[low] >= arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = findPivot(arr, n);
    if (pivotIndex == -1) {
        cout << "No pivot found" << endl;
    } else {
        cout << "Pivot index: " << pivotIndex << endl;
    }
    return 0;
}