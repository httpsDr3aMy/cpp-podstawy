#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Wprowadz ile liczb: ";
    cin >> n;
    int liczba[n];
    
    for (int i = 0; i<n; i++)
    {
        cout << "Wprowadz liczbe: ";
        cin >> liczba[i];
    }
    
    for (int i = 0; i<n; n--)
    {
        if (liczba[n] % 2 == 0)
        {
            cout << liczba[n] << "- parzysta" << endl;
        }
        else
        {
            cout << liczba[n] << "- nieparzysta" << endl;
        }
    }
}