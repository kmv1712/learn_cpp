// Форматирование чисел в столбец

#include <stdio.h>

int main()
{
    int n;
    float arr[100], num, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%f", &num);
        arr[i] = num;
        if (num > max)
            max = num;
    }

    int pow = 10, width = 1;
    while(max >= pow)
    {
        pow *= 10;
        width += 1;
    }

    for (int i = 0; i < n; ++i)
    {
        printf("%*.2f\n", width+3, arr[i]);
    }

    return 0;
}
