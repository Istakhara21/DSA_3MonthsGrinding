#include <iostream>
using namespace std;

int main()
{
    // Pattern Problem
    /**
     * 1111
     *  222
     *   33
     *    4
     */

     int n;
     cin >> n;
     for(int i=1; i<=n; i++){
        for(int j=i-1; j<=i; j++) {
            cout << " ";
        }
        for(int j=n; j>0; j--) {
            cout << i;
        }
        cout << endl;
     }

    return 0;
}