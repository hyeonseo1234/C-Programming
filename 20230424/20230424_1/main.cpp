// 3번 문제
// 학번: 202315011
// 학과: 미래모빌리티공학과
// 이름: 신현서
// 날짜: 20230424
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