#include <stdio.h>

int main()
{
	int input;
	while (1) {
		printf("정수를 입력하세요: ");
		scanf_s("%d", &input);
		if (input <= 0)
		printf("Error. 다시 입력하여 주세요.\n");
        if (input > 0)
		break;
	}
	printf("출력값 : %d", 2*input);
	return 0;
}