// copy constructor
// copy is used to copy the values of one class object to another same class object
// 
#include <iostream>
using namespace std;

class hero
{
    public:
    char level;
    int health;

    hero(){}
    hero(int health,char level ){
        this->health=health;
        this->level=level;
    }

    // copy constructor. it must be of call by refernce
    // similar to default constructor, when we make a copy constructor, it destroys copy constructor created by compiler
    hero(hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
};

int main()
{
    hero lokesh(78,'S');

    hero lucky(lokesh);
    return 0;   
}