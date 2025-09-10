#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = --a; // 9,9

    cout << b << endl; // b me pehle a ki value jayegi
    cout << a; // ab a update ho chuka hai
    return 0;
}