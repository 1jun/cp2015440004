#include <stdlib.h>
#include <stdio.h>

//Linked List 연습

typedef struct node {
	int score;
	struct node* pNext;
}Node;

typedef struct linkedlist {
	Node* pHead;               //요거나옴
	Node* pTail;
	int nNode;
}LinkedList;

//함수 printLL() 화면에 연결리시트의 SCORE 값을 출력  
//입력 : 연결리스트 (연결리스트의헤드노드 포인터)
//출력 : 없음 부수효과 : 없음

void printLL(LinkedList*pList) {
	Node* ptr = pList->pHead;
	while (ptr != NULL) {
		printf("score = %d\n", ptr->score);
		ptr = ptr->pNext;
	}
}
// 함수 createNode() 노드하나를 동적할당으로 생성하여 반환한다.
//입력: 성적 
//출력 : 노드하나를 동적할당으로 생성하여 반환한다. 이 때 score = 입력, pNEXT = NULL로 한다.
//부수효과 : 없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}


//함수 addHead()
//입력 : 연결리스트 구조체 포인터(LinkedList*), 새 노드포인터
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
void addHead(LinkedList* pList, Node* pNewNode) {
	if (pList->pHead = NULL)
		pList->pTail = pNewNode;

	pNewNode->pNext = pList->pHead;  // #1
	pList->pHead = pNewNode;  // #2
	(pList->nNode)++;
}

//함수 returnTail()
//입력 : 연결리스트의 헤ㅐ드노드포인터
//출력 : 마지막 노드의 포인터

Node* returnTail(Node* ptr) {
	if (ptr == NULL)  // 연결리스트에 노드가 없음
		return NULL;

	while (ptr != NULL) {
		if (ptr->pNext == NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}

//addTail()
//입력 :연결리스트, 추가하려는 노드 포인터
//출력 : 없음, 부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨.
void addTail(Node* pHead, Node* pNode) {
	Node* pTail = returnTail(pHead);
	pTail->pNext = pNode;
}



int main() {
	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, creatNode(10));


	double test;
	test = 10.0 / 4;  // 10/4 -> 2를 반환 10.0/4-> 2.5를 반환
	printf("test = %f\n", test);
	test = ((double)10) / 4;   // 10.0이 된다.
	printf("test = %f\n", test);

	Node* pHead = NULL, *ptr; // 헤드노드의 포인터. null이면 연결리스트가 없다는 의미(로약속하자)
//	Node a, b;
//	a.score = 10; b.score = 20;
//	a.pNext = &b; b.pNext = NULL;
//	pHead = &a;
	pHead = createNode(10);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	addTail(pHead, createNode(100));
	printLL(pHead);


	return 0;
}
 // 헤드에 있는 거 지우는거