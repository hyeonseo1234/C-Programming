#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    double x;
    double y;
    double z;

    printf("세 개의 실수입력 \n");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x >= y && x >= z)
    {
        printf("제일 큰 수%lf \n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("제일 큰 수%lf \n", y);
    }
    else
    {
        printf("제일 큰 수%lf \n", z);
    }
    if (x <= y && x <= z)
    {
        printf("제일 작은 수%lf \n", x);
    }
    else if (y <= x && y <= z)
    {
        printf("제일 작은 수%lf \n", y);
    }
    else
    {
        printf("제일 작은 수%lf \n", z);
    }

}