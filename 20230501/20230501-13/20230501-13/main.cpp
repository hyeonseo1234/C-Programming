#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;

    while (1)
    {
        x += y;
        if (x > 10000)
            break;
        y++;
    }

    printf("1���� %d������ ���� %d�Դϴ�.\n", y - 1, x - y);

    return 0;
}