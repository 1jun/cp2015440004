#include<stdio.h> 
int main()
{

	int i, max;
	max = 0;
	i = 0;
	while (1) {

		printf("정수를 입력하세요 : ", i);
		scanf_s("%d", &i);

		{ if (i > max)

			max = i;
		}
		{if (i == 0)

			break; }
	}

	printf("최대값은 [ %d ] 입니다.\n", max);



}