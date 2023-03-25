#include <iostream>
using namespace std;

int a, b, ilorazReszta, iloraz;

int main() 
{
  cout << "Witaj w programie sprawdzającym, czy liczba jest całkowita!" << endl;
  cout << "Podaj liczbę: " << endl;
  cin >> a;
  cout << "Podaj dzielnik: " << endl;
  cin >> b;

  ilorazReszta = a%b;
  iloraz = a/b;

  if (ilorazReszta == 0)
  {
    cout << "Liczba jest całkowita!" << endl;
    cout << "Wynik dzielenia wynosi: " << iloraz << endl;
  }
  else
  {
    cout << "Liczba nie jest całkowita i jej reszta wynosi: " << ilorazReszta << endl;
    cout << "Wynik dzielenia wynosi: " << iloraz << endl;
  }

}