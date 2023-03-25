#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Wprowadz liczbe: ";
    cin >> x;
    cout << "Oto pierwiastek kwadratowy z: " << sqrt(x) << endl;
    cout << "Oto pierwiastek szescienny z: " << cbrt(x);
}