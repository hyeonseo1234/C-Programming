// 14번 문제
// 학번: 202315011
// 학과: 미래모빌리티공학과
// 이름: 신현서
// 날짜: 20230424
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, z, a, b, c;
    
    printf("몇번째 항까지 구할까요? ");
    scanf("%d ", &a);
    
    x = 0; y = 1;
    c = a - 2;

    printf("%d %d", x, y);
    
    for (b = 0; b <= c; b++)
    {
        z = x + y;
        x = y;
        y = z;

        printf("%d ", z);
    }
    return 0;
}