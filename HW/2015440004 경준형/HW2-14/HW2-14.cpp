#include <stdio.h>

int main(void)
{
	int n=0;
	int sum = 0, i = 0;
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &n);

		if (n >= 7) {
			for (i = 7; i<= n; i++) 
				sum += i;
				printf("7부터 n까지의 총합은 : %d\n", sum);
			
		}
		if (n < 7)
			printf("Error.\n");
			
	return 0;
}