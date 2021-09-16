#include <stdio.h>
/*Выведем часы и минуты*/

int main()
{
    int input_minute, minute_day, hourse, minute;
    scanf("%d", &input_minute);
    minute_day = input_minute  % (24 * 60);
    hourse = minute_day / 60;
    minute = minute_day % 60;
    printf("%d %d", hourse, minute);
    return 0;
}
