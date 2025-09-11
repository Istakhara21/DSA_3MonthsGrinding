#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    char ch = 'A';
    int num = 1;
    for(int i=0; i<n; i++) {
        char ch = ' ';
        for(int j=1; j<=n; j++) {
            
            for(int k=0; k<i; k++) {
                cout << ch;
            }
            cout << i+1;
        }
        cout << endl;
    }
    
    return 0;
}