#include <iostream>
#include <climits>
#include <vector>
using namespace std;

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

int main()
{
    int arr[] = {2,34,2,45,123};
    int sz = 5;

    cout << maxSubarray(arr, sz);

    return 0;
}