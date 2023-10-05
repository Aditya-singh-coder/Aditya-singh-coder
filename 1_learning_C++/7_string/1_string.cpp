#include<iostream>
using namespace std;
int getlength(char name[]){
    int count = 0;
    for (int i=0;name[i] != 0; i++) {
        count++; 
    }
    return count;
}
string reverse(char name[],int size){
    int s = 0;
    int e = size-1;
    while(s<e) {
        swap(name[s++],name[e--]);
    }
    return name;
}
int main()
{
    char name[20];

    cout << "enter your name "<<endl;
    cin >> name;
    cout << "your name is "<< name << endl;
    cout<<"the size of name is " << getlength(name)<<endl;
    cout << "its reverse is " << reverse(name, getlength(name))<<endl;
    return 0;
}
