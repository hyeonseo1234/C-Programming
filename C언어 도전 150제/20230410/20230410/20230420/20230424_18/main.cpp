#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, x;

    printf("n�� �� �Է�:");
    scanf("%d", &n);

    printf("m�� �� �Է�:");
    scanf("%d", &m);

    srand(time(NULL));
    x = rand() % (m - n + 1) + n;

    printf("n���� m������ ����: %d\n", x);


}