#include <iostream>
using namespace std;

int reverseNum(int n)
{
    int newNum = 0;
    while (n > 0)
    {
        int lastDig = n % 10;           // take last digit
        newNum = newNum * 10 + lastDig; // build reversed number
        n = n / 10;                     // remove last digit
    }
    return newNum;
}

int main()
{
    cout << reverseNum(125);
    return 0;
}