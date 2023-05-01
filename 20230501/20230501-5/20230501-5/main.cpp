#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x;
    int y;
    double z = 1.0;

    printf("실수의 값을 입력하시오:");
    scanf("%lf", &x);

    printf("거듭 제곱 횟수를 입력하시오:");
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        z *= x;
    }

    printf("결과값은 %.6lf\n", z);

    return 0;
}