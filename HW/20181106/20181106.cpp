#include <stdio.h>

int main() {
	int a = 10;
	int* ptr;  // 포인터 변수선언
	ptr = &a;   // & : ampersand : address of a  a라는 메모리의 주소가 1번지 2번지 3번지 등으로 이루어졌다면 
	            // &a 는 1이다.  
	            // 포인터의 의미 : 1. 메모리주소, 2. 메모리 주소를 시작으로 하는 값의 자료형
	*ptr = 20;  // data of ptr , ptr이 가리키는 데이터 a가 20이된다.
	printf("a = %d\n", a);    // 상태도 퀴즈

	return 0;
}