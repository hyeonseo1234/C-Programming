#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;                   // 뺄셈 연산
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;                   // 곱셈 연산
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;                   // 나눗셈 연산
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;                   // 나머지 연산
	printf("%d %% %d = %d\n", x, y, result); // %을 출력하려면 %%하여야 한다.

	return 0;
}