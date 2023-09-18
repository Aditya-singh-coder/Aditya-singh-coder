#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

    m[1] ="aditya";
    m[2] = "singh";
    m[3] = "coder";
    m.insert({ 5, "bheem"});
    cout << " before erase" <<endl;
    for(auto i:m) {
        cout <<i.first <<" ";
    }

    cout <<" finding 13 ->" << m.count(13)<< endl;
    m.erase(13);
    for (auto i:m) {
        cout << i.first <<" "<< i.second<<endl;
    }
    cout << " after erase" <<endl;

    auto it =m.find(5);

    for(auto i=it; i!=m.end(); i++)
    {
        cout << (*i).first<<endl;
    }
}