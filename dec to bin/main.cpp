#include <iostream>

using namespace std;

void dec_to_bin(int liczba_dec)
{
    int i=0,tab[31];

	while(liczba_dec)
	{
		tab[i++]=liczba%2;
		liczba/=2;
	}

	for(int j=i-1;j>=0;j--)
		cout<<tab[j];
}

int main()
{
    int liczba_dec;
    cout << "Podaj liczbe (10): ";
    cin >> liczba_dec;
    cout << "W systemie binarnym to: " << dec_to_bin(liczba_dec);
}