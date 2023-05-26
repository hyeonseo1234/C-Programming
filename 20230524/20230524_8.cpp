// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 24

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
	printf("소득을 입력하세요(만원): ");
	scanf("%d", &income);
	printf("소득세는 %d입니다", get_tax(income));
	return 0;
}