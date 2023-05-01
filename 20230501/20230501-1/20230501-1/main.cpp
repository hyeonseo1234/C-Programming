#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;

    printf("카운터의 초기값을 입력하시오(단위: 초)");
    scanf("%d", &x);

    for (int i = x; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\a");

    return 0;
}