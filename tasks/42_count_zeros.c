/* Программа считает количество введеных в последовательности нулей */
#include <stdio.h>

int main()
{
    int n, value, count_value = 0;
    scanf( "%d", &n );
    for ( int i = 0; i < n; ++i )
    {
        scanf( "%d", &value );
        if  ( value == 0 )
            count_value += 1;
    }
    printf( "%d", count_value );
    return 0;
}
