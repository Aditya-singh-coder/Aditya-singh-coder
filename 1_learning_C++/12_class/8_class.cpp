// static variable and functions
// static variable gives character of the class itself rather than giving character to some class object.
// static does not belong to any class object
#include<iostream>
using namespace std;
class hero
{
public:
    int level;
    int health;
    static int TimeToComplete;  //static variable called

    //calling static function
    // static function can only access static variable
    static int random(){
        // cout << this->health<<endl;   -->this will give error
        return TimeToComplete;
    }
    hero(){
        cout <<"constructor called"<<endl;
    }
};

// giving value to static variable 
int hero::TimeToComplete=5;
int main(){
    cout << hero::TimeToComplete<<endl; 
    hero a;
     // we can also change its value and access its value in these methods. But we should these methods.
    a.TimeToComplete=10; 
    cout << a.TimeToComplete<<endl;  

    // calling static function
    int time= hero::random();
    cout <<"print static function:"<< time<<endl;
    return 0;
}