// 8��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PIE 3.141592

int main(void)
{
	double x, a, r;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	a = 4 * PIE * x * x;
	r = 4 * PIE * x * x * x / 3;
	printf("ǥ������ %lf�Դϴ�.\nü���� %.2f�Դϴ�.\n", a, r);

	return 0;
}