// function to find power
#include<iostream>
using namespace std;
int power(int a,int b) {
    int ans=1;
    for(int i=1; i<b; i++) {
        ans = ans * a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<< " enter the number "<< endl;
    cin>> a;
    cout<< " enter the power "<< endl;
    cin>> b;
    cout<< "  the result of " << a << " to the power of "<< b << " is "<< power(a,b)<<endl;
    return 0;
}