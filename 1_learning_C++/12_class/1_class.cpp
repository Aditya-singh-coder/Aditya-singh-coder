//  learning basics of class
#include<iostream>
using namespace std;

class hero{
    private:
    int health;         // class memner inside private type can't be accesed outside of class
    // by default class memeber are
    public:
    char level;

    int print(){
        cout << "health: "<<health<<endl;  // this can access health as it is inside the class
    }

    // getter functions:

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // setter functions:

    void sethealth(int h){
        health=h;
    }

    void setlevel(char l){
        level=l;
    }
};

int main(){
    hero lokesh;

    // lokesh.health=12;  --> this will throw error becuase we're trying yo access private member.
    lokesh.level='A';
    // cout << "lokesh's health:"<<hero.health<<endl;   --> this will ttrow error because we're trying to access a private member of hero class
    cout << "Lokesh's level:"<<lokesh.level<<endl;


    // to access private member outside of class, we use getter and setter functions

    lokesh.sethealth(79); // we changed value of private variable health using setter type function
    lokesh.setlevel('B');

    cout << "Lokesh's health: " << lokesh.gethealth()<<endl;   // printing private variable health using getter type function
    cout << "Lokesh's level: "<<lokesh.getlevel()<<endl;
    return 0;
}