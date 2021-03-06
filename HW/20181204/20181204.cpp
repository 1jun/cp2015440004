// 다음주 퀴즈만 본다
#include <stdio.h>
#include <stdlib.h>

//구조체 선언
//struct complex {
//	double real; // 멤버 변수
//	double imag;  // ditto(상동)
//};  //세미콜론주의

//데이터타입의 별명 선언

typedef int myIntType; // 자료형 int 를 앞으로 myIntType 이라고 부르겠다

// typedef struct complex Complex; // 자료형 struct complex 를 앞으로 Complex라고 부르겠다.

//위의 두 문장을 한 문장으로 만들 수 있다.

typedef struct complex {
	double real;
	double imag;
} Complex;
//함수 prinComplex() 입력 : 복소수 출력 : 없음 부수효과 : 없음

void printComplex(Complex* ptr) {     // 모든 경우 구조체의 포인터를 매개변수로 전달받는다.
	printf("%f + i%f\n", ptr->real, ptr->imag);
}
// 함수 conjugate() 입력 : 복소수포인터 출력 : 없음 부수효과 : 입력된 복소수가 켤레로바뀐다.
void convertToConjugate(Complex* ptr) {
	ptr->imag = -1 * ptr->imag;
}

//함수 returnConjugate() // 입력:복소수 출력:복소수 부수효과 : x

 // Complex* returnConjugate(Complex* ptr) {   // 버전1
//	Complex temp;
	//temp.real = ptr->real;
	//temp.imag = -1 * ptr->imag;
	//return &temp;
//}

Complex* returnConjugate(Complex* ptr) {   // 버전2
	Complex* tempPrt;
	tempPrt = (Complex*) malloc(sizeof(Complex)); // 동적할당  dynamic allocation

	tempPrt->real = ptr->real; tempPrt->imag = -1 * ptr->imag;
	return tempPrt;
}

int main() {
	myIntType count = 10; // => int count = 10;
	// 구조체 변수선언
	Complex a, b;
	//struct complex a;   // => Complex a; 라고만 해도된다.
	a.real = 10;
	a.imag = 20;
	//printComplex(&a);

	//구조체 포인터 변수 선언
	Complex* ptr;
	ptr = &a;
	ptr->real = 100; // 구조체 포인터 변수의 멤버변수 접근방법
	ptr->imag = 200;
	printComplex(&a);
	ptr = returnConjugate(&a); printComplex(ptr); //오류남 함수끝났기떼문에(버전1)  버전2로 하면 된다.
	convertToConjugate(&a);
	printComplex(&a);
	free(ptr); printComplex(ptr);   // heap 에 있는 저장소 없어져서 다시 오류 발생 
	return 0;                       
}



