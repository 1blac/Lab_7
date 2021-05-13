#include <iostream>
#include <array>
#include <time.h>

using namespace std;

void Create(array<int, 100>& arr, int n);
void Print(array<int, 100>& arr, int n);
double Arithmetic_mean(array<int, 100> arr, int n);

int main()
{
    srand((unsigned int)time(NULL));

    int n;
    cout << "Enter array size: "; cin >> n;

    array<int, 100> arr = { 0 };

    Create(arr, n);
    Print(arr, n);
    cout << "Arithmetic mean: " << Arithmetic_mean(arr, n) << endl;

    return 0;
}

void Create(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
}
void Print(array<int, 100>& arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
double Arithmetic_mean(array<int, 100> arr, int n)
{
    int count = 0;
    double summ = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 != 0)
        {
            summ += arr[i];
            count++;
        }
    return summ / count;
}
