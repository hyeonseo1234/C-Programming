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

	printf("5���� �Ǽ� �Է�");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

	x = a + b + c + d + e;
	y = x / 5;
	
	printf("�� %lf", x);
	printf("��� %lf", y);

	return 0;
}