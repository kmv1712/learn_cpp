#include <stdio.h>
// �� ����� �����, �������, ����������, �� ������ ����

int main()
{
    int a, b, n, c;
    scanf("%d %d %d", &a, &b, &n);
    c = a*100 + b;
    printf("%d %d", (c*n)/100, (c*n)%100);
    return 0;
}
