#define _CRT_SECURE_NO_WARNINGS
#include< stdio.h>

int main(void)
{
	int x;

	printf("나이 입력: ");
	scanf("%d", &x);

	if (x > 19)
	{
		printf("정가로 받습니다.");
	}
	else
	{
		printf("30%% 할인됩니다.");
	}
}