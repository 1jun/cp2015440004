#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num0,sum;
	printf("10개의 정수 입력 : ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num0);
	
	sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num0;
	printf("정수의 총 합은 : %d\n", sum);
	return 0;
}