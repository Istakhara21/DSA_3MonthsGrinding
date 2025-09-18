#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int sumProd(int arr[], int sz)
{
    int sum = 0;
    int prod = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }

    cout << "sum: " << sum << endl;
    cout << "Product: " << prod << endl;
}

int main()
{
    int arr[] = {34, 45, 34, 2, 4, 23, 142};
    int sz = 7;

    cout << sumProd(arr, sz) << endl;
    
    return 0;
}