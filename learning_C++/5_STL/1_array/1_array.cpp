#include<iostream>
#include<array>
using namespace std;
int main()
{
    int basic[3] = {1,2,3};  //(1) this is basic way to make an array

    array <int,4> a={1,2,3,4};  // (2) this is the STL way of making an array

    int size = a.size();        // (3) it tells about number of elements in the array
    cout << "size " << size <<endl;

    for(int i=0; i<size ; i++)
    {
        cout << a[i] <<", ";
    }
    cout << endl;

    cout<< "element at 2nd index " << a.at(2) << endl;  // (4) it tells about the element at specific address in array

    cout << "empty or not--> " << a.empty() << endl;  // (5) it is a boolean. it tells if element is empty or not 

    cout << "first element " << a.front() << endl;      // (6) it tells the first element of the array
    cout << "last element " << a.back() << endl;        // (7) it tells last element in array

    a.fill(0);                                          // (8) all elements of a are now 0
    for(int i=0; i<size ; i++)
    {
        cout << a[i] <<", ";
    }

    array<int, 4> b = {1, 2, 3, 4};
    array<int, 4> c = {6, 7, 8, 9};
    b.swap(c);                                      // (9) b now contains {6, 7, 8, 9, 10} and c now contains {1, 2, 3, 4, 5}

    int element = get<2>(b);                         // (10) element is now 3
            //there are many more. but this much is enough for right now.
}