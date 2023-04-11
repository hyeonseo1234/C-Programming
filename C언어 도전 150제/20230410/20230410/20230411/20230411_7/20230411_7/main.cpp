#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("체감온도 입력: \n");
	scanf("%d", &x);
	
	printf("지속된 날짜: \n");
	scanf("%d", &y);

	if (x >= 35 && y >= 2)
	{
		printf("폭염경보\n");
	}
	else if (x >= 33 && y >= 2)
	{
		printf("폭염주의보\n");
	}
	else
	{
		printf("아무 이상 없음.\n");
	}

}