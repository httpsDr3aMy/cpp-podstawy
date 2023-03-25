#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Wprowadz ilosc liczb: ";
    cin >> n;

    int tab[n], lowest = tab[0], second = tab[0], count_second;

    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczbe: ";
        cin >> tab[i];
    }

    for (int i = 0; i<n; i++)
    {
        if (lowest < tab[i])
        {
            lowest = tab[i];
        }
    }

    for (int i = 0; i<n; i++)
    {
        if (lowest < tab[i] && second > tab[i])
        second = tab[i];
    }

    for (int i = 0; i<n; i++)
    {
        if (tab[i] == second)
        {
            count_second++;
        }
    }
    cout << "Ilosc: " << count_second;
}