#include <stdio.h>
#include <stdlib.h>

void order( int* a, int* b, int* c)
{
    _order(a, b);
    _order(a, c);
    _order(b, c);
}

void _order( int* a, int* b )
{
    if( *a > *b )
    {
        int t = *a;
        *a = *b;
        *b = t;
    }
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    order(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
