#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout << "Podaj slowo: ";
    getline(cin, word);
    int length = word.length();

    for (int i = length-1; i>=0; i--)
    {
        cout << word[i];
    }
    
}