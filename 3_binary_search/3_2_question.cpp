//find me left most and right most occurance of number that is being serched(key number). Return -1 if key does not exist in array.

#include<iostream>
using namespace std;
int leftocc(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
    if(arr[mid] == key) {
        ans = mid;
        end = mid - 1;
    }
    else if(arr[mid] > key) {
        end = mid - 1;
    }
    else if(arr[mid] < key) {
        start = mid + 1;
    }
    mid = start + (end - start) / 2;
    }
    return ans;
    }
    
    int rightocc(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while(start <= end) {
    if(arr[mid] == key) {
        ans = mid;
        start = mid + 1;
    }
    else if(arr[mid] > key) {
        end = mid - 1;
    }
    else if(arr[mid] < key) {
        start = mid + 1;
    }
    mid = start + (end - start) / 2;
    }
    return ans;
    }
    
    int main() {
        int arr[10] = {1,2,33,33,33,33,45,76,88,91};
        int key;
        cout << " Enter the number you wish to find "<< endl;
        cin >> key;
        cout << "the left most occurance of "<< key << " is " << leftocc(arr, 10, key) << " and right most occurane is " << rightocc(arr, 10, key);
        return 0;
    }