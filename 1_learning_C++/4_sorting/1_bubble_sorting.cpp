// in bubble sort, largest element keeps being placed from end side in each round till we have fully sorted the array
#include<iostream>
using namespace std;
int main() 
{
    int n=7;
    int arr[n] = {1,32,7,44,36,2,6};
    for(int i = 0; i < n-1; i++)
    {
        for(int j=0; j<n-1-i; j++) 
        {
            if(arr[j]>arr[j+1]) 
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout << "sorted array is ";
    for( int k=0; k<n; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}