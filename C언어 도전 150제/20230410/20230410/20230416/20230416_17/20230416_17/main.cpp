#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double e = 0;

	printf("5개의 실수 입력");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

	x = a + b + c + d + e;
	y = x / 5;
	
	printf("합 %lf", x);
	printf("평균 %lf", y);

	return 0;
}