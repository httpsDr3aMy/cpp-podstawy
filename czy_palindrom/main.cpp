#include <bits/stdc++.h>
using namespace std;

int main()
{
string a;
cin >> a;
int i = 0;
string t;

while (i < a.length())
{
  t = a[i]+ t;
  i++;
}

if (a == t)
  cout << "TAK\n";
else
  cout << "NIE\n";

return 0;
}