#include <stdio.h>
// 함수 printArray
//입력:배열, 출력 :업음, 부수효과 : 화면에 모든 요소를 출력

void printArray(int arr[], int length){
	int count = 0;
	while (count < length) {
		printf("a[%d] = %d\n", count, arr[count]);
		count++;
	}
int main() {
	int x;
	int a[4]; // 배열 선언 1 배열의 이름 2. 요소의 자료형 3. 배ㅕㄹ의 기이
	a[0] = 20;
	a[1] = 200;
	a[2] = 2000;
	a[3] = 200000;
	// int a[4] = {2, 20, 200, 2000}; 라고 배열 초기화 해도 됨.
	int count = 0;
	while (count < 4)
		printf(" a[%d] = %d\n", count, a[count]);
	count++;
	}
	return 0;
}