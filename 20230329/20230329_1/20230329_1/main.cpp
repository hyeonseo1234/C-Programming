#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, result;

	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);

	result = x - y;                   // ���� ����
	printf("%d - %d = %d\n", x, y, result);

	result = x * y;                   // ���� ����
	printf("%d * %d = %d\n", x, y, result);

	result = x / y;                   // ������ ����
	printf("%d / %d = %d\n", x, y, result);

	result = x % y;                   // ������ ����
	printf("%d %% %d = %d\n", x, y, result); // %�� ����Ϸ��� %%�Ͽ��� �Ѵ�.

	return 0;
}