#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	for (int i = 1; i <= x; i++)
	{
		y += i * i;
	}

	printf("��갪�� %d�Դϴ�", y);

	return 0;
}