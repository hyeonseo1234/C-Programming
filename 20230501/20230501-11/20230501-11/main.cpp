#define _CRT_SECURE_NO_WARNINGS
#define MAX_CAPACITY 500
#define MIN_LEVEL 20
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void main(void)
{
    int x = 100;
    int y;
    char a;

    printf("현재연료량: %d\n", x);

    while (1) 
    {
        printf("연료충전은 +, 소모는 -로 입력해주세요: ");
        scanf(" %c%d", &a, &y);

        if (a == '+')
        {
            if (x + y > MAX_CAPACITY)
            {
                printf("최대 용량을 초과했습니다.\n");
            }
            else
            {
                x += y;
                printf("현재 연료량: %d\n", x);
            }
        }
        else if (a == '-')
        {
            if (x - y < 0)
            {
                printf("연료가 부족합니다.\n");
            }
            else
            {
                x -= y;
                printf("현재 연료량: %d\n", x);

                if (x < MIN_LEVEL)
                {
                    printf("(경고) 연료가 %d리터 미만입니다.\n", MIN_LEVEL);
                }
            }
        }
    }
}