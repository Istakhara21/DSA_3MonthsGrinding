#include <iostream>
#include <climits>
#include <vector>
using namespace std;



// O(n3)
int maxSubarray(int arr[], int sz)
{
    int larger = INT_MIN;

    for (int st = 0; st < sz; st++)
    {
        int sum = 0;
        for (int end = st; end < sz; end++)
        {

            for (int i = st; i <= end; i++)
            {
                sum = sum + arr[i];
            }
            // cout << sum;
            if (larger < sum)
            {
                larger = sum;
            }
            // cout << larger;
            sum = 0;
            cout << "  ";
        }
        cout << endl;
    }

    cout << endl;
    return larger;
}


// O(n2)
int optimizedWay(int arr[], int sz)
{
    int maxSum = INT_MIN;
    for (int st = 0; st < sz; st++)
    {
        int currentSum = 0;
        for (int end = st; end < sz; end++)
        {
            currentSum += arr[end];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << maxSum << endl;
    return 0;
}

// Kadane's Algorithm -> O(n)
int kadane(int arr[], int sz)
{
    int curSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < sz; i++)
    {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {2, 34, 2, 45, 123};
    int sz = 5;

    // cout << optimizedWay(arr, sz) << endl;
    // cout << maxSubarray(arr, sz);

    cout << kadane(arr, sz);

    return 0;
}