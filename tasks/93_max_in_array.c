#include <stdio.h>
#include <stdlib.h>

int max( int* a, int n )
{
    int m = a[0];
    for( int i=0; i < n; i++ )
    {
        if( a[i] > m )
            m = a[i];
    }
    return m;
}

int main()
{
    int n;
    scanf("%d", &n);
    int* a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%d\n", max(a, n));
    return 0;
}

