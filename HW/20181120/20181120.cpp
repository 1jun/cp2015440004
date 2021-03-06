# include <stdio.h>

void swapElement(int*arr, int i, int j) {   // 입력:배열,두개의인덱스 출력:없음
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int* arr, int ele) {
	while (ele > 0) {
		if (arr[ele - 1] > arr[ele])
			swapElement(arr, ele - 1, ele);
		else
			break;
		ele--;
	}
}

void insertionSort(int*arr, int length) {
	for (int i = 1; i < length; i++)
		insertElement(arr, i);
}
