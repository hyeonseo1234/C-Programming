// �а�: �̷������Ƽ���а�
// �й�: 202315011
// �̸�: ������
// ��¥: 2023. 05. 24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
	return rand() % (80 + 1) + 10;
}

int main(void) {
	int num, i;
	srand(time(NULL));
	for (i = 1; i <= 10; i++) {
		printf("%d ", b_rand());
	}
	return 0;
}