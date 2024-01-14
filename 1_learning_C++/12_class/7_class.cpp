// destructor
// destructor frees the memory used by class object at end of operation.
// similar to constructor, desturctor are made by deafult with creation of class
// but we can also make our own destuctor
// destructor are not automatically for dynamic class objects. we have to call them manually
#include<iostream>
using namespace std;

class hero
{
public:
    int level;
    int health;

    hero(){
        cout <<"constructor called"<<endl;
    }

    // destructor made. this will delete the default destructor of class
    ~hero(){
        cout <<"destuctor called"<<endl;
    }
};
int main(){
    // static call. destructor will be called automatically for this onre in the end
    hero a;

    // dynamic call. we will have to manually call destructer for this one.
    hero *b= new hero;

    // manual destructor call
    delete b;

    return 0;
}
