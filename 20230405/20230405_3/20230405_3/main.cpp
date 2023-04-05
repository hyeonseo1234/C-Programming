// 8번
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIE 3.141592

int main(void)
{
	double x, a, r;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &x);

	a = 4 * PIE * x * x;
	r = 4 * PIE * x * x * x / 3;
	printf("표면적은 %lf입니다.\n체적은 %.2f입니다.\n", a, r);

	return 0;
}