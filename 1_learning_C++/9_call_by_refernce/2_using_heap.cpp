/*we shouldn't use something like this,
    int n;
    cin >> n;
    int arr[n];
    this is because it creates memory during run time.
    it is bad because computer creates a limited memory called stack memory when a program is started running.
    if value of n becomes too big then it will simply break the program.
    to counter this we could use alternate method of using heap memory.
    heap memory is much bigger than stack memory and can handle bigger values of n.
    to create heap memory we use "new" syntax.
    we can't create variables inside heap memory so we connect with a piinter as shown below */
#include<iostream>
using namespace std;
int getsum(int* arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout <<"enter size of array "<<endl;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    // taking input in array
    cout <<"give imput in array "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getsum(arr, n);
    cout << "answer is "<< ans <<endl;
    return 0;
}