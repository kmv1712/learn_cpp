/* Программа посчитает результат */
#include <stdio.h>
#include <string.h>

int main()
{
    char s[20002];
    fgets( s, 20002, stdin );
    int r = s[0] - '0';
    for ( int i = 0; s[i] != 0; ++i )
    {
        if ( s[i] == '+' )
            r+=s[i+1] - '0';
        else if ( s[i] == '-' )
            r-=s[i+1] - '0';
    }
    printf("%d", r);
    return 0;
}
