/* Расчитать факториал числа
Помним что !n = 1 * 2 * 3 * ... * n */
#include <stdio.h>

/* Решение с while
int main()
{
    int n, fact = 1, j = 1;
    scanf("%d", &n);
    while (j < n)
    {
        j += 1;
        fact *= j;
    }
    printf("%d\n", fact);

    return 0;
}
*/

// Решение с for
int main()
{
    int n, fact, i;
    fact = 1;
    scanf("%d", &n);
    for ( int i = 2; i <= n; ++i )
    {
        fact *= i;
    }
    printf("%d\n", fact);
    return 0;
}
