#include <iostream>

using namespace std;

int main()
{
    int n, tab[n], najmniejsza = tab[0], z = 0;
    
    cout << "Wprowadz ilosc liczb: ";
    cin >> n;
    
    for (int i = 0; i<n; i++)
    {
        cin >> tab[i];
    }
    
    for (int i = 0; i<n; i++)
    {
        if (najmniejsza>tab[i]) 
        {
            najmniejsza = tab[i];
        }
    }

    for (int i = 0; i<n; i++)
    {
        if (najmniejsza == tab[i])
        {
            z++;
        }
    }
    cout << "Oto najmniejsza liczba: "<< najmniejsza << " i wystapila: " << z;
}