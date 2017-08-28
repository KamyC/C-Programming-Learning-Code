#include <stdio.h>
#include"9_Linked Linear List.h"
#include<iostream>
using namespace std;

int main(){
	Linklist X;
	elemType e;
	
	X = (Linklist)malloc(sizeof(Node));
	X->next = NULL;//initiate the linked list

	CreateListTail(&X, 10);

	ListTraverse(&X);
	
	getElem(&X, 3, &e);
	cout << e << endl;


	return 0;
}