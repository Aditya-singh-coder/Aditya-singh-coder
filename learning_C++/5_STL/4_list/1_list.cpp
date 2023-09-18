#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    list<int> n(5,100);
    for(int i:n){
    cout << i << " "; 
    }
    cout << endl;
    l.push_back(1);  // adds an element in the normal way
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_front(10);  // adds an element from back
    cout << "size of list" <<l.size()<<endl;
    for(int i:l)
    {
        cout << i << " ";
    }
    l.pop_back();  // deletes an element from front
    l.pop_front(); // delete an element from back
    cout << endl;
    for(int i:l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "front " <<l.front() << endl;
    cout << "back " << l.back() << endl;
    cout << l.front() << endl;
    //there are many more things. but this much is enough for right now.
}