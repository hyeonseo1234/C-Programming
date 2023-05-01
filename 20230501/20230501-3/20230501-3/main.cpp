#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
    int a, b, c, x;

    printf("숫자를 입력하세요: ");
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

    printf("합계는 %d입니다.\n", x);
}