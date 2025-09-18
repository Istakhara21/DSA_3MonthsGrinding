#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int commonVal(int arr1[], int arr2[], int sz)
{
    for(int i=0; i<sz; i++){
        int count = 0;
        for(int j=0; j<sz; j++) {
            if(arr1[i] == arr2[j]) {
                count++;
            }
        }
        if(count > 0) {
            cout << arr1[i] << "  ";
        }
    }
    return 0;
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,25,12,2,22};
    int sz = 5;

    cout << commonVal(arr1, arr2, sz);

    return 0;
}