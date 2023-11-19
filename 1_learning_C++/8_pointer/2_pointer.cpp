#include<iostream>
using namespace std;
//behaviour of pointer with characer arrays.
int main()
{
    int arr[5] ={1,2,3,4,5};
    char ch[6] = "abcde";

    cout <<"(1)" << arr << endl;    // it will give address

    cout <<"(2) " << ch << endl;    // it will give actual string

    char *c = &ch[0];
    cout <<"(3) "<< c << endl;      // it will five actual string
    //testing what happens when writing char woithout null character
    char temp = 'a';
    char *p =&temp;
    cout <<"(3) "<< p <<endl;  // it will print char until it finds a null character
    return 0;
}