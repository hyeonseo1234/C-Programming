// 학과: 미래모빌리티공학과
// 학번: 202315011
// 이름: 신현서
// 날짜: 2023. 05. 24


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int money = 0;

void bank()
{
    printf("잔고는 %d 원입니다.\n", money);
}

void deposit()
{
    int amount;
    printf("입금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0)
    {
        money += amount;
        printf("%d 원이 입금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", money);
    }
    else
    {
        printf("잘못된 선택입니다.\n");
    }
}

void withdrawal()
{
    int amount;
    printf("출금할 금액을 입력하세요: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= money)
    {
        money -= amount;
        printf("%d 원이 출금되었습니다.\n", amount);
        printf("잔고는 %d 원 입니다.", money);
    }
    else
    {
        printf("잘못된 선택입니다.\n");
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("Welcome to Express ATM\n");
        printf("<1> 잔액\n");
        printf("<2> 입금\n");
        printf("<3> 출금\n");
        printf("<4> 종료\n");
        printf("메뉴를 선택하시오: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bank();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdrawal();
            break;
        case 4:
            printf("감사합니다.\n");
            return 0;
        default:
            printf("잘못된 선택입니다.\n");
        }
        printf("\n");
    }
}