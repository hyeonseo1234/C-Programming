/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number > 0)
		printf("����Դϴ�.\n");

	printf("�Էµ� ���� %d�Դϴ�.\n", number);
	return 0;
} */

/*
* // if ���� ����Ͽ� ������ ���ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if( number = 0)
		number = -number;

	printf("������ %d�Դϴ�.\n", number);
	return 0;
} */

/*
* 
* // if ���� ����Ͽ� Ȧ���� ¦���� �����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("�Էµ� ������ ¦���Դϴ�.\n");
	else
		printf("�Էµ� ������ Ȧ���Դϴ�.\n");

	return 0;
} */

/*
* // �������� �ϱ� ���� �и� 0������ if-else ���� �̿��Ͽ� �˻�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, d, result;

	printf("���ڿ� �и� �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &d);

	if (d == 0)
	{
		printf("0���� ���� ���� �����ϴ�.\n");
	}
	else
	{
		result = n / d;
		printf("����� %d�Դϴ�.\n", result);
	}
	return 0;
} */

/*
// ���� �Ǵ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int year;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�.\n", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
	return 0;
} */

/*
// ������ �޾Ƽ� ������ �����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("���� A\n");
	}
	else if (score >= 80)
	{
		printf("���� B\n");
	}
	else if (score >= 70)
	{
		printf("���� C\n");
	}
	else if (score >= 60)
	{
		printf("���� D\n");
	}
	else
	{
		printf("���� F\n");
	}
	return 0;
}
*/

/*
//���ڵ��� �з��ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char ch;

	printf("���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("%c�� �빮���Դϴ�.\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c�� �ҹ����Դϴ�.\n", ch);
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("%c�� �����Դϴ�.\n", ch);
	}
	else
	{
		printf("%c�� ��Ÿ�����Դϴ�.\n", ch);
	}
	return 0;
} */

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c, dis;

	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0)
	{
		printf("�������� ���� %.2f�Դϴ�.\n", -c / b);
	}
	else
	{
		dis = b * b - 4.0 * a * c;
		if (dis >= 0)
		{
			printf("�������� ���� %.2f�Դϴ�.\n", (-b + sqrt(dis)) / (2.0 * a));
			printf("�������� ���� %.2f�Դϴ�.\n", (-b - sqrt(dis)) / (2.0 * a));
		}
		else
			printf("�Ǳ��� �������� �ʽ��ϴ�.\n");
	}
	
	return 0;
} */

/*
// ������ ��� ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) >>  ");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	
		result = x + y;
	
	else if (op == '-')
	
		result = x - y;
	
	else if (op == '*')
	
		result = x * y;
	
	else if (op == '/')
	
		result = x / y;
	
	else if (op == '%')
	
		result = x % y;
	
	else
		printf("�������� �ʴ� �������Դϴ�. \n");
	

	printf("%d %c %d = %d \n", x, op, y, result);
	return 0;
} */

/*
// ���� �ϼ��� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int month, days;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	switch (month) {
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�Դϴ�.\n", month, days);
	return 0;
} */

/*
// ������ ��� ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) >>  ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) 
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�. \n");
		break;
	}
	printf("%d %c %d = %d \n", x, op, y, result);
	return 0;
} */

// ������������α׷�
#include<stdio.h>

int main(void)
{
	int i = 1;

loop:
	printf("%d * %d = %d \n", 3, i, 3 * i);
	i++;
	if (i == 10) goto end;
	goto loop;

end:
	return 0;
}