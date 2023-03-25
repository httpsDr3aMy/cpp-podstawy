#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   int b = 0;
   while(cin>>b)
   {
       if (b==2)
       {
           a++;
       }

       cout << b << " ";

       if (a==3)
       {
           break;
       }
   } 
}