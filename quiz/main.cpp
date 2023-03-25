#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string author, topic, content[5], answer_a[5], answer_b[5], answer_c[5], answer_d[5], correct[5], line, answer;
    fstream file;
    file.open ("quiz.txt", ios::in);
    int count_line = 1, score = 0, count_question = 0;
    while(getline(file, line))
    {
    switch(count_line)
    {
        case 1:
        author = line;
        break;
        case 2:
        topic = line;
        break;
        case 3:
        content[count_question] = line;
        break;
        case 4:
        answer_a[count_question] = line;
        break;
        case 5:
        answer_b[count_question] = line;
        break;
        case 6:
        answer_c[count_question] = line;
        break;
        case 7:
        answer_d[count_question] = line;
        break;
        case 8:
        correct[count_question] = line;
        break;
    }
    if (count_line == 8)
    {
        count_line = 2;
        count_question++;
    }
    }
    file.close();

    for (int i = 0; i<=4; i++)
    {
    cout << endl << content[i] << endl;
    cout << "A." << answer_a[i] << endl;
    cout << "B." << answer_b[i] << endl;
    cout << "C." << answer_c[i] << endl;
    cout << "D." << answer_d[i] << endl;
    
    cout << "Podaj odpowiedz: ";
    cin >> answer;
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == correct[i])
    {
        cout << "Gratuluje zdobywasz punkt!";
        score++;
    }
    else
    {
        cout << "Nie zdobywasz punktu :(";
    }
    }

    cout << endl << "Zdobyles: " << score << " punktow.";
    system("pause");

}
