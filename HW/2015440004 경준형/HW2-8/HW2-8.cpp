#include <stdio.h>

int main(void)
{

	int i = 0, j = 0;



	printf("정수를 입력하시오 : ");

	scanf_s("%d", &i);

	for (j = 1; j < 10; j++)
	{

		printf("%d * %d = %d \n", i, j, i*j);

	}

}
