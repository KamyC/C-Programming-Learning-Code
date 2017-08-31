#include"14_Stack_3.h"
#include<iostream>
#include<stdio.h>
#include<malloc.h>
using namespace std;
Status Push(stackLink* S, ElemType e){ //stackLinkʵ����һ�����ṹS��S���Ե���topָ���count
	sPointer newNode = (sPointer)malloc(sizeof(stackNode));//sPointer �ڶ���ָ��Node�������ַ
	newNode->data = e;
	newNode->next = S->top;//�˴�Ĭ�ϵ���S->top��ָ��һ��Node�ڵ㣬�������µ�node����Ҫ���µ�nodeָ���һ��Node.
	S->top = newNode;
	S->count++;
	return OK;
}
Status Pop(stackLink* S, ElemType *e){
	sPointer temp;
	*e = S->top->data;
	temp = S->top;
	S->top = S->top->next;//����Ϊ��ͷ�ڵ����һ���ڵ��Ϊͷ��㣬�����ǣ�topָ��ָ��ͷ������һ���ڵ㡣
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