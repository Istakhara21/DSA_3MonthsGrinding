#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int pairSum(int arr[], int n) {
    vector<int> vec;
    int target = 9;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i]+arr[j] == target){
                vec.push_back(i);
                vec.push_back(j);
            }
        }
    }

    for(int val : vec) {
        cout << val << endl;
    }

    return 0;
}

int main() {

    int arr[] = {2,5,7,11};
    int n = 4;

    cout << pairSum(arr, n);
    
    return 0;
}