#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int majorityElement(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > (n) / 2)
        {
            return arr[i];
        }
        else
        {
            count = 1;
        }
    }
    return 0;
}
int main()
{

    int arr[] = {2,2,1,1,1,2,2};
    int n = 7;

    cout << majorityElement(arr, n);
    return 0;
}