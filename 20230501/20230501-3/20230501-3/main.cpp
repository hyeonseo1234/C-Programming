#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    int a, b, c, x;

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d %d %d", &a, &b, &c);

    x = 0;
    if (a >= 0)
    {
        x += a;
    }
    if (b >= 0)
    {
        x += b;
    }
    if (c >= 0)
    {
        x += c;
    }

    printf("�հ�� %d�Դϴ�.\n", x);
}