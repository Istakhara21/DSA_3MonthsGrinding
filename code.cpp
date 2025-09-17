#include <iostream>
#include <climits>
using namespace std;



int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; //NOT FOUND
}

int main()
{
    int arr[] = {3,6,8,94,2,6};
    int size = 6;
    int target = 8;

    cout << linearSearch(arr, size, target) << endl;

    return 0;
}