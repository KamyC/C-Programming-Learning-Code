#include<iostream>
#define MAXSIZE 5
#define OK 1
#define Error 0


typedef int ElemType;
typedef int Status;

typedef struct {
	ElemType data[MAXSIZE];
	int front;
	int rear;
	int seLength;
}sQueue;

void initSqueue(sQueue *S){
	S->front = 0;
	S->rear = 0;
	S->seLength = 0;
}

int seLength(sQueue *S){
	return S->seLength;
}

Status Enqueue(sQueue *S,ElemType e){
	if (S->seLength==MAXSIZE){
		return Error;
	};
	S->data[S->rear] = e;
	S->seLength++;
	S->rear = (S->rear + 1) % MAXSIZE;
	return OK;
}
Status Dequeue(sQueue *S, ElemType *e){
	if (S->seLength==0){
		return Error;
	}
	*e = S->data[S->front];
	S->front = (S->front + 1) % MAXSIZE;
	S->seLength--;
	return OK;
}