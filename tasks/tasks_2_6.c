#include <stdio.h>
//���� 45 ���,
//����� 1, 3, 5 ������� � 5 ���
//����� 2, 4, 6 ������� � 15 ���

int main()
{

    int n, time;
    scanf("%d", &n);
    time = n * 45;
    time += (n - 1) * 5;
    time += (n - 1) / 2 * 10;
    printf("%d %d\n", 9 + time / 60, time % 60);
}
