
// 1번
// 학번: 202315011
// 학과: 미래모빌리티공학과
// 이름: 신현서
// 날짜: 20230419
// 숫자 추측 게임

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand((unsigned)time(NULL));    // 난수 발생기 시드 설정

	int answer = rand() % 100 + 1;  // 정답을 난수로 발생한다.
	int guess;
	int tries = 0;
	// 반복 구조
	do
	{
		printf("정답을 추측해 보시어: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("HIGH \n");  // 사용자가 입력된 정수가 정답보다 높으면
		if (guess < answer)
			printf("LOW \n");   // 사용자가 입력된 정수가 정답보다 낮으면

	} while (guess != answer);

	printf("축하합니다. 시도횟수=%d \n", tries);
	return 0;
}
