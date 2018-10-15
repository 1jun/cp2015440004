#include <stdio.h>

int main(void)
{
	int num1;
	printf("당신의 점수는? : ");
	scanf_s("%d", &num1);
	if (num1 >= 80)
		printf("당신의 학점은 'A' 입니다.\n");
	else if (num1 >= 60)
		printf("당신의 학점은 'B' 입니다.\n");
	else if (num1 >= 40)
		printf("당신의 학점은 'C' 입니다.\n");
	else if (num1 >= 20)
		printf("당신의 학점은 'D' 입니다.\n");
	else if (num1 >= 0)
		printf("당신의 학점은 'E' 입니다.\n");

	return 0;
}