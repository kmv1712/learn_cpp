/*Программа выведет ASCII символы от 33 до 126 */
#include <stdio.h>

int main()
{
    for (int i = 33; i <= 126; ++i )
    {
        printf("%c %d\n", (char)i, i);
    }
    return 0;
}
