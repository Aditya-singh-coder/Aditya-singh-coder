// paramerised constructor and use of "this".
// this just like default constructor except we put parameters in it.
#include <iostream>
using namespace std;

class hero
{
public:
    string type;
    char level;
    int health;

    // comilar is samart enough to know which constructor (or parameter) to call when both have same name. 
    hero(){      //this will get called when no parameters are given
        cout <<" function with no parameter"<<endl;
    } 
    hero(int health, char level, string type)   //this will get called when we give three parameters 
    {
        // "this" is used when prameter and class object have similar name and could have confusion.
        // this->health means we're talking about "health" in the parameter.
        cout <<" function with 3 paramters"<<endl;
        this->health= health;
        this->level=level;
        this->type=type;
    }

    hero(int health, char level){  //this will get called when two parameters are called
        cout<<"function with 2 parameters"<<endl;
        this->health=health;
        this->level=level;
    }
};

int main(){
    hero lokesh;
    hero ramesh(77,'B');
    hero prashant(99,'A',"support");
}