#include <stdio.h>
//입력:배열, 출력 :업음, 부수효과 : 화면에 모든 요소를 출력

//void print(int arr[], int len) {
	void printarray(int*arr, int len){     // arr[]대신 *arr를 사용할 수 있다. 배열대신 포인터. 주로 사용한다.
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}
int main() {
	int a[] = { 10,20,30 };
	int* ptr;
	ptr = a;    //ptr = &a[0]  , a의 첫번째 배열요소의 주소가 들어간다.
	printarray(a, 3);

	 // a = ptr; // a는 저장장소가 아니라 &a[0] 인 값이기 때문에 에러가 뜬다.
	 // 10 = a[2]; 위와 같은 에러가 뜬다.
	return 0;
}