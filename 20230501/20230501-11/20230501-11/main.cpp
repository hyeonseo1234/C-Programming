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

    printf("���翬�ᷮ: %d\n", x);

    while (1) 
    {
        printf("���������� +, �Ҹ�� -�� �Է����ּ���: ");
        scanf(" %c%d", &a, &y);

        if (a == '+')
        {
            if (x + y > MAX_CAPACITY)
            {
                printf("�ִ� �뷮�� �ʰ��߽��ϴ�.\n");
            }
            else
            {
                x += y;
                printf("���� ���ᷮ: %d\n", x);
            }
        }
        else if (a == '-')
        {
            if (x - y < 0)
            {
                printf("���ᰡ �����մϴ�.\n");
            }
            else
            {
                x -= y;
                printf("���� ���ᷮ: %d\n", x);

                if (x < MIN_LEVEL)
                {
                    printf("(���) ���ᰡ %d���� �̸��Դϴ�.\n", MIN_LEVEL);
                }
            }
        }
    }
}