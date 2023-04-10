#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	
	printf("숫자 입력: \n");
	scanf("%d", &y);

	x = 20;

	if (x == y)
	{
		printf("x의 값이 y의 값과 같습니다. \n");
	}
    else if (x < y)
	{
		printf("x의 값이 y의 값보다 작습니다. \n");
	}
	else
	{
		printf("x의 값이 y의 값보다 큽니다. \n");
	}

}