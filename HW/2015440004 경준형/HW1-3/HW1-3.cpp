#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("���� 3�� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("���� ū ���� %d�̴�\n.", num1);
	if (num2 > num1 && num2 > num3)
		printf("���� ū ���� %d�̴�\n", num2);
	if (num3 > num2 && num3 > num1)
		printf("���� ū ���� %d�̴�\n", num3);

	return 0;
}