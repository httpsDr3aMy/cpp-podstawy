#include <iostream>
#include <cmath>

using namespace std;

bool czy_pierwsza(int l)
{
    if (l<2)
    {
        return false;
    }
    for (int i = 2; i*i<=l; i++)
    {
        if(l%i==0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int x;
    cout << "Podaj liczbe do sprawdzenia: ";
    cin >> x;
    if (czy_pierwsza(x))
    {
        cout << "Tak.";
    }
    else
    {
        cout << "Nie.";
    }
}