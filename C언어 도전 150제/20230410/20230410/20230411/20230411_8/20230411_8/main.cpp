#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 500;

	y == 500;

	printf("�� �Է�: \n");
	scanf("%d", &x);

	if (x == 500)
	{
		printf("������� ���Խ��ϴ�\n");
	}
	else if (x > 500)
	{
		printf("������� %d���� ���Խ��ϴ�\n", x - y);
	}
	else
	{
		printf("%d�� ��ȯ\n", x);
	}

}