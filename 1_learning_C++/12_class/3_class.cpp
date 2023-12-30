// using heap memory/dynamic memory with class
#include <iostream>

using namespace std;

class hero
{
    private:
    string type;

    public:
    char level;
    int health;

    // setter function
    void set_type(string t)
    {
        type = t;
    }

    // getter function
    string get_type()
    {
        return type;
    }
};

int main()
{
    hero *ramesh = new hero;
    ramesh->health=79;  // it can also be written as (*ramesh).health=79;
    ramesh->level='C';
    ramesh->set_type("defence");

    cout << "Ramesh's health: "<<ramesh->health<<", level: "<<ramesh->level<<" and its type: "<<ramesh->get_type()<<endl;
    return 0;
   
}