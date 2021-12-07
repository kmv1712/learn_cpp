#include <stdio.h>

int main()
{
    int a = 0, sum = 0;
    FILE *f = fopen("71_input.txt", "r");

    while ( fscanf(f, "%d ", &a) == 1 )
    {
        sum += a;
    }
    printf("sum=%d\n", sum);
    fclose(f);
    return 0;
}
