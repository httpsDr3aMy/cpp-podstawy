#include <iostream>

using namespace std;

int main()
{
    int t, j = 0;
    cout << "Wprowadz ilosc prostokatow: ";
    cin >> t;
    int A[t*j];
    int B[t*j];
    int C[t*j];
    int D[t*j];

    for (int j = 0; j<t; j++)
    {
        cout << "Podaj szerokosci bokow: " << endl;
        cin >> A[j] >> B[j];
        cout << "Podaj dlugosci bokow: "<< endl;
        cin >> C[j] >> D[j]; 
    }
    for (int j = 0; j<t; j++)
    {
        if (A[j] == B[j] == C[j] == D[j])
        {
            cout <<"Tak, to kwadrat, nr. " << j+1 << endl;
        }
        else if (A[j] == B[j] && C[j] == D[j])
        {
            cout <<"Tak to prostokat, nr. " << j+1 << endl;
        }
        else
        {
            cout << "Nie jest to prostokat, nr. " << j+1 << endl;
        }
    }    
} 