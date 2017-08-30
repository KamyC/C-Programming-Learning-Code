#include"11_Circular Linked List.h"
#include<iostream>
#include<stdio.h>
using namespace std;



int main(){
	Linklist X;
	elemType e;
	X = (Linklist)malloc(sizeof(Node));
	X->next = X;
	CreateListTail(&X, 10);
	Linklist p = X->next;
	ListTraverse(&X);
	return 0;
}