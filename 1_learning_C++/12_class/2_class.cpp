//  dynamic allcation/heap allcation of a class
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
    hero *lokesh= new hero;
    lokesh->sethealth(79); // it can also be written as (*lokesh).sethealth]
    lokesh->setlevel('Z');

    cout << "lokesh's health: "<<lokesh->gethealth()<<endl;
    cout<<" lokesh's level "<<lokesh->getlevel()<<endl;
    return 0;
}
