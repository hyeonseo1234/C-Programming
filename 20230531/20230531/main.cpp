
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int A[3][3] = { 0 };
	int B[3][3] = { 0 };
	int C[3][3] = { 0 };

	//3X3 Çà·Ä°ö
	printf("AÇÛ·Ä: \n");
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			scanf("%d", &A[a][b]);
		}
	}

	printf("BÇÛ·Ä: \n");
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			scanf("%d", &B[a][b]);
		}
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			for (int c = 0; c < 3; c++)
			{
				C[a][b] += A[a][c] * B[c][a];
			}
		}
	}
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			printf("%d  ", C[a][b]);
		}
		printf("\n");
	}
}