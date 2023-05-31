// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 31
//375페이지

#include<stdio.h>

void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount);
	printf("acount = %d\n", acount);
	scount++;
	acount++;
}
int main(void) {
	sub();
	sub();
	sub();
	return 0;
}