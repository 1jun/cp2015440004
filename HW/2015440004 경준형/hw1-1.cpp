#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("�� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("�� ���� �� ū ���� %d�̴�.\n", num1);
	if (num1 < num2)
		printf("�� ���� �� ū ���� %d�̴�.\n", num2);
	return 0;
}