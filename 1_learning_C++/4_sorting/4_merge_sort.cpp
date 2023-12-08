#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int Left[n1], Right[n2];

    for (i = 0; i < n1; i++)
        Left[i] = arr[start + i];
    for (j = 0; j < n2; j++)
        Right[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[6] = {7, 8, 1, 4, 5, 2};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}