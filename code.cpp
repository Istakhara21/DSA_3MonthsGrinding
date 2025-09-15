#include <iostream>
using namespace std;

// Binary to Decimal
int DecToBin(int n)
{
    int sum = 0, pow = 1; // pow =1 -> 10(0)
    while (n > 0)
    {
        int rem = n % 2;
        sum += (rem * pow);
        pow *= 10;
        n /= 2;
    }
    return sum;
}

int main()
{

    cout << DecToBin(55);
    return 0;
};
