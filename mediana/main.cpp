#include <iostream>

using namespace std;
 
int main()
{
    int n = 0;

    cout << "Wprowadz ilosc liczb: ";
    cin >> n;

    int tab[n], wynik, mediana;
    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczbe: ";
        cin >> tab[i];
    }
    
    for (int i = 0; i<n; i++)
    {
        wynik = wynik + tab[i];
    }
    
    mediana = wynik / n;
    
    cout << mediana;
}