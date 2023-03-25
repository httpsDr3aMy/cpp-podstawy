#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    int n;
    cout << "USTAWIENIA DLA ADMINISTRATORA" << endl;
    cout << "Wprowadz MAKSYMALNA ilosc uzytkownikow: ";
    cin >> n;
    cout << "-----------------------------------------------------" << endl;
    string user_answer, user_name[n], password[n], password_check;
    int i = 0;
    while (true)
    {
        fstream admin_data;
        admin_data.open("dane_dla_administratora.txt", ios::out | ios::app);
        if (admin_data.good() == false)
        {
            cout << "Pliki dla administratora nie istnieja!" << endl;
            cout << "Prosze utworzyc plik!" << endl;
        }
        cout << "Witaj w naszym systemie!" << endl;
        cout << "Wybierz czy chcesz sie zalogowac, zarejestrowac, czy tez moze opuscic program: ";
        cin >> user_answer;
        cout << "-----------------------------------------------------" << endl;
        /*-------------------------------------------------------rejestracja---------------------------------------------------------------------------*/
        if (user_answer == "REGISTER" || user_answer == "Register" || user_answer == "register")
        {
            int count_user_taken = 0, count_password_taken = 0;
            cout << "Wprowadz uzytkownika: ";
            cin >> user_name[i];
            cout << "Wprowadz haslo: ";
            cin >> password[i];
            cout << "Wprowadz jeszcze raz haslo: ";
            cin >> password_check;
            int j = 0;
            while(int count_user_taken = 0)
            {
                j++;
                if (user_name[i] == user_name[j+1])
                {
                    count_user_taken++;
                }
            }
            if (count_user_taken < 0)
            {
                cout << "Juz istnieje takie konto!" << endl;
                cout << '\a';
                cout << "-----------------------------------------------------" << endl;
            }
            if (password[i] == password_check)
            {
                cout << "Zarejestrowano poprawnie!" << endl;
                admin_data<<user_name[i]<<endl;
                admin_data<<password[i]<<endl;
                Sleep(1000);
                system("cls");
            }
            if (password[i] != password_check)
            {
                cout << "Hasla roznia sie!" << endl;
                cout << "-----------------------------------------------------" << endl;
            }
            i++;
        }
        /*--------------------------------------------------logowanie-do-systemu----------------------------------------------------------*/
        if (user_answer == "LOGIN" || user_answer == "Login" || user_answer == "login")
        {
            int count_user_taken = 0, count_password_taken = 0;
            cout << "Wprowadz uzytkownika: ";
            cin >> user_name[i];
            cout << "Wprowadz haslo: ";
            cin >> password[i];
            int j = 0;
            while(int count_user_taken = 0)
            {
                j++;
                if (user_name[i] == user_name[j+1])
                {
                    count_user_taken++;
                }      
            }
            while(int count_password_taken = 0)
            {
                j++;
                if (password[i] == password[j+1])
                {
                    count_password_taken++;
                }      
            }
            if (count_user_taken != 1)
            {
                cout << "Takie konto nie istnieje!" << endl;
                cout << "-----------------------------------------------------" << endl;
                cout << '\a';
                if (count_password_taken != 1)
                {
                cout << "Podano zle haslo!" << endl;
                cout << "-----------------------------------------------------" << endl;
                cout << '\a';
                }
            }
            if (password[i] == password_check && count_user_taken == 1 && count_password_taken == 1)
            {
                cout << "Zalogowano!" << endl;
                system("cls");
            }
            i++;
        }
        /*------------------------------------------------------wyjscie-z-systemu-----------------------------------------------------------*/
        if (user_answer == "EXIT" || user_answer == "Exit" || user_answer == "exit")
        {
            admin_data.close();
            exit(0);
        }
    }
}
