// write a program to find peak index (i) in a mountain array. (leetcode ques-852)
#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while(start < end) {
        if(arr[mid] < arr[mid +1]) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main() {
    int first_arr[5] = {1,3,7,5,2};
    int secnd_arr[10] = {1,3,4,5,6,15,9,6,5,4};
    int first_peak = peakIndexInMountainArray(first_arr, 5);
    int second_peak = peakIndexInMountainArray(secnd_arr, 10);
    cout << "Peak index in first array: " << first_peak << endl;
    cout << "Peak index in second array: " << second_peak << endl;
    return 0;
}