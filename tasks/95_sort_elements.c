#include<stdio.h>
#include<stdlib.h>

void sort( int * a, int size )
{
    for ( int i = 0; i < size - 1; ++i )
    {
        int k = i;
        for ( int j = i + 1; j < size; ++j )
        {
            if ( a[j] < a[k] )
                k = j;
        }
        int tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
    }
}

int main()
{
    int n;
    scanf( "%d", &n );
    int * a = ( int * )malloc( n * sizeof( int ) );
    for ( int i = 0; i < n; ++i )
        scanf( "%d", &a[i] );
    sort( a, n );
    for ( int i = 0; i < n; ++i )
        printf( "%d ", a[i] );
    printf( "\n" );
    return 0;
}

