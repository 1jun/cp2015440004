#include <stdio.h>

void test(int a) {
	a = 100;
}
void testPointer(int*ptr) {
	*ptr = 100;
}
int main() {
	int a = 10;
	test(a);                        // a = 10이 된다. a가 100이 되지만,그것은 함수 호출로 인해 만들어진 일시적인
	printf("a = %n", a);           // 메모리이기때문에 소멸된다.
    
	testPointer(&a);               // 만들어진 메모리에 a의 주소가 저장된다. 포인터에 의해 가리키는 변수의 값이 변한다.
	printf("a = %n", a);          // main함수의 변수 가 변한다.
	return 0;         
}	                  