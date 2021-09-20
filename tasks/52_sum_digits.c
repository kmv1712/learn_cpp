/* Программа ввыведет суму всех чисел в строке*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[100] = "";
    int r = 0;
    fgets( s, 100, stdin );
    for (int i = 0; s[i] != 0; ++i)
    {
        if (isdigit(s[i]))
            r += s[i] - '0';
    }
    printf("%d", r);
    return 0;
}
