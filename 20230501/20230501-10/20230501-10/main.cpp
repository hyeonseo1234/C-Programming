#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 2; x <= 100; x++)
	{
		z = 1;

		for (y = 2; y < x; y++)
		{
			if (x % y == 0)
			{
				z = 0;
				break;
			}
		}
		if (z == 1)
		{
			printf("%d", x);
		}
	}

	return 0;

}