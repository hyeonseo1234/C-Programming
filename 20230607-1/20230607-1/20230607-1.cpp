#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define STUDENTS 5

int main(void)
{
	int scores[STUDENTS];
	int i, sum = 0;
	double average;

	for (i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf("%d", &scores[i]);
	}

	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = (double)sum / STUDENTS;
	printf("���� ���= %.2f\n", average);

	return 0;
}