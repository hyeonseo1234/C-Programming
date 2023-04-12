#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int x;

	printf("숫자 입력: \n");
	scanf("%d", &x);

	if (x >= 0)
	{
		printf("%d\n", abs(x));
	}
	else
	{
		printf("%d\n", abs(x));
	}

}