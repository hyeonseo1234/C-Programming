#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	
	printf("���� �Է�: \n");
	scanf("%d", &y);

	x = 20;

	if (x == y)
	{
		printf("x�� ���� y�� ���� �����ϴ�. \n");
	}
    else if (x < y)
	{
		printf("x�� ���� y�� ������ �۽��ϴ�. \n");
	}
	else
	{
		printf("x�� ���� y�� ������ Ů�ϴ�. \n");
	}

}