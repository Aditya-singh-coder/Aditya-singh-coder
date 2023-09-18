#include<iostream>
#include<queue>   // first come last out

using namespace std;
int main()
{
    queue<string> q;
    q.push("aditiya");
    q.push("singh");
    q.push("coder");

    cout<< "First element " << q.front() << endl;
    cout<< "size before pop "<< q.size() <<endl;
    q.pop();
    cout << " First element " << q.front() << endl;
    cout << "size after pop " << q.size() << endl;
}
