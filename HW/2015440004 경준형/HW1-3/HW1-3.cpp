#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("정수 3개 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("가장 큰 수는 %d이다\n.", num1);
	if (num2 > num1 && num2 > num3)
		printf("가장 큰 수는 %d이다\n", num2);
	if (num3 > num2 && num3 > num1)
		printf("가장 큰 수는 %d이다\n", num3);

	return 0;
}