#define MAXSIZE 20
#define OK 1
#define Error 0
#define True 1
#define False 0
typedef int ElemType;
typedef int Status;
typedef struct{
	ElemType data[MAXSIZE];
	int top1;
	int top2;
}DoubleStack;

Status push(DoubleStack *S, ElemType e, int stackNumber){
	if (S->top1 + 1 == S->top2){
		return Error;
	}
	if (stackNumber == 1){
		S->top1++;
		S->data[S->top1] = e;
	};
	if (stackNumber == 2){
		S->top2--;
		S->data[S->top2] = e;
	}
	return OK;
}

Status pop(DoubleStack *S, ElemType* e, int stackNumber){
	if (stackNumber == 1){
		if (S->top1 == -1){
			return Error;
		}
		*e = S->data[S->top1];
		S->top1--;
	}
	if (stackNumber == 2){
		if (S->top2 == MAXSIZE){
			return Error;
		}
		*e = S->data[S->top2];
		S->top2++;
	}
	return OK;
}
