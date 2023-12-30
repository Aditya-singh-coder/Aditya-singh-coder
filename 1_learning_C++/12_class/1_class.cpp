// basics of class
#include <iostream>
using namespace std;

class hero
{
    // public class object can be viewed and its value can be changed from anywhere
public:
    int level;
    int health;
};

int main()
{
    // we can declare an variable using both static and heap method
    hero lokesh;             // static method
    hero *ramesh = new hero; // heap method

    lokesh.health = 77;
    lokesh.level = 'A';

    cout << " lokesh's level:" << lokesh.level << " and health: " << lokesh.health << endl;

    return 0;
}