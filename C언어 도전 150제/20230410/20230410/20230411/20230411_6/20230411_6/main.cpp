#define _CRT_SECURE_NO_WARNINGS
#include< stdio.h>

int main(void)
{
	int x;

	printf("���� �Է�: ");
	scanf("%d", &x);

	if (x > 19)
	{
		printf("������ �޽��ϴ�.");
	}
	else
	{
		printf("30%% ���ε˴ϴ�.");
	}
}