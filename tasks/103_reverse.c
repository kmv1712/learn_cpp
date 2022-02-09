#include <stdio.h>

void reverse()
{
    int n;
    scanf( "%d", &n );

    if( n != 0 )
        reverse();
    printf("%d\n", n);
}

int main()
{
    reverse();
    return 0;
}
