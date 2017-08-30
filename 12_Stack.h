#define MAXSIZE 100
#define OK 1
#define Error 0
#define True 1
#define False 0
typedef int ElemType;
typedef int Status;
typedef struct{
	ElemType data[MAXSIZE];
	int top;
}Stack;

Status Push(Stack *S, ElemType e){
	if (S->top == -1){
		return Error;
	}
	S->top++;
	S->data[S->top] = e;
}

Status Pop(Stack *S, ElemType *e){
	if (S->top == -1){
		return Error;
	}
	*e = S->data[S->top];
	S->top--;
	return OK;
}

