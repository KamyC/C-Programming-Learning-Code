#include<malloc.h>
#include<time.h>
#include <stdlib.h>
#include <iostream>
#define OK 1
#define Error 0
#define True 1
#define False 0
typedef int elemType;
typedef int Status;
using namespace std;
typedef struct Node{
	elemType data;
	struct Node* next;
};
typedef struct Node* Linklist;//struct Node* ~= Linklist

Status getElem(Linklist *L, int i, elemType *e){
	Linklist p;
	p = (*L)->next;
	int k = 1;
	while (p&&k < i){
		p = p->next;
		k++;
	}
	if (!p || k > i){
		return Error;
	}
	*e = p->data;
	return OK;
}

Status listInsert(Linklist *L, int i, elemType e){//insert after i
	int k = 1;
	Linklist p, s;
	p = (*L)->next;
	while (p&&k < i){//after the loop, p stays on the Node[i]
		p = p->next;
		k++;
	}
	if (!p || k > i){
		return Error;
	}
	s = (Linklist)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;//这里p->next指的是p后面的节点！！
	p->next = s;//这里p->next指的是p调用本身的next指针！！一定要区分开
	return OK;
}
Status listDelete(Linklist *L, int i){
	int k = 1;
	Linklist p, deleteP;
	p = *L;
	while (p&&k < i){//after the loop, p stays on the Node[i-1]
		p = p->next;
		k++;
	}
	if (!p || k > i){
		return Error;
	}
	deleteP = p->next; 
	p->next = p->next->next;
	free(deleteP);
	return OK;
}
void CreateListHead(Linklist *L, int n){
	Linklist p;
	*L = (Linklist)malloc(sizeof(Node));
	(*L)->next = *L;//point to the head
	
	for (int i = 0; i < n; i++){
		p = (Linklist)malloc(sizeof(Node));
		p->data = rand() % 100;
		p->next = (*L)->next;
		(*L)->next = p;
	}
}
void CreateListTail(Linklist *L, int n){ 
	Linklist p, endP;
	*L = (Linklist)malloc(sizeof(Node));
	endP = *L;
	for (int i = 0; i < n; i++){
		p = (Linklist)malloc(sizeof(Node));
		p->data = rand() % 100;
		endP->next = p;
		endP = p;
	}
	endP->next = *L;//point to the head
}
void clearList(Linklist *L){
	Linklist p, q;
	p = (*L)->next;
	while (p){
		q = p->next;
		free(p);
		p = q;
	}
	(*L)->next = NULL;
	q = NULL;

}
Status ListTraverse(Linklist *L){
	Linklist p = (*L)->next;
	while (p!=*L){
		cout << p->data << endl;
		p = p->next;
	}
	return OK;
}