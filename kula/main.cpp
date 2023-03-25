#include <iostream>

using namespace std;

int main()
{
    const double pi = 3.1416;
    double r;
    cout << "Pobierz r: ";
    cin >> r;
    cout << "Pole sfery o promieniu: " << 4*pi*r*r << endl;
    cout << "Objetosc kuli o promieniu: " << 4/3*pi*r*r*r;
}