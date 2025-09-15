#include <iostream>
using namespace std;

// to write nth term of fibonacci series
int fibo(int n)
{
    int a = 0, b = 1;
    int next = a + b;

    // cout << a << "  " << b << "  ";
    for (int i = 0; i < n - 2; i++)
    {
        next = a + b;

        a = b;
        b = next;
        // cout << next << "  ";
    }
    return next;
}

int main()
{

    cout << fibo(10);
    return 0;
};
