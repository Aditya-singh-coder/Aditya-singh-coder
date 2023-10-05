//count(): Counts the number of occurrences of a value in a range and returns the count.
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int x = 5;
    int count = std::count(v.begin(), v.end(), x);
    std::cout << "The value " << x << " occurs " << count << " times in the vector" << std::endl;
    return 0;
}