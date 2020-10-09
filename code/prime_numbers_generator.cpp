#include <iostream>
#include <math.h>
using namespace std;

void primeNumbersGenerator(int batas)
{
    for (int i = 2; i <= batas; i++)
    {

        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }
}

int main()
{

    int batas;

    cout << "Masukkan batas angka: ";
    cin >> batas;

    cout << "==== Daftar bilangan prima yang kurang dari " << batas << " ====" << endl;
    primeNumbersGenerator(batas);
    cout << endl;
}