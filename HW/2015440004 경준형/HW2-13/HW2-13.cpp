#include<stdio.h>
int main()
{
	int month, day, m, sum;
	printf("월을 입력하세요 : ");
	scanf_s("%d", &month);
	printf("일을 입력하세요 : ");
	scanf_s("%d", &day);

	switch (month)
	{
	case 1:
		m = 0;
		break;
	case 2:
		m = 31;
		break;
	case 3:
		m = 31 + 28;
		break;
	case 4:
		m = 31 + 28 + 31;
		break;
	case 5:
		m = 31 + 28 + 31 + 30;
		break;
	case 6:
		m = 31 + 28 + 31 + 30 + 31;
		break;
	case 7:
		m = 31 + 28 + 31 + 30 + 31 + 30;
		break;
	case 8:
		m = 31 + 28 + 31 + 30 + 31 + 30 + 31;
		break;
	case 9:
		m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		break;
	case 10:
		m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		break;
	case 11:
		m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		break;
	case 12:
		m = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		break;
	default:
		break;
	}

	sum = m + day;
	printf("총 일수는 : %d", sum);

	return 0;

}