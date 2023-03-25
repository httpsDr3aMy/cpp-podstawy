#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Podaj 1. przedzial: ";
    cin >> x;
    cout << "Podaj 2. przedzial: ";
    cin >> y;
    while(x<=y)
    {
        cout << x << " ";
        x++;
    }
}