// sort(): Sorts the elements in a range in ascending or descending order.
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    std::sort(v.begin(), v.end());
    for (auto x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}