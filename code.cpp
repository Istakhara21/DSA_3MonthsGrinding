#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int largestVal(int arr[], int sz) {
    int largest = INT_MIN;
    int largeIndex;
    for(int i=0; i<sz; i++) {
        if(largest < arr[i]) {
            largest = arr[i];
            largeIndex = i;
        }
    }
    return largeIndex;
}

int SmallestVal(int arr[], int sz) {
    int smallest = INT_MAX;
    int smallIndex;
    for(int i=0; i<sz; i++) {
        if(smallest > arr[i]) {
            smallest = arr[i];
            smallIndex = i;
        }
    }
    return smallIndex;
}

int main()
{
    int arr[] = {32,43,125,64,72};
    int sz = 5;

    cout << largestVal(arr, sz) << endl;
    cout << SmallestVal(arr, sz) << endl;


    return 0;
}