#include <iostream>

using namespace std;

int main()
{
    unsigned int licznik, mianownik; 
    cout << "Podaj licznik: ";
    cin >> licznik;
    cout << "Podaj mianownik: ";
    cin >> mianownik;
    cout << licznik << "/" << mianownik << " = " << licznik/mianownik << " " <<  licznik%mianownik << "/" << mianownik;
}