#include <iostream>

using namespace std;

int main()
{
    int n, 
	max_dl = 1, 
	poczatek, 
	dl = 1, p = 0;
    int tab[1000000];
    cin >> tab[0];
    poczatek = p = 0;

    for (int i = 1; i<n; i++)
    {
        cin >> tab[i];
        if (tab[i] > tab[i-1])
        {
            dl++;
            if(dl>max_dl)
            {
                max_dl = dl;
                poczatek = p;
            }
        }
        else
        {
            p = i;
            dl = 1;
        }
    }
    for(int i = poczatek;i<poczatek + max_dl;i++)
    {
    	cout<<tab[i]<<" ";
    }
}