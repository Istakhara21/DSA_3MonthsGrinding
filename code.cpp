#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> prices = {7, 6, 4, 1, 3, 2};
    int lowestVal = prices[0];
    int currentProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (prices[j] < lowestVal)
            {
                lowestVal = prices[j];
            }
        }
        currentProfit = prices[i] - lowestVal;
        if (currentProfit < prices[i])
        {
            currentProfit = prices[i];
        }
    }

    cout << currentProfit;

    return currentProfit;
}