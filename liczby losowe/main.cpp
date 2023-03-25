#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba, bet;

    srand(time(NULL));
    liczba = rand()%100+1;
    
    for (int i = 1; bet!=liczba; i++)
    {
    cout << "Podaj liczbe: ";
    cin >> bet;
    if (liczba < bet)
    {
        cout << "Za duza liczba" << endl << endl;
    }
    else if (liczba > bet)
    {
        cout << "Za mala liczba" << endl << endl;
    }
    else if (liczba == bet)
    {
        cout << "Gratulacje, udalo ci sie za: " << i << " razem." << endl;
        cout << "Nacisnij klawisz ENTER, aby zakonczyc.";
        getchar();
    }
    }
}