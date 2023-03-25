#include <iostream>

using namespace std;

int main()
{
    double x;
    cout << "Podaj liczbe: ";
    cin >> x;
    cout << "|" << x << "| = ";
    if (x<0)
    {
        cout << -x;
    }
    else
    {
        cout << x;
    }
}