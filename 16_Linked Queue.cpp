#include"16_Linked Queue.h"
#include<iostream>
#include<malloc.h>
using namespace std;

int main(){
	linkQueue *Q = (linkQueue*)malloc(sizeof(qNode));
	if (!Q){
		return Error;
	}
	qNodePointer node = (qNodePointer)malloc(sizeof(qNode));

	Q->rear = node;

	enQueue(Q, 666);
	cout << Q->rear->data << endl;
	return 0;

}
