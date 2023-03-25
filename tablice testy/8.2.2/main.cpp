#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a [n];
    for (int i = 0; i<n; i++)
    {
        cin >> a [i];
    }
    
    int najmniejsza = a[0];
    for (int i = 0; i<n; i++)
    {
        if (najmniejsza>a[i])
            {
                najmniejsza = a[i];
            }
    }
    cout << "Oto najwieksza liczba: " << najmniejsza << endl;
}