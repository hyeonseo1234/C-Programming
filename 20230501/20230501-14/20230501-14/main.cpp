#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int c = 0;
    int d = 0;

    printf("���° �ױ��� ���ұ��? ");
    scanf("%d", &a);

    for (int i = 0; i <= a; i++)
    {
        printf("%d, ", d);

        c = d + b;
        d = b;
        b = c;
    }

    return 0;
}