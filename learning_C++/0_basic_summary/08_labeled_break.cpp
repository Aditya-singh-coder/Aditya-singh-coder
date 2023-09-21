// leabeled break are techniques used to break out of multiple loops.
// here we are using a boolean function as labeled break to break out of multiple loops.  
#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 32, 7, 44, 36, 2, 6};
    bool flag = false;

    for (int i = 1; i < 6 && !flag; i++)
    {
        int temp = arr[i];
        for(int j = i-1; j<7 && !flag; j++) {
            if(arr[j]>arr[i]) {
                arr[i] =arr[j];
                flag = true;
            }
        }
        flag = false;
    }

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}