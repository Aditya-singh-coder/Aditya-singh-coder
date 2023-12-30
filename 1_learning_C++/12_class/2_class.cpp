// operations in private class object
#include <iostream>

using namespace std;

class hero
{
    // you cannot view or change value of private class object from anywhere.
    // for changing and viewing the value of private object we stter and getter functions.
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
    hero lokesh;
    hero *ramesh = new hero;

    lokesh.health = 77;
    lokesh.level = 'A';
    // lokesh.type= "attack";  --> this will give error
    cout << " lokesh's level:" << lokesh.level << " and health: " << lokesh.health << endl;
    // cout <<" lokesh's type: " <<lokesh.type<<endl;  -->this will give error

    // using getter and setter function for class objesct type
    lokesh.set_type("attack");

    cout << " lokesh's type is: " << lokesh.get_type() << endl;
    return 0;
}