#include <stdio.h>

int main(void)
{
	int num1;
	printf("���� �Է� : ");
	scanf_s("%d", &num1);
	if (num1%2==0)
		printf("�� ���� ¦���̴�.\n");
	if (num1%2==1)
		printf("�� ���� Ȧ���̴�.\n");

	return 0;
}