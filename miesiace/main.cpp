#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int month;

    cout << "Podaj miesiac: ";
    if(!(cin >> month))
    {
        cerr << "Nie prawidlowy miesiac!";
    }

    switch (month)
    {
    case 1:
        cout << "Twoj miesiac ma "
        break;
    
    default:
        break;
    }
}