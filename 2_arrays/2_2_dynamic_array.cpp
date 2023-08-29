/* dyanamic array is used when you don't know what size of array you want beforehand.(it isn't technically an array but works like one)
here vector<int> arr is creating an array with no specific size.
evertime a number is being input in "num", it is being in "arr" array by using arr.push_back(num). this process ends until user inputs -1.
it is helpful when you don't know beforehand what size of array you want. */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    int num;

    cout << "Enter numbers (enter -1 to stop):" << endl;

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        arr.push_back(num);
    }

    cout << "The numbers you entered are:" << endl;

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}