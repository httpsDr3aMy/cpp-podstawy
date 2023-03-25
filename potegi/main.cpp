#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    unsigned long long potega = 1;
    int liczba;
    cout << "Podaj do jakiej potegi program ma potegowac: ";
    cin >> n;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    for (int i = 0; i<=n; i++)
    {
        cout << liczba << " do potegi " << i << " wynosi: " << potega << endl;
        potega *= liczba;
    }
}