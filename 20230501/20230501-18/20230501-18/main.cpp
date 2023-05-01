#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    double x = 0.0;

    printf("항의 개수: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        x += 1.0 / i;
    }

    printf("수열의 합: %lf\n", x);

    return 0;
}