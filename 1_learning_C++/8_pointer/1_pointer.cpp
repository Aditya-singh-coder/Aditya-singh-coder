#include<iostream>
using namespace std;
int main()
{
    //effect of pointers in numerical array.
    cout<< "effect of pointers in numerical array. "<<endl;
    int arr[5] = {1,4,5,7,8};
    //we can access arr[0] address in multiple ways
    cout << "(1) address of arr[0]"<<arr<<endl;
    cout << "(2) address of arr[0] "<<&arr[0] <<endl;
    
    cout<<"(3) "<< *arr <<endl;        //value of arr[0]
    

    cout <<"(4) "<< *arr + 1 <<endl;   // it takes value of arr[0] and then adds 1 to it.
    cout <<"(5)  " << *(arr+1)<<endl;    // it takes value of arr[1]

    cout << "(6) "<<*(arr +2) <<endl;    // it will give value of arr[2].

    int i=2;
    cout<<"(7) "<<i[arr]<<endl;         //it will give value of arr[2];
    /*the reason why above code gives value is based on how compilar reads code.
    for compilar arr[i] = *(arr +i).
    similarly i[arr] = *(i+ arr).
    thus it makes no difference for compilar wether you write it as arr[i] or i[arr.]*/

    int temp[10] = {1,2};
    cout << "(8) " << sizeof(temp) << endl;  // gives size of whole array
    cout <<"(9) "<<sizeof(*temp) <<endl;    // gives size of only arr[0]
    cout << "(10) " <<sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout <<"(11) "<< sizeof(ptr) <<endl;
    cout <<"(12) "<< sizeof(*ptr)<<endl;
    cout <<"(13) "<< sizeof(&ptr)<<endl;
    return 0;

}