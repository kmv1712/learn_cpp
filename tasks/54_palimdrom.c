// Программа сообщит, что введенное слово палидром
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[2000];
    scanf( "%s", s );
    int n = strlen(s);
    for ( int i = 0 , j = n - 1; i < j; ++i, --j  )
    {
        if ( tolower(s[i]) != tolower(s[j]) )
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
