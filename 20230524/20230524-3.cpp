//202315011 ������
//3��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int menu(void)
{
	int n;
	printf("1.���丮��\n");
	printf("2.����\n");
	printf("3.�α�(base 10)\n");
	printf("4.������\n");
	printf("5.����(nPr)\n");
	printf("6.����(nCr)\n");
	printf("7.����\n");
	printf("�������ּ���: \n");
	scanf("%d", &n);
	return n;

}

void factorial()
{
	long long n, result = 1, i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
		result = result * i;
	printf("��� = %lld\n\n", result);
}
void sine()
{
	double a, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	result = sin(a);
	printf("��� = %lf\n\n", result);

}

void logbase10()
{
	double a, result;
	printf("�Ǽ����� �Է��Ͻÿ�: ");
	scanf("%lf", &a);
	if (a <= 0.0)
		printf("����\n");
	else
	{
		result = log10(a);
		printf("��� = %lf\n\n", result);

	}
}

int main(void)
{
	while (1) {
		switch (menu()) {
		case 1:
			factorial();
			break;
		case 2:
			sine();
			break;
		case 3:
			logbase10();
			break;
		case 7:
			printf("�����մϴ�.\n");
			break;
		default:
			printf("�߸��� �����Դϴ�.");
			break;
		}
	}
}