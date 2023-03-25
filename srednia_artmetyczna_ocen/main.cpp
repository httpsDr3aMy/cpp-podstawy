#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Wprowadz ilosc ocen: ";
    cin >> n;
    float tab[n], suma, srednia;
    for (int i = 0; i<n; i++)
    {
      cout << "Wprowadz ocene: ";
      cin >> tab[i];
      suma += tab[i];
    }
    srednia = suma / n;
    cout << "Twoja srednia artemtyczna ocen wynosi: " << srednia << endl;
    cout << "Nacisnij ENTER, aby zakonczyc dzialanie programu.";
    system("pause");
    return 0;
}