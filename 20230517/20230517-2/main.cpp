#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void)
{
	int n;

	do {
		printf("���� ������ �Է��Ͻÿ�: ");
		scanf("%d", &n);
	} while (n <= 0);
	return n;

}
int is_prime(int n)
{
	int i, j;
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main(void)
{
	int n;
	n = get_integer();

	if (is_prime(n) == 1)
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�", n);
	return 0;
}
