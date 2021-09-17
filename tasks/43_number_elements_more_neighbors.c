/* Программа вернет количесто элементов которые больше своих соседей */
#include <stdio.h>

int main()
{
    int n;
    scanf( "%d", &n );
    int A[n];

    for ( int i = 0; i < n; ++i )
        scanf( "%d", &A[i] );

    int count = 0;
    for ( int i = 1; i < n - 1; ++i )
    {
        if ( A[i] > A[i-1] && A[i] > A[i+1] )
            ++count;
    }

    printf("%d\n", count);

    return 0;
}
