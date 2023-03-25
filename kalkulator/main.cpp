#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;



int main()
{
    int suma, roznica, iloczyn, iloraz, choice = getchar(), n;
    
    for(;;)
    {
    cout << "MENU GLOWNE" << endl;
    cout << "-----------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Zakoncz dzialanie programu" << endl;
    cout << endl;
    cout << "Wybierz funkcje: ";
    cin >> choice;
    cout << "Podaj ilosc liczb: ";
    cin >> n;
    int tab[n];
    for (int i = 0; i<n; i++)
    {
    cout << "Podaj liczbe nr. " << i+1 << ": ";
    cin >> tab[i];
    }
    }
    
    int tab[n];

    switch(choice)
    {
        case '1':
        {for (int i = 0; i<n; i++)
        {
            suma += tab[i];
        }
            cout << "Suma: " << suma;}
        break;
        case '2':
        {for (int i = 0; i<n; i++)
        {
            roznica -= tab[i];
        }
        cout << "Roznica: " << roznica;}
        break;
        case '3':
        {for (int i = 0; i<n; i++)
        {
            iloczyn *= tab[i];
        }
        cout << "Iloczyn: " << iloczyn;}
        break;
        case '4':
        {for (int i = 0; i<n; i++)
        {
            if (tab[i] == 0)
            {
                cout << "Nie dzielimy przez zero!";
            }
        }
        for (int i = 0; i<n; i++)
        {
            iloraz /= tab[i];
        }
        cout << "Iloraz: " << iloraz;}
        break;
        case '5':
            {exit(0);}
        break;
        default: cout << "Nie prawidłowa opcja.";
    }
    system("cls");
}