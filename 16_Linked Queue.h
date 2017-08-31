#include<iostream>
#define MAXSIZE 5
#define OK 1
#define Error 0


typedef int ElemType;
typedef int Status;
typedef struct qNode{
	ElemType data;
	struct qNode *next;
}qNode;

typedef struct qNode* qNodePointer;

typedef struct linkQueue{
	qNodePointer front;
	qNodePointer rear;
}linkQueue;


Status enQueue(linkQueue *Q, ElemType e){
	qNodePointer p = (qNodePointer)malloc(sizeof(qNode));
	if (!p){
		return Error;
	}
	p->data = e;
	p->next = NULL;
	Q->rear->next = p;
	Q->rear = p;
	return OK;
}

Status deQueue(linkQueue *Q, ElemType *e){
	qNodePointer p;
	if (Q->front == Q->rear){
		return Error;
	}
	p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;
	if (Q->front->next == Q->rear){
		Q->rear = Q->front;
	}
	free(p);
	return OK;
}
