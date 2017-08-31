#include"15_Queue_1.h"
#include<iostream>
 
using namespace std;


int main(){

	sQueue S;
	sQueue *X = &S;
	ElemType e;
	ElemType *a=&e;
	initSqueue(X);
	for (int i = 0; i < MAXSIZE-1; i++){
		Enqueue(X, i);
	}
	for (int i = 0; i < MAXSIZE; i++){
		cout << X->data[i] << endl;
	}
	cout << "-----------------" << endl;
	cout << X->front << endl;
	cout << X->rear << endl;

	cout << "-----------------" << endl;
	Dequeue(X, a);
	cout << X->data[0] << endl;
	cout << X->front << endl;
	return 0;


}