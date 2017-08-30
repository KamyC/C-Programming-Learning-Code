#include"12_Stack.h"
#include<iostream>
#include<stdio.h>

using namespace std;


int main(){

	Stack StackA = { {0, 1, 2, 3, 4, 5 }, 6 };
	Stack *X = &StackA;
	Push(X, 123);
	cout << X->top<< endl;
	cout << X->data[3] << endl;
	cout <<"______________________"<< endl;
	ElemType e;
	ElemType *a = &e;
	Pop(X, a);
	for (int i = 0; i < X->top; i++){
		cout << X->data[i] << endl;
	}
	cout << "______________________" << endl;
	cout << X->data[6] << endl;
	cout << *a << endl;
	return 0;
}