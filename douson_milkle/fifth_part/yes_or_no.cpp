// Игра Yes or no
// Демонстрирует работу с возврпщаемыми значениями и параметрами
#include <iostream>
#include <string>
using namespace std;
char askYesNo1();
char askYesNo2(string question);
int main()
{
    char answer1 =  askYesNo1();
    cout << "Спасибо за ваш ответ, вы ответили: " << answer1 << "\n\n";
    char answer2 = askYesNo2("Вы хотите сохранить игру?");
    cout << "Спасибо за ваш ответ, вы ответили:" << answer2 << "\n\n";
    return 0;
}
    
char askYesNo1()
{
    char response1;
    do 
    {
        cout << "Введите y или n/";
        cin >> response1;
    }
    while ((response1 != 'y') && (response1 != 'n'));
    return response1;
}

char askYesNo2(string question)
{
    char response2;
    do 
    {
        cout << question << "y/n: ";
        cin >> response2;
    }
    while ((response2 != 'y') && (response2 != 'n'));
    return response2;
}

