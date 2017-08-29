#include"8_Linear List.h"
#include<iostream>
#include<malloc.h>

using namespace std;

Status getElem(sqList *L,int i){//get the value of i in L
	if (L->length == 0||i<1||i>L->length){
		return Error;
	}
	ElemType e;
	e = L->data[i - 1];
	return e;
}
Status ListInsert(sqList *L, int i, ElemType e){
	if (L->length == MAXSIZE || i<1 || i>L->length){
		return Error;
	}
	else if (i<=L->length){
		for (int j = L->length-1; j >= i;j--){
			L->data[j+1] = L->data[j];
		}
		L->data[i] = e;
		L->length++; 
	}
	return True;
}
Status DeleteElem(sqList *L, int i){
	if (L->length <=0|| i<1 || i>L->length){
		return Error;
	}
	else if (i < L->length){
		for (int j = i ; j < L->length; j++){
			L->data[j-1] = L->data[j];
		}
		L->length--;
	}
}


int main(){
	sqList X = { { 1, 2, 3, 4, 5, 6 },6 };
	sqList *L = &X;
	for (int i = 0; i < L->length; i++){
		cout <<"Original:"<< L->data[i] << endl;
	};
	ListInsert(L, 3, 100);
	for (int i = 0; i < L->length; i++){
		cout << "AfterInsert:" << L->data[i] << endl;
	};
	DeleteElem(L, 4);
	for (int i = 0; i < L->length; i++){
		cout << "AfterDelete:" << L->data[i] << endl;
	};
	return 0;
}