#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    double x = 0.0;

    printf("���� ����: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        x += 1.0 / i;
    }

    printf("������ ��: %lf\n", x);

    return 0;
}