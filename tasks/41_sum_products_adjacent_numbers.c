/* Программа вернет сумму произведений соседних чисел */
#include <stdio.h>

int main()
{
    int n, product = 0, result = 0;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i)
    {
        product = i * (i + 1);
        result += product;
    }
    printf("%d", result);

    return 0;
}
