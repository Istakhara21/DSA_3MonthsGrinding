#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> answer;

    for (int i = 0; i < nums.size(); i++)
    {
        int ans = 1;

        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                ans *= nums[j];
            }
        }
        answer.push_back(ans);
    }

    for (int val : answer)
    {
        cout << val << " ";
    }

    return 0;
}