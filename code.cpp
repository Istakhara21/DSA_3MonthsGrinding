#include <iostream>
using namespace std;

// to calculate sum of n factorials
int fac(int n) {
    int sum = 1;
    for(int i=1; i<=n; i++) {
        sum = sum*i;
    }

    return sum;
}



int main()
{
    cout << fac(5);
    return 0;
}
