#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}