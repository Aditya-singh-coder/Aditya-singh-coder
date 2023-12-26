// learning uses of "this" 
#include<iostream>
using namespace std;

class hero {
    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    hero() {
        cout << "Simple constructor called" << endl;
    }

    //Paramerterised Constructor
    hero(int health) {
        this -> health = health;
        // this -> health represnts the health in main class.
        //  while only "health" represents health written inside this class
        // "this" will always represent the main class
    }

    hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    void sethealth(int h) {
        health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }
};
 int main(){
    hero lokesh;
    lokesh.level='A';
    cout << "Lokesh's level:"<<lokesh.level<<endl;
    lokesh.sethealth(79); 
    lokesh.setlevel('B');
    cout << "Lokesh's health: " << lokesh.gethealth()<<endl;
    cout << "Lokesh's level: "<<lokesh.getlevel()<<endl;
    return 0;
 }