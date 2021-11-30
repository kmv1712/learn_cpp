// Программа посчитает сумму в строке
#include <stdio.h>

int main()
{
    int first_int, next_int, sum;

    scanf("%d", &first_int);
    sum = first_int;

    while ( scanf(",%d", &next_int) == 1 )
    {
        sum += next_int;
    }
    printf("%d\n", sum);

    return 0;
}
