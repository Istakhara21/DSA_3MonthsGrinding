#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int uniqueVal(int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        int count = 0;

        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

int main()
{
    int arr[] = {34, 45, 34, 2,2,4, 4, 23, 142};
    int sz = 9;

    cout << uniqueVal(arr, sz);

    return 0;
}