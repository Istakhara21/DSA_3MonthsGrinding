#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 34, 5, 8, 342, 9343};

    int target = 8;
    for (int val : vec)
    {
        if (val == target)
        {
            cout << val << " is inside the vector" << endl;
        }
    }

    return 0;
}