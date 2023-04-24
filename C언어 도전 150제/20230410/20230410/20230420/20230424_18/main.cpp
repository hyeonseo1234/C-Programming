#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, x;

    printf("n의 값 입력:");
    scanf("%d", &n);

    printf("m의 값 입력:");
    scanf("%d", &m);

    srand(time(NULL));
    x = rand() % (m - n + 1) + n;

    printf("n에서 m까지의 난수: %d\n", x);


}