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
    
    int najwieksza = a[0];
    for (int i = 0; i<n; i++)
    {
        if (najwieksza<a[i])
            {
                a[i] = najwieksza;
            }
    }
    cout << "Oto najwieksza liczba: " << najwieksza << endl;
}