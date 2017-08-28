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

Status getElem(Linklist *L,int i,elemType *e){
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

Status listInsert(Linklist *L, int i, elemType e){
	int k = 1;
	Linklist p, s;
	p = *L;
	while (p&&k < i){//after the loop, p stays on the Node[i]
		p = p->next;
		k++;
	}
	if (!p || k > i){
		return Error;
	}
	s = (Linklist)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}
Status listDelete(Linklist *L, int i,elemType *e){
	int k = 1;
	Linklist p,deleteP;
	p = *L;
	while (p&&k < i){//after the loop, p stays on the Node[i-1]
		p = p->next;
		k++;
	}
	if (!p || k > i){
		return Error;
	}
	deleteP=p->next;
	p->next = p->next->next;
	*e = deleteP->data;
	free(deleteP);
	return OK;
}
void CreateListHead(Linklist *L,int n){//insert n*elements into the list from head.
	Linklist p;
	*L = (Linklist)malloc(sizeof(Node));
	(*L)->next = NULL;
	for (int i = 0; i < n; i++){
		p = (Linklist)malloc(sizeof(Node));
		p->data = rand() % 100;
		p->next = (*L)->next;
		(*L)->next = p; 
	}
}
void CreateListTail(Linklist *L, int n){ //我们希望通过函数来改变L这个指针，那么就定义一个*L，指向这个指针。传入的就是函数指针的地址，因为*L保存着这个L的地址（L可以是X，可以是Y等）
	Linklist p, endP;
	*L = (Linklist)malloc(sizeof(Node));
	endP = *L;//L should not change, so let endP change.
	for (int i = 0; i < n; i++){
		p = (Linklist)malloc(sizeof(Node));
		p->data = rand() % 100;	
		endP->next = p;//p is a new node, so let it stand at the tail.
		endP = p;//assign p to endP, letting endP become a new node at tail.
	}
	endP->next = NULL;
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
}

Status ListTraverse(Linklist *L){
	Linklist p = (*L)->next;
	while (p){
		cout << p->data << endl;
		p = p->next;
	}
	return OK;
}