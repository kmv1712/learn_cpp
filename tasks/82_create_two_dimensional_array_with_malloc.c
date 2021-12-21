#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ** pa = NULL;

    pa = malloc(10 * sizeof(int *));
    for (int i = 0; i < 10; ++i)
    {
        pa[i] = malloc(10 * sizeof(int));
        for (int j = 0; j < 10; ++j)
            pa[i][j] = i * j;
    }


    for (int _i = 0; _i < 10; ++_i)
    {
        for (int _j = 0; _j < 10; ++_j)
            printf("%02d ", pa[_i][_j]);
        printf("\n");
    }
    return 0;
}
