#include <stdio.h>

int main() {
	int a = 10, b = 20; 
	//swap : 변수 a,b의 값을 바꾼다.
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("a = %d,b = %d\n", a, b);

	return 0;

}

 // 함수이용


void swap(int* ptr1, int* ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2; // 좌변 저장장소, 우변 값. ptr1이 가리키는 값에 ptr2가 가리키는 값 저장
	*ptr2 = temp;  // 
}

int main() {
	int a = 10, b = 20;
	//swap : 변수 a,b의 값을 바꾼다.

	swap(&a, &b);
	printf("a = %d,b = %d\n", a, b);

	return 0;

}