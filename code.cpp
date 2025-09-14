#include <iostream>
using namespace std;

// to calculate sum of n digits of a number
int sumOfDigit(int num) {
    int digSum = 0;

    while(num > 0) {
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}

int main () {
    cout << "sum = " << sumOfDigit(2356) << endl;
    return 0;
}
