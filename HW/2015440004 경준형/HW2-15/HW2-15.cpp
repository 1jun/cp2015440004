#include<stdio.h>

int main(void)
{
	int num = 0, count = 1, guess = 0;
    
	printf("정답 : ");
	scanf_s("%d", &num);
	while (1)
	{
		printf("추측답: ");
		scanf_s("%d", &guess);

			if (guess == num)
			{
				printf("정답입니다!!\n");
				break;
			}
			if (guess < num)
			{
				printf("더 큽니다.\n");
			}
			if (guess > num)
			{
				printf("더 작습니다.\n");
			}
			if (count == 10) {
				printf("10번내에 못 맞추셨습니다.Game Over입니다~");
				break;
			}
			count++;
		}
	return 0;
}
