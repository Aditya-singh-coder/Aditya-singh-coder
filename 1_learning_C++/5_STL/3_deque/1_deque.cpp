#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);  // adds an element in the normal way
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(10);  // adds an element from back
    for(int i:d)
    {
        cout << i << " ";
    }
    d.pop_back();  // deletes an element from front
    d.pop_front(); // delete an element from back
    cout << endl;
    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "print 1st element "<< d.at(0)<< endl;
    cout << "front " <<d.front() << endl;
    cout << "back " << d.back() << endl;
    d.erase(d.begin() + 1);
    cout << d.front() << endl;
    //there are many more things. but this much is enough for right now.
}