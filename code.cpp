#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(int arr[], int n)
{
    int freq = 0, ans = 0;
    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = arr[i];
        }
        if(ans == arr[i]) {
            freq++;
        }else {
            freq--;
        }
    }
    return ans;
}
int main()
{

    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    cout << majorityElement(arr, n);
    return 0;
}