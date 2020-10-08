// Игра где человек загадывает число, а компьютер пытается угадать
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{	
	int hidden_number = 0, computer_number = 0, tries = 0;
	cout << "Загадайте число от 0 до 100 " << endl;
	cin >> hidden_number;

	while (computer_number != hidden_number)
	{ 	
	    ++tries;
            srand(static_cast<unsigned int>(time(0)));
	    computer_number = rand() % 100 + 1;
	}
	cout << "Компьютер угадал с :" << tries;
	return 0;

}
