#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int linearSearch(int arr1[], int sz)
{
    int target = 8;
    for(int i=0; i<sz; i++) {
        if(target == arr1[i]) {
            cout << "It is in the array " << arr1[i] <<  endl;
            cout << "Index No: " << i << endl;
        }
    }
    return 0;
}

int main()
{
    int arr1[] = {1,2,3,8,4,5};
    // int arr2[] = {3,25,12,2,22};
    int sz = 5;

    cout << linearSearch(arr1, sz);

    return 0;
}