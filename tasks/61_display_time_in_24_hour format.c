// Программа принимает время в формате hh:mm x.m, и выводит в формате hh:mm
#include <stdio.h>

int main()
{
    int h, m;
    char x;
    scanf("%d:%d %c.m", &h, &m, &x );

    h%=12;
    if ( x == 'p' )
        h+=12;

    printf("%02d:%02d", h, m);

    return 0;
}
