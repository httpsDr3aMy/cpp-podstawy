#include <iostream>

using namespace std;

bool czy_przestepny(int r)
{
   if((r%4==0 && r%100!=0) || r%400==0) 
   {
       return true;
   }
   else
   {
       return false;
   }
}
int main()
{
    int year;
    cout << "Podaj rok: ";
    cin >> year;
    if (czy_przestepny(year))
    {
        cout << "Tak";
    }
    else
    {
        cout << "Nie";
    }
}