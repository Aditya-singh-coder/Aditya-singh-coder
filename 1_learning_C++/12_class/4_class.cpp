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
    // copy constructor
    hero(hero& temp){
        cout<<"copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
};

 int main(){
    hero lokesh(70,'C');

    hero rishi(lokesh);
    // what this line means is,
    // rishi.health= 70;
    // rishi.level='C';

    hero om(lokesh);

    cout << "om health"<< om.gethealth()<<" and level" <<om.getlevel()<<endl;
    return 0;
 }