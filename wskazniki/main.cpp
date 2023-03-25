#include <iostream>

using namespace std;

int srednia(int *wsk, int ile)
{
    int suma = 0;
    for (int i = 0; i<ile; i++)
    {
    suma += *wsk;
    wsk++;
    }
    return suma/ile;
}

int main()
{
    int tab[3];
    tab[0] = 2;
    tab[1] = 5;
    tab[2] = 3;
    cout << "Liczba to:" << srednia(tab, 3);
}