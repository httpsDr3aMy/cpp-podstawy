#include <iostream>

using namespace std;



int main()
{
    int z = 10;
    int a[10];
    for (int i = 0; i<z; i++)
    {
        cout << "Wprowadz zmienna: ";
        cin >> a[i];
    }
    cout << "Oto liczby: ";
    for (int i = 9; i>=0; i--)
    {
        cout << a[i] << " ";
    }

}