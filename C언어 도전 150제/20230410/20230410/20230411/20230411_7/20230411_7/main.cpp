#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("ü���µ� �Է�: \n");
	scanf("%d", &x);
	
	printf("���ӵ� ��¥: \n");
	scanf("%d", &y);

	if (x >= 35 && y >= 2)
	{
		printf("�����溸\n");
	}
	else if (x >= 33 && y >= 2)
	{
		printf("�������Ǻ�\n");
	}
	else
	{
		printf("�ƹ� �̻� ����.\n");
	}

}