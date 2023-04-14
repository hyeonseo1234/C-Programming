#include <stdio.h>

int main(void)
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i = %d, j = %d  \n", i, j);

}
/*
* 3, 000, 000, 000 이 안나오는 이유는 int가 ?2,147,483,648 ~ 2,147,483,647 까지 표현 가능
*/



