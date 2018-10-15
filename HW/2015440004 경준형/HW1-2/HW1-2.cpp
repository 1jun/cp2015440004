#include <stdio.h>

int main(void)
{
	int num1;
	printf("정수 입력 : ");
	scanf_s("%d", &num1);
	if (num1%2==0)
		printf("이 수는 짝수이다.\n");
	if (num1%2==1)
		printf("이 수는 홀수이다.\n");

	return 0;
}