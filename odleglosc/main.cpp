#include <iostream>

using namespace std;

int main()
{
  int n, a, b, a_licznik, b_licznik, dlugosc;

  cout << "Wprowadz ilosc liczb: ";
  cin >> n;

  int tab[n];

  for (int i = 0; i<n; i++)
  {
      cout << "Wprowadz liczbe: ";
      cin >> tab[i];
  }

  cout << "Wyznacz a: ";
  cin >> a;

  cout << "Wyznacz b: ";
  cin >> b;

  for (int i = 0; i<n; i++)
  {
      if (tab[i] == a)
      {
      a_licznik = i;
      break;
      }
  }

  for (int i = 0; i<n; i++)
  {
      if (tab[i] == b)
      {
      b_licznik = i;
      break;
      }
  }

  if (a<b)
  {
      swap (a, b);
  }

  dlugosc = a / b;

  cout << "Oto dlugosc miedzy a i b: " << dlugosc;
}