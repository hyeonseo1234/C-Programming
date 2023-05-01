#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);

    for (c = 1; c <= a && c <= b; ++c)
    {
        if (a % c == 0 && b % c == 0)
            d = c;
    }

    e = (a * b) / d;

    printf("최소 공배수는 %d입니다.\n", e);

    return 0;
}