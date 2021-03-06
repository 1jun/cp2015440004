#include <stdio.h>

void printarray(int*arr, int len) {     // arr[]대신 *arr를 사용할 수 있다. 배열대신 포인터. 주로 사용한다.
	for (int index = 0; index < len; index++) 
		printf("array[%d] = %d\n", index, arr[index]);
	}
//입력 :배열(이름,길이) 출력 : 최소값의 인덱스
int findMinIndex(int *arr, int length) {
	int minIndex=0,i;
	for (i = 0; i < length; i++) {
		if (arr[minIndex] > arr[i])
			minIndex = i;
	}
	return minIndex;
}

int findMin(int*arr, int length) {
	int min=arr[0], i;                           //퀴즈
	for (i = 0; i < length; i++) {
		if (min > arr[i])
			min = arr[i];
	}
		return min;
}
void swapElement(int*arr,int i, int j) {   // 입력:배열,두개의인덱스 출력:없음
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
// selectinSort() , 입력:배열, 출력 :없음, 배열이정렬됨
void selectionSort(int*arr, int length) {
	int index, j = 0, i = 0;
	for (i = 0; i < length; i++) {
		for (j = i; j < length; j++) {
			findMin(arr, length);
			index = findMinIndex(arr, length);
		}
		swapElement(arr, i, index);
	}
}// findMin에 변수하나 늘리기 퀴즈!!
	

int main() {
	int a[] = { 30,35,27,15,40 };
	swapElement(a, 0, 3);
	printf("minimum value of the arrary is %d\n", findMin(a, 5));
	printf("The index of the minimum value is %d\n", findMinIndex(a, 5));
	selectionSort(a, 5);
	printarray(a, 5);
	return 0;

}