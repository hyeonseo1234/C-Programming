#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x;

    printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��)");
    scanf("%d", &x);

    for (int i = x; i >= 0; i--)
    {
        printf("%d ", i);
    }
    printf("\a");

    return 0;
}