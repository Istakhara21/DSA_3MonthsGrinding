#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    //For Top Half

    //first triangle
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << '*';
        }
        for(int j=2*(n-i)-2; j>0; j--) {
            cout << ' ';
        }
        for(int j=0; j<i+1; j++) {
            cout << '*';
        }
        cout << endl;
    }

    //For Bottom Half
    for(int i=0; i<n; i++) {
        for(int j=n-i; j>0; j--) {
            cout << '*';
        }
        for(int j=0; j<2*i; j++) {
            cout << " ";
        }
        for(int j=n-i; j>0; j--){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
