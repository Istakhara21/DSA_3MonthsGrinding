#include <iostream>
using namespace std;

// Decimal to Binary
int DecToBin(int n) {
    int ans = 0; // binary num
    int pow = 1; // (10)0
    while(n>0) {
        int rem = n%2;
        n = n/2;
        ans = ans + (rem*pow);
        pow = pow*10;
    }
    return ans;
}

int main()
{

    cout << DecToBin(100);
    return 0;
};
