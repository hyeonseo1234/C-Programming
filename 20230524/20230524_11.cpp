// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice() {
    return (rand() % 6) + 1;
}

int main(void) {
    int user_total = 0, computer_total = 0;
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        user_total += roll_dice();
        computer_total += roll_dice();
    }

    printf("사용자 주사위= %d\n", user_total);
    printf("컴퓨터 주사위= %d\n", computer_total);

    if (user_total > computer_total) {
        printf("사용자 승리!\n");
    }
    else if (user_total < computer_total) {
        printf("컴퓨터 승리!\n");
    }
    else {
        printf("비겼습니다. !\n");
    }

    return 0;
}