#include <iostream>
#include <math.h>
using namespace std;

bool primeNumberChecker(int n)
{

    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
        }
    }

    return isPrime;
}

int main()
{
    int n;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;
    cout << "Hasil: ";
    if (primeNumberChecker(n))
    {
        cout << n << " adalah bilangan prima";
    }
    else
    {
        cout << n << " bukan bilangan prima";
    }
    cout << endl;
}