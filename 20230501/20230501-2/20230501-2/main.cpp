#include <stdio.h>

int main(void)
{
    int x= 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            x += i;
        }
    }

    printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", x);

    return 0;
}