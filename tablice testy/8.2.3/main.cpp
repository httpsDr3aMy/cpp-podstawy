#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Wprowadz ilosc zmiennych: ";
    cin >> n;
    int a [n];
    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz zmienna: ";
        cin >> a [i];
    }
    
    int najmniejsza = a[0];
    for (int i = 0; i<n; i++)
    {
        if (najmniejsza>a[i])
            {
                najmniejsza = a[i];
            }
    }
    int z = 0;
    for (int i = 0; i<n; i++)
    {
        if (najmniejsza == a[i])
        {
            z++;
        }
    }
    cout << "Oto najmniejsza liczba: " << najmniejsza << " i wystapila: "<< z << " razy." << endl;
    cout << "Nacisnij ENTER, aby zakonczyc dzialanie programu." << endl;
    getchar();
}
