// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 24

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