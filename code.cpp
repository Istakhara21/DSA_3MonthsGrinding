#include <iostream>
#include <climits>
using namespace std;

int reverseArr(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {3, 6, 8, 94, 2, 6};
    int sz = 6;

    reverseArr(arr, sz);

    for(int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}