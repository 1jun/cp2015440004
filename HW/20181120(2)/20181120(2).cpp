#include <stdio.h>
#include <string.h>
void printarray(char*arr, int len) {     // arr[]대신 *arr를 사용할 수 있다. 배열대신 포인터. 주로 사용한다.
	for (int index = 0; index < len; index++)
		printf("array[%d] = %d\n", index, arr[index]); // 문자로바꾸고싶으면 %c로 바꿔주면 된다.
}

int main() {
	char c; // charactor 문자형
	c = 'A'; // C = 56 대문자 A의 아스키코드가 C에 저장된다.
	printf("c = %d\n", c);
	printf("c = %c\n", c);  //문자형으로 출력

	char a[] = {'h','e','l','l','o' };
	printarray(a, 5);

	//문자열(string)
	char b[] = "hello"; // ==> b[] = {'h','e','l','l','o' \0}; 길이 6?? 
	printf("%s \n", b);
	printf("length of the string is %d\n", strlen(b));
	
	char str1[50] = "hello";
	char* str2 = "world";
	printf("%s \n", strcat(str1, str2));


	return 0;
}