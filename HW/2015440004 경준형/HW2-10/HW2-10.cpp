#include <stdio.h>
int main(void)
{
	int n, i;
	printf("정수 입력:");
	scanf_s("%d", &n);

	printf("%d의 약수: ", n);
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("%d ", i);
		}
	}
	

	return 0;
}

