// reversing a string using recusrion
#include<iostream>
using namespace std;

void reverse(string&word,int first,int size){
    if(first>size){
        return;
    }
    swap(word[first],word[size]);
    first++;
    size--;
    reverse(word,first,size);
}
int main(){
    string word="hello";

    reverse(word,0,word.length()-1);
    cout <<word<<endl;
    return 0;
}