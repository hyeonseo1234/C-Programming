#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int score = 0;  

	printf("숫자 입력: \n");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A 입니다. \n");
	}
	else if (score >= 80)
	{
		printf("B 입니다 \n");
	}
	else if (score >= 70)
	{
		printf("C 입니다 \n");
	}
	else if (score >= 60)
	{
		printf("D 입니다 \n");
	}
	else
	{
		printf("F 입니다 \n");
	}
}