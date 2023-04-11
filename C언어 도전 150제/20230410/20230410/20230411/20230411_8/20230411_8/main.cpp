#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 500;

	y == 500;

	printf("돈 입력: \n");
	scanf("%d", &x);

	if (x == 500)
	{
		printf("음료수가 나왔습니다\n");
	}
	else if (x > 500)
	{
		printf("음료수와 %d원이 나왔습니다\n", x - y);
	}
	else
	{
		printf("%d원 반환\n", x);
	}

}