// 10번 문제
// 학번: 202315011
// 학과: 미래모빌리티공학과
// 이름: 신현서
// 날짜: 20230424
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 2; x <= 100; x++)
	{
		z = 1;
		for (y = 2; y < x; y++)
		{
			if (x % y == 0)
			{
				z = 0;
				break;
			}
		}
		if (z == 1)
		{
			printf("%d", x);
		}
	}

	return 0;

}
