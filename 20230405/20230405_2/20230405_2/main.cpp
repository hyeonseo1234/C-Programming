// 5번
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("십의 자리: %d \n일의 자리: %d \n", x / 10, x % 10);

	return 0;
}