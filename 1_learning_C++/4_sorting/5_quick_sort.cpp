// quick sort
#include<iostream>
using namespace std;


int partition( int arr[], int start, int end) {

    int pivot = arr[start];

    int count = 0;
    for(int i = start+1; i<=end; i++) {
        if(arr[i] <=pivot) {
            count++;
        }
    }

    //place pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //left and right wala part smbhal lete h 
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int start, int end) {

    //base case
    if(start >= end) 
        return ;

    //partitioon karenge
    int p = partition(arr, start, end);

    //left part sort karo
    quickSort(arr, start, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, end);

}

int main() {

    int arr[10] = {2,4,1,6,9 ,44,21,5,12,0};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}