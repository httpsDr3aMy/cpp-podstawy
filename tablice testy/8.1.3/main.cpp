#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj ilosc elementow: ";
    cin >> n;
    if (n>30)
    {
        cout << "Nie mozna wprowadzic wiekszej liczby niz 30." << endl;
        exit(3);
    }
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczbe do tablicy: ";
        cin >> a[i];
    }
    cout << "Oto twoje liczby: ";
    for (int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    
}

