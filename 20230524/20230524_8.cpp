// �а�: �̷������Ƽ���а�
// �й�: 202315011
// �̸�: ������
// ��¥: 2023. 05. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income) {
	if (income > 1000) {
		return (income - 1000) * 0.1 + 1000 * 0.08;
	}
	else {
		return income * 0.08;
	}
}
int main(void) {
	int income;
	printf("�ҵ��� �Է��ϼ���(����): ");
	scanf("%d", &income);
	printf("�ҵ漼�� %d�Դϴ�", get_tax(income));
	return 0;
}