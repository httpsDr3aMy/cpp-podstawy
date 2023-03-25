#include <iostream>

using namespace std;

int main()
{
    char znak;
    int user_answer;
    cout << "Wprowadz znak: ";
    cin >> znak;
    while (znak != '.')
    {
    if (znak>95)
    {
        cout << (char)(znak-32) << endl;
    }
    else
    {
        cout << znak << endl;
    }
    cin >> znak;
    }
    cout << endl;
}