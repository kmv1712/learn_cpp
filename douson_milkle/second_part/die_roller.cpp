// Программа Die Roller
// Демонстрирует генерирование случаыйных чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	// запусукаем генераор случаных чисел
	int randomNumber = rand();// генерируем случайное число
	int die = (randomNumber % 6) + 1;// получаем число между 1 и 6
	cout << "You rolled a " << die << endl;
	return 0;
}
