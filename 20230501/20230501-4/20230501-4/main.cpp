#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			printf("%d", i);
		}

	}

	return 0;
}