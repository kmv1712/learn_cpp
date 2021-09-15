#include <stdio.h>
//Урок 45 мин,
//После 1, 3, 5 перерыв в 5 мин
//После 2, 4, 6 перерыв в 15 мин

int main()
{

    int n, time;
    scanf("%d", &n);
    time = n * 45;
    time += (n - 1) * 5;
    time += (n - 1) / 2 * 10;
    printf("%d %d\n", 9 + time / 60, time % 60);
}
