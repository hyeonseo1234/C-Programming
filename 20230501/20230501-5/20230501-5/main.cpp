#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x;
    int y;
    double z = 1.0;

    printf("�Ǽ��� ���� �Է��Ͻÿ�:");
    scanf("%lf", &x);

    printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�:");
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        z *= x;
    }

    printf("������� %.6lf\n", z);

    return 0;
}