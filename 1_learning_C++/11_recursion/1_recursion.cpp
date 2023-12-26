// doing binary search using recursion
#include <iostream>
using namespace std;

bool binary_search(int arr[], int first, int last, int key)
{
    if (first>last)
    {
        return 0;
    }
    int mid = (first+last) / 2;

    if(arr[mid]==key){
        return 1;
    }

    if (arr[mid] > key)
    {
        return binary_search(arr, first, mid-1, key);
    }
    else if (arr[mid] < key)
    {
        return binary_search(arr, mid+1, last, key);
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    bool ans;
    ans = binary_search(arr, 0, 7, 5);
    if (ans)
    {
        cout << " number is found " << endl;
    }
    else
    {
        cout << "answer is not found" << endl;
    }
    return 0;
}