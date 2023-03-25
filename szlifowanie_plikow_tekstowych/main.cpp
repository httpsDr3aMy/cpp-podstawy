#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int nr_lini = 1, telefon;
    string linia, imie;
    fstream dane;
    dane.open("dane.txt", ios::out);
    while(getline(dane, linia))
    {
        switch (nr_lini)
        {
        case 1:
        {
            imie = linia;   
            break;
        }
        case 2:
        {
            telefon = atoi (linia.c_str());   
            break;
        }
        }
        nr_lini++;
    }
    cout << imie << " ";
    cout << telefon;


}