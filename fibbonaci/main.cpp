#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Wprowadz ilosc liczb ciagu fibonnaciego: ";
    cin >> n;

    long double tab[n];
    tab[0] = 1;
    tab[1] = 1;

    for (int i = 2; i<n; i++)
    {
        tab[i] = tab[i-1] + tab[i-2];
    }

    for (int i = 0; i<n; i++)
    {
        cout << "Liczba nr. " << i+1 << ": " << tab[i] << endl;
    }

    cout << "Aby zakonczyc program kliknij ENTER.";
    getchar();
}