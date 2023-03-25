#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string imie, linia, nazwisko;
    int number_phone;

    fstream file;
    file.open("dane.txt", ios::in); 
    int count_linia = 1;
    while(getline(file, linia))
    {
    switch(count_linia)
    {
    case 1: imie = linia; break;
    case 2: nazwisko = linia; break;
    case 3: number_phone = atoi(linia.c_str()); break;
    }
    count_linia++;
    }
    file.close();
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << number_phone << endl;
}