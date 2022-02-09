#include <stdio.h>

int sum()
{
    int n;
    scanf("%d", &n);
    if( n != 0 )
        n = n + sum();
    return n;
}

int main()
{
    printf("%d\n", sum());
    return 0;
}
