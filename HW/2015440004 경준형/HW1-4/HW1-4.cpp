#include <stdio.h>

int main(void)
{
	int num1;
	printf("����� ������? : ");
	scanf_s("%d", &num1);
	if (num1 >= 80)
		printf("����� ������ 'A' �Դϴ�.\n");
	else if (num1 >= 60)
		printf("����� ������ 'B' �Դϴ�.\n");
	else if (num1 >= 40)
		printf("����� ������ 'C' �Դϴ�.\n");
	else if (num1 >= 20)
		printf("����� ������ 'D' �Դϴ�.\n");
	else if (num1 >= 0)
		printf("����� ������ 'E' �Դϴ�.\n");

	return 0;
}