// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 24

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_alpha(char text) {
	if (text >= 97 && text <= 122) {
		printf("%c는 알파벳 문자입니다.", text);
	}
}
int main(void) {
	char t;
	printf("문자를 입력하시오: ");
	scanf("%c", &t);
	check_alpha(t);
	return 0;
}