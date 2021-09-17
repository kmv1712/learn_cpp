/* Программа вернет максимальный элемент из массива */
#include <stdio.h>

int main()
{
    int n;
    scanf( "%d", &n );
    int A[n];
    for (int i = 0; i < n; ++i )
        scanf("%d", &A[i]);

    int m = A[0];
    for (int i = 1; i < n; ++i)
    {
        if ( A[i] > m )
            m = A[i];
    }
    printf("%d", m);
    return 0;
}
