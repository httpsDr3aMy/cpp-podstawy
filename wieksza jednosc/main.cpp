#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Wprowadz ilosc liczb: ";
    cin >> n;

    int tab[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Wprowadz liczbe: "
        cin >> tab[i];
    }
}