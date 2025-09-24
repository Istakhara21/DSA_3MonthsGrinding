#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(int arr[], int n)
{
    int freq = 1;
    int ans = 0;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1]) {
            freq++;
            ans = arr[i];
        }else {
            freq = 1;
            ans = 0;
        }
    }
    return ans;


    // checking for sorting algo
    // for(int i=0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }
    return 0;
}
int main()
{

    int arr[] = {2,2,1,1,1,2,2};
    int n = 7;

    cout << majorityElement(arr, n);
    return 0;
}