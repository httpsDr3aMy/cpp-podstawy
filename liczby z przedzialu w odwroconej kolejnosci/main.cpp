#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Podaj 1. liczbe z przedzialu (mniejsza): ";
    cin >> x;
    cout << "Podaj 2. liczbe z przedzialu (wieksza): ";
    cin >> y;
    while (x<=y)
    {
        cout << y << " ";
        y--;
    }
}