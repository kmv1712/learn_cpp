#include <iostream>
/*Выведем часы и минуты*/

int main()
{
    int input_minute, minute_day, hourse, minute;
    std::cin >> input_minute;
    minute_day = input_minute  % (24 * 60);
    hourse = minute_day / 60;
    minute = minute_day % 60;
    std::cout << hourse << " " << minute;
    return 0;
}
