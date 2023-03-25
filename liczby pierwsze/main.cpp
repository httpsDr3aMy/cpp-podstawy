#include <iostream>

using namespace std;

bool czy_pierwsza(int *wsk, int count)
{
    for (int j = 0; j<count; j++)
    {
        if (*wsk<2)
        {
            return false;
        }
        for (int i = 2; i*i<=4; i++)
        {
            if(*wsk%i==0)
            {
                return false;
            }
    }
    return true;
}

int main()
{
    int n = 0;
    while(n>10000)
    {
        cout << "Wprowadz ilosc liczb";
        cin >> n;
        if (n>10000)
        {
            cout << "Nie moze byc wiecej niz 10000 liczb.";
        }
    }
    
    int tab[n];

    for (int i = 0; i<n; i++)
    {
        cout << "Pobierz liczbe nr.: " << i;
        cin >> tab[i];
    }

    for (int i = 0; i<n; i++)
    {
        bool czy_pierwsza(tab, n);
        if (true)
        {
            cout << "tak";
        }
        else
        {
            cout << "nie";
        }  
    }
}