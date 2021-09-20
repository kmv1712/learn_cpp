/* Программа выведет квадрат по диагонали которого нули, следующая диагональ 1, следующая диагональ 2 */
#include <stdio.h>
// 5
// 0 1 2 3 4
// 1 0 1 2 3
// 2 1 0 1 2
// 3 2 1 0 1
// 4 3 2 1 0

int main()
{
    int n;
    scanf("%d", &n);
    int A[n][n];
    for ( int i = 0; i < n; ++i)
    {
        for ( int j = 0; j < n; ++j)
        {
            if ( i > j )
                A[i][j] = i - j;
            else
                A[i][j] = j - i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for ( int j = 0; j < n; ++j )
            printf( "%d", A[i][j]);
        printf("\n");
    }
    return 0;
}
