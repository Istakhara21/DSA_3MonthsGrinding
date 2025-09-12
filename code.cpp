#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;


    for(int i=0; i<n; i++) {

        // this is for one side
        for(int j=0; j<n-1-i; j++) {
            cout << ' ';
        }
        cout << '*';

        if(i !=0) {
            for(int j=0; j<2*i-1; j++) {
                cout << ' ';
            }
        cout << '*';
        }

        cout << endl;
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<i+1; j++) {
            cout << ' ';
        }
        cout << '*';
        if(i != n-1) {
            for(int j =n-2-i; j>0; j--) {
            cout << '!';
        }
        cout << '*';
        }
        cout << endl;
    }

    return 0;

    }
    
    