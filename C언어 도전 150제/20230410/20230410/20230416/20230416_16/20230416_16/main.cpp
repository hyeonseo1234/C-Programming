#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    double x;
    double y;
    double z;

    printf("�� ���� �Ǽ��Է� \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x >= y && x >= z)
    {
        printf("���� ū ��%lf \n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("���� ū ��%lf \n", y);
    }
    else
    {
        printf("���� ū ��%lf \n", z);
    }
    if (x <= y && x <= z)
    {
        printf("���� ���� ��%lf \n", x);
    }
    else if (y <= x && y <= z)
    {
        printf("���� ���� ��%lf \n", y);
    }
    else
    {
        printf("���� ���� ��%lf \n", z);
    }

}