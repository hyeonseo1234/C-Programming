#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &x);

    do
    {
        y = x % 10;
        x /= 10;

        printf("%d", y);
    }
    while (x != 0);

    return 0;
}