#include <iostream>
using namespace std;

int DecToBin(int n) {
    int bin = 0;
    int pow = 1;
    while(n>0) {
        int rem = n%2;
        bin += rem*pow;
        pow *= 10;
        n /= 2;
    }
    return bin;
}

int flipBit(int x) {
    int bin = DecToBin(x);
    int pow = 1;
    //most updated pow
    while(bin>0) {
        bin /= 10;
        pow *= 10;
    }
    bin = DecToBin(x);
    int reverseBit = 0;
    while(bin>0) {
        int lastDig = bin%10;
        reverseBit += lastDig*pow;
        pow /= 10;
        bin /= 10;
    }
    return reverseBit;
}

int main() {
    cout << flipBit(55) + 1 ;
    // return 0;
}