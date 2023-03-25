#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, dominanta;

    cout << "Wprowadz ilosc liczb: ";
    cin >> n;

    int tab[n];

    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczbe: ";
        cin >> tab[i];
    }

    sort (tab, tab+n);
    for (int i = 0; i<n; i++)
    {
        if (tab[i] == tab[i+1])
        {
            dominanta = tab[i];
        }
    }

        cout << "Oto dominanta: " << dominanta;
}