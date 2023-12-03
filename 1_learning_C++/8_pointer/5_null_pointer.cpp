/* A null pointer is a pointer that does not point to any memory location. 
It is used to indicate that the pointer is not intended to point to an accessible memory location.
This is useful for indicating that the pointer should not be dereferenced.
*/
#include <iostream>

using namespace std;

int main() {
    int* ptr = nullptr; // Declare a null pointer
                        //we can also use NULL or 0 in here. but nullptr is more prefered. 
    if(ptr) { // Check if the pointer is null
        cout << "The pointer is not null." << endl;
    } else {
        cout << "The pointer is null." << endl;
    }

    int value = 5;
    ptr = &value; // Point to an integer

    if(ptr) { // Check if the pointer is null
        cout << "The pointer is not null." << endl;
    } else {
        cout << "The pointer is null." << endl;
    }

    return 0;
}