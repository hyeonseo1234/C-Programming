#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i=0, years=0;
	double total = 0, rate = 0, investment = 0;

	printf("����: ");
	scanf("%lf", &investment);
	printf("����(%%):: ");
	scanf("%lf", &rate);
	printf("�Ⱓ(��): ");
	scanf("%d", &years);

	printf("====================\n");
	printf("���� ������\n");
	printf("====================\n");
	total /= 100.0;
	for (i = 0; i < years; i++)
	{
		total = total * (1 + rate);
		printf("%2d  %10.1f\n", i + 1, total);
	}
	return 0;
}