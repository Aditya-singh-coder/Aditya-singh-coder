#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int min_val = *min_element(v.begin(), v.end());
    int max_val = *max_element(v.begin(), v.end());
    cout << "The smallest element in the vector is " << min_val << endl;
    cout << "The largest element in the vector is " << max_val << endl;
    return 0;
} 