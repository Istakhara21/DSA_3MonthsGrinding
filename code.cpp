#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 34, 5, 8, 342, 9343};
    vector<int> newVec;
   
    int target = 8;
    for(int i=vec.size()-1; i>=0; i--) {
        newVec.push_back(vec[i]);
    }

    for(int val: newVec) {
        cout << val << "  ";
    }

    return 0;
}