#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int score = 0;  

	printf("���� �Է�: \n");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A �Դϴ�. \n");
	}
	else if (score >= 80)
	{
		printf("B �Դϴ� \n");
	}
	else if (score >= 70)
	{
		printf("C �Դϴ� \n");
	}
	else if (score >= 60)
	{
		printf("D �Դϴ� \n");
	}
	else
	{
		printf("F �Դϴ� \n");
	}
}