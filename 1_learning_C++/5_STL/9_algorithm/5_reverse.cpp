#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    reverse(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}