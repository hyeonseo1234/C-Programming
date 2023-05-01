#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int count = 0;

    printf("반복 횟수: ");
    scanf("%d", &n);
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (x * x + y * y < 1.0)
        {
            count++;
        }
    }

    double pi = 4.0 * count / n;

    printf("파이= %f\n", pi);

    return 0;
}