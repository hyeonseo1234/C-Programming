#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("�ΰ��� ������ �Է��ϼ���: ");
    scanf("%d %d", &a, &b);

    for (c = 1; c <= a && c <= b; ++c)
    {
        if (a % c == 0 && b % c == 0)
            d = c;
    }

    e = (a * b) / d;

    printf("�ּ� ������� %d�Դϴ�.\n", e);

    return 0;
}