#include <stdio.h>
int main(void)
{
	int n, i;
	n = 0;
		while (1) {
			printf("정수 입력:");
			scanf_s("%d", &n);
			if (n != 0)
			{
				for (i = 2; i < n; i++) {
					if (n%i == 0) {
						printf("%d의 약수: ", n);

						printf("%d \n", i);
					}
				}
			}
				 if (n == 0)
						break;
				}
	
	return 0;
}
