#include <iostream>
using namespace std;

// to check whether a number is prime or not
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
};

int printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool primeChecker = isPrime(i);

        if (primeChecker == true) {
            cout << i << " is a Prime number" << endl;
        }
    }
}

int main()
{
    cout << "1 is a Prime number" << endl;
    cout << printPrime(15);
    return 0;
};
