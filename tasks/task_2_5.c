#include <stdio.h>
// �� ����� ����������� ����� ���������� �������� ����� ��� �����

int main()
{
    int x, r;
    scanf("%d", &x);
    r = (x/100 + (x%100)/10 + x%10);
    printf("%d", r);
    return 0;
}
