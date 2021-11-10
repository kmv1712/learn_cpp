// Программа посчитает количество маленьких букв английского алфавита из строки
#include <stdio.h>
#include <string.h>

int main()
{
    int a[26] = {0};
    char s[100000] = "";
    fgets(s, 100000, stdin);

    for (int i = 0; s[i] != 0; i++ )
    {
        for (int j = 97; j <= 122; ++j )
        {
            if ( s[i] == j )
                a[j-97] += 1;
        }
    }

    for (int i = 0; i <= 25; ++i)
        printf("%d ", a[i]);

    return 0;
}
