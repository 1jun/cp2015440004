#include<stdio.h>

int main()
{
	// ctrl K, ctrl F : Format 소스코드 선택영역을 예쁘게 포맷한다.
	// ctrl ] : matching parentheses
	// ctrl K, ctrl C : Comment out
	// ctrl K, ctrl U : undo cooment out
	/*int count = 1;
	while (count <= 10) {
		printf("count = %d\n", count);
		count = count + 1;
	}*/

	int count = 1;
	while (count <= 10) {  // 한줄만 있으면 while문에 중괄호 없어도 됨
		printf("count = %d\n", count++);
	}
     // 1에서부터 100까지 3의 배수만 화면에 출력
		count = 1;
		while (count <= 100){
			if (count% 3 == 0)
				printf("count = %d\n", count);
		count++;
	}
    // 1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력
		count = 1;
		while (count <= 100) {
			if (count % 3 == 1)
				printf("count = %d\n", count);
			else if (count % 3 == 2)
				printf("count = %d\n", count);
			count++;
		}
					
	
	printf("프로그램 종료!!!!!!!\n");

	return 0;
}