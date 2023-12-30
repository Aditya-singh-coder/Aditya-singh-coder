// learning about deafult constructor in class

/*
whenever we create an object is created using lines such as
    hero ramesh;
    or,  hero *ramesh= new hero;

    a default function (which exists inside the class by default) is called. this function would look something like,
    ramesh(hero){

    }
    it has no parameter and empty body.
*/

#include <iostream>
using namespace std;

class hero
{
public:
    string type;
    char level;
    int health;

// to prove the existence of default function, we create this hero() function which will print something when called.
// note: when we create our own such function as written below, the default function is not created.  
hero(){
    cout <<" deafult function called"<<endl;  
}
 
};

int main(){
    cout <<" hi"<<endl;
    hero ramesh;
    cout <<"hello:"<<endl;
    hero* jack=new hero;

    return 0;
}