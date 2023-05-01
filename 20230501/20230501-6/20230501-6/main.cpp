#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("n의 값을 입력하시오: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		y += i * i;
	}

	printf("계산값은 %d입니다", y);

	return 0;
}