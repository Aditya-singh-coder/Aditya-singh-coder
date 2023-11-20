/*we can use #define to declare a value for all the functions.
it works in following way-
->before even running the program it changes all the where term is used with given value.
for example, all the place where pi is used in this program will be changed to 3.14 before even running the program.
-> we can't reassign value of pi in here.
 so code like pi = pi+1; won't work
-> here pi is not a variable an d does not take space. because it just changes the values before even code runs. 
*/
#include<iostream>
using namespace std;
#define pi 3.14
int main(){
    int r=5;
    cout << " area of circle"<< pi*r*r<<endl;

    r=2;
    cout << "area of 2nd circle"<<pi*r*r<<endl;
    return 0;
}