// Программа принимает время в формате hh:mm x.m, и выводит в формате hh:mm
#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d:%d", &h, &m );
    printf("%02d:%02d", h, m);

    return 0;
}
