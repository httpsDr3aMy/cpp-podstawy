#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cout << "Wprowadz ilosc liczb: ";
    cin >> n;
    
    int tab[n], i, highest = tab[0], second = 0;

    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczby: ";
        cin >> tab[i];
    }
    
    for (int i = 0; i<n; i++)
    {
        if (highest < tab[i])
        {
            highest = tab[i];
        }
    }

    for (int i = 0; i<n; i++)
    {
        if (highest > tab[i] && second < tab[i])
        {
            second = tab[i];
        }
    }
    
    cout << "Najwieksza: " << highest << endl;
    cout << "Druga: " << second;
}