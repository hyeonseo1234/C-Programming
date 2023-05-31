// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 31
// 378페이지

#include<stdio.h>

void save(int amount)
{
	static long balance = 0;

	if (amount >= 0)
		printf("%d\t\t", amount);
	else
		printf("\t%d\t", -amount);
	balance += amount;
	printf("%d \n\n", balance);
}

int main(void)
{
	printf("==============================\n");
	printf("입금\t출금\t잔고\n");
	printf("==============================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);
	printf("==============================\n");
	return 0;
}