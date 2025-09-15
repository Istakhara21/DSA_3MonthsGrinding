#include <iostream>
using namespace std;

// to calculate sum of n digits of a number
int factorial(int n) {
    int sum = 1;

    while(n>0) {
        sum = sum*n;
        n--;
    }
    return sum;
}

int nCr(int n, int r) {
    int val = factorial(n) / ((factorial(r) * factorial(n-r)));
}

int main () {
    cout << "nCr = " << nCr(6,3) << endl;
    return 0;
}
