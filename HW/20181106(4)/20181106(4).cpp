#include <stdio.h>
//입력:배열, 출력 :업음, 부수효과 : 화면에 모든 요소를 출력

void print(int arr[], int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}
int main() {
	int a[] = { 10,20,30 };
	int* ptr;
	ptr = a;    //ptr = &a[0]  , a의 첫번째 배열요소의 주소가 들어간다.
	printf("a[0] = %d\n", *ptr);
	printf("a[0] = %d\n", ptr[1]); // 포인터 변수이름을 배열 이름으로 사용가능 하다. 
	return 0;
}
