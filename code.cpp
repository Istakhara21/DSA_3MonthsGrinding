#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    int arr[] = {1,2,4,5,6,7,8};
    int n = 7;
    int target = 7;
    int st=0, end=n-1;

    // binary search code
    while(st <= end) {
        int mid = (st+end) / 2;
        if(target > arr[mid]) {
            st = mid+1;
        }else if(target < arr[mid]) {
            end = mid -1;
        }else {
            cout << arr[mid];
            break;
        }
    }

    return 0;
}