#include <iostream>
using namespace std;
int main()
{
    int i, key, j, n = 6;
    int arr[n] = {5, 2, 4, 6, 1, 3};
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "the sorted array is ";
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << ", ";
    }

    return 0;
}