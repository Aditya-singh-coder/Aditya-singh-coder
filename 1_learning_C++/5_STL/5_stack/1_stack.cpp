#include<iostream>
#include<stack>             //last come first out
using namespace std;
int main()
{
    stack<string> s;

    s.push("aditya");
    s.push("singh");
    s.push("coder");
    cout << "top element "<< s.top() <<endl;
    cout << "size " << s.size()<<endl;
    s.pop();
    cout << "top element "<< s.top() <<endl;
    cout << "size " << s.size()<<endl;
    cout << "empty or not " << s.empty() <<endl;
}