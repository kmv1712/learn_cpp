#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    // printf("%d", a);
    unsigned char *pa = &a;
    for( int i = 0; i <= 3; ++i )
    {
        printf("%d ", *(pa+i));
    }

    return 0;
}
