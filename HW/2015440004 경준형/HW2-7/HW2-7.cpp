#include <stdio.h>

int main()
{
	int n;
	int sum = 0;

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &n);

		if (n == 0)
		{
			break;
		}

		sum = sum + n;
	}

	printf("수의 총 합은 %d 입니다.\n", sum);
}