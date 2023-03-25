#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x[2], y[2];
    cout << "Wprowadz wspolrzedna x1: ";
    cin >> x[0];
    cout << "Wprowadz wspolrzedna x2: ";
    cin >> x[1];
    cout << "Wprowadz wspolrzedna y1: ";
    cin >> y[0];
    cout << "Wprowadz wspolrzedna y2: ";
    cin >> y[1];
    cout << "Odleglosc miedzy tymi wspolrzednymi wynosi: " << sqrt((x[1]*x[0]-x[1]*x[0])*(x[1]*x[0]-x[1]*x[0])+(y[1]*y[0]-y[1]*y[0])*(y[1]*y[0]-y[1]*y[0]));
}