#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pa = NULL;

    pa = malloc(100 * sizeof(int));

    for ( int _i = 0; _i < 100; ++_i )
        printf("%d: %p : %d\n", _i, &pa[_i], pa[_i]);

    return 0;
}
