#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    // Fo Top half
    for (int i = 0; i < n; i++)
    {
        // first space
        for (int j = n - 1 - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << '*';

        //odd number of spaces (2n-1)
        if (i != 0)
        {
            for (int j=0; j<(2*i-1); j++)
            {
                cout << ' ';
            }
            cout << '*';
        }

        cout << endl;
    }

    //for Bottom half
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<i+1; j++) {
            cout << ' ';
        }
        cout << '*';
        for(int j=(2*(n-i)-5); j>0; j--) {
            cout << ' ';
        }
        if( i<n-2) {
        cout << '*';
        }
        cout << endl;
    }

    return 0;
}
