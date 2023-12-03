/*Structures are used when you need to group different type of data items together.
 For example, you might want to store information about a student, such as their name (a string), age (an integer), and GPA (a float).
 Instead of creating separate variables for each attribute, you can group them together in a single structure.  */
#include<iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float gpa;
};

int main() {
    Student ashish;
    ashish.name = "ashish sinha";
    ashish.age = 20;
    ashish.gpa = 3.5;

    Student lokesh;
    lokesh.name = "Lokesh singh";
    lokesh.age = 21;
    lokesh.gpa = 5.5;
    cout << "Name: " << ashish.name << endl;
    cout << "Age: " << ashish.age << endl;
    cout << "GPA: " << ashish.gpa << endl;

    return 0;
}
