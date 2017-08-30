#include"13_Stack_2.h"
#include<iostream>
#include<stdio.h>

using namespace std;


int main(){
	DoubleStack X = { { 0, 1, 2, 3, 4, 5, 6, 7 }, 8 };
	DoubleStack *S = &X;
	ElemType e;
	S->top1 = 7;
	S->top2 = MAXSIZE;//divide into half.
	for (int i = 0; i < MAXSIZE; i++){
		cout << S->data[i] << endl;
	}
	cout << "After Push_1__________" << endl;
	push(S, 88888, 1);
	for (int i = 0; i < MAXSIZE; i++){
		cout << S->data[i] << endl;
	}
	cout << "After Push_2__________" << endl;
	push(S, 20, 2);
	for (int i = 0; i < MAXSIZE; i++){
		cout << S->data[i] << endl;
	}
	cout << "After Pop_1__________" << endl;
	ElemType *a = &e;
	pop(S, a, 1);
	cout << e << endl;
	cout << S->top1 << endl;
	cout << "After Pop_2__________" << endl;
	pop(S, a, 2);
	cout << e << endl;
	cout << S->top2 << endl;

	return 0;
}