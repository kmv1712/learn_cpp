#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", (m/n) + (m%n));
    return 0;
}
