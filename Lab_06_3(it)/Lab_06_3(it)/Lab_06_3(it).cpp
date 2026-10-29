#include <iostream>

using namespace std;

int Negative(int* a, const int size);

template <typename T>
int Negative(T* a, const int size);

int main()
{
    const int n = 10;

    int a[n] = { 1, -2, 3, -4, 5, -6, 7, 8, -9, 10 };
    int k1 = Negative(a, n);
    cout << "Negative(a, n) = " << k1 << endl;

    int k2 = Negative<int>(a, n);
    cout << "Negative<int>(a, n) = " << k2 << endl;

    double b[n] = { 1.1, -2.2, 3.3, -4.4, 5.5, -6.6, 7.7, 8.8, -9.9, 10.0 };
    int k3 = Negative<double>(b, n);
    cout << "Negative<double>(b, n) = " << k3 << endl;

    return 0;
}

int Negative(int* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (a[i] < 0)
            k++;
    return k;
}

template <typename T>
int Negative(T* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if (a[i] < T()) // порівняння з нульовим значенням типу T
            k++;
    return k;
}