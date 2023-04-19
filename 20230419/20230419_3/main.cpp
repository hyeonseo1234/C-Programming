// 3번 문제
// 학번: 202315011
// 학과: 미래모빌리티공학과
// 이름: 신현서
// 날짜: 20230419
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int x, y, answer, i;
	char op;
	srand(time(NULL));

	x = rand() % 9 + 1;
	y = rand() % 9 + 1;

	switch (rand() % 5) 
	{
		for (i = 0; i < 10; i++) 

		{
	case 0:
		op = '+';
		printf("%d + %d = ", x, y, x + y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
		break;

	case 1:
		op = '-';
		printf("%d - %d = ", x, y, x - y);
		scanf("%d", &answer);
		if (x - y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
		break;

	case 2:
		op = '*';
		printf("%d * %d = ", x, y, x * y);
		scanf("%d", &answer);
		if (x * y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
		break;

	case 3:
		op = '/';
		printf("%d / %d = ", x, y, x / y);
		scanf("%d", &answer);
		if (x / y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
		break;

	case 4:
		op = '%';
		printf("%d %% %d = ", x, y, x % y);
		scanf("%d", &answer);
		if (x % y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
		break;

		}

	}
	
}



/*
int main(void)
{
	int x, y, answer, i;
	srand((unsigned)time(NULL));

	for (i = 0; i < 10; i++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);
		if (x + y == answer)
			printf("맞았습니다. \n");
		else
			printf("틀렸습니다. \n");
	}

	return 0;
}
*/