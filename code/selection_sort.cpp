#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Masukkan panjang array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan daftar bilangan (" << n << "): ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //Selection Sort

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Hasil: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}