/* ��������� ������ �� ���� ���������� ����� ����� � �� ��������, � ��������� ������ ����� ����� ����� */
#include <stdio.h>

int main()
{
    int n, value, num = 0;
    scanf("%d", &n);
    for ( int i = 1; i <= n; ++i)
    {
        scanf("%d", &value);
        num += value;
    }
    printf("%d", num);

    return 0;
}
