#include"14_Stack_3.h"
#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
Status Push(stackLink* S, ElemType e){ //stackLink实例化一个链结构S，S可以调用top指针和count
	sPointer newNode = (sPointer)malloc(sizeof(stackNode));//sPointer 第二个指针Node并分配地址
	newNode->data = e;
	newNode->next = S->top;//此处默认的是S->top正指向一个Node节点，如果添加新的node，需要将新的node指向第一个Node.
	S->top = newNode;
	S->count++;
	return OK;
}
Status Pop(stackLink* S, ElemType *e){
	sPointer temp;
	*e = S->top->data;
	temp = S->top;
	S->top = S->top->next;//解释为：头节点的下一个节点成为头结点，或者是：top指针指向头结点的下一个节点。
	free(temp);
	S->count--;
	return OK;
}

Status ListTraverse(sStack S,ElemType n){
	sPointer p = S->top;
	for(int i=0;i<n;i++){
		cout << p->data << endl;
		p=p->next;
	}
	return OK;
}

int main(){
	
	stackLink *X = (stackLink*)malloc(sizeof(stackNode));
	int n=10;
	for (int i = 0; i < n; i++){
		Push(X, i);
	}
	ListTraverse(X,n);
	return 0;

}