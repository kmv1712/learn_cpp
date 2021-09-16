/* Программа ищет максимальное целое число */
#include <stdio.h>

main()
{
    int a, b, c, m;
    scanf( "%d %d %d", &a, &b, &c );
    if ( a > b )
        m = a;
    else
        m = b;

    if ( c > m )
        m = c;

    printf("%d", m);

    return 0;
}
