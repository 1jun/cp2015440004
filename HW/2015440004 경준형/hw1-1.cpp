#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("두 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("두 정수 중 큰 수는 %d이다.\n", num1);
	if (num1 < num2)
		printf("두 정수 중 큰 수는 %d이다.\n", num2);
	return 0;
}