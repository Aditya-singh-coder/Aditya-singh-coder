#include<iostream>
using namespace std;
int main() {
    int rating;
    cout << " enter your reating for the product " << endl;
    cin >> rating;
    switch(rating) {
        case 1:
        cout << "your entered rating is 1."<<endl;
        break;

        case 2:
        cout << "your entered rating is 2. " << endl;
        break;

        case 3:
        cout << "your entered rating is 3." << endl;
        break;

        case 4:
        cout << "your entered rating is 4." << endl;
        break;

        case 5:
        cout << "your entered rating is 5. " << endl;
        break;

        default: 
        cout<< "invalid input. " << endl;
        break;
    }
    return 0;
}