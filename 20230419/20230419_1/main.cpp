
// 1��
// �й�: 202315011
// �а�: �̷������Ƽ���а�
// �̸�: ������
// ��¥: 20230419
// ���� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand((unsigned)time(NULL));    // ���� �߻��� �õ� ����

	int answer = rand() % 100 + 1;  // ������ ������ �߻��Ѵ�.
	int guess;
	int tries = 0;
	// �ݺ� ����
	do
	{
		printf("������ ������ ���þ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("HIGH \n");  // ����ڰ� �Էµ� ������ ���亸�� ������
		if (guess < answer)
			printf("LOW \n");   // ����ڰ� �Էµ� ������ ���亸�� ������

	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ��=%d \n", tries);
	return 0;
}
