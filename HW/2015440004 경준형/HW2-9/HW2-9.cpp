#include <stdio.h>

int main(void)
{

	int i = 0, j = 0;

	
	while (1) {

		printf("정수를 입력하시오 : ");

		scanf_s("%d", &i);

		if (i < 1) {
			printf("Error. 잘못된 입력입니다.\n");
			continue;
		}
		else if (i > 9) {
			printf("Error. 잘못된 입력입니다.\n");
			continue;
		}

		else break;
	}

	for (j = 1; j < 10; j++)
	{

		printf("%d * %d = %d \n", i, j, i*j);

	}

}
