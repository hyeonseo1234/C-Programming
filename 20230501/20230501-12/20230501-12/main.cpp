#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;

    do
    {
        printf("막대의 높이(종료: -1): ");
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }

        printf("\n");

    }
    while (n != -1);

    return 0;
}