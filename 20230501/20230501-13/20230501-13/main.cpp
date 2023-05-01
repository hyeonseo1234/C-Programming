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

    printf("1부터 %d까지의 합이 %d입니다.\n", y - 1, x - y);

    return 0;
}