#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int largestVal(int arr[], int sz)
{
    int largest = INT_MIN;

    for (int i = 0; i < sz; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "Largest value: " << largest << endl;
    
}

int SmallestVal(int arr[], int sz)
{
    int smallest = INT_MAX;

    for (int i = 0; i < sz; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest value: " << smallest << endl;
}

int swapFn(int arr[], int sz) {
    int min = SmallestVal(arr, sz);
    int max = largestVal(arr, sz);

    for(int i=0; i<sz; i++) {
        if(arr[i] == min) {
            swap(max, min);
            break;
        }
    }
    for (int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {34, 45, 34, 2, 4, 23, 142};
    int sz = 7;

    cout << "Original array: " << endl;
    for (int i=0; i<sz; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    cout << "New array: " << endl;
    cout << swapFn(arr, sz);
    return 0;
}