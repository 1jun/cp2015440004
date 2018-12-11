#include <stdlib.h>
#include <stdio.h>


typedef struct node {
	int score;
	struct node* pNext;
}Node;

double averageLL(Node* ptr) {
	int sum = 0, count = 0;
	double average;
	while (ptr != NULL) {
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;
	}
	average = (double)sum / count;
}

typedef struct linkedlist {
	Node* pHead;               //요거나옴
	Node* pTail;
	int nNode;
}LinkedList;

int main() {
	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList, creatNode(10));

}
