#include<malloc.h>
#include<iostream>
#define MAXSIZE 100
typedef int ElemType;
typedef int Status;

typedef struct {
	ElemType data;
	int cur;
}StaticList[MAXSIZE];

void iniList(StaticList L){
	for (int i = 0; i < MAXSIZE; i++){
		L[i].cur = i + 1;
	}
	L[MAXSIZE - 1].cur = 0;
}

int malloc_L(StaticList L){
	int i = L[0].cur;
	if (L[0].cur){
		L[0].cur = L[i].cur;
	};
	return i;
}
void free_L(StaticList L,int j){
	L[j].cur = L[0].cur;
	L[0].cur = j;
}

void listInsert(StaticList L, int i, ElemType e){
	int m = malloc_L(L);//返回可用位置的下标。
	L[m].data = e;//把插入值放入可用下标

	int k = MAXSIZE - 1;
	for (int j = 1; j <= i-1; j++){
		k = L[k].cur;
	}
	L[m].cur = L[k].cur;
	L[k].cur = m;
}

void listDelete(StaticList L, int i){
	int k=MAXSIZE-1;
	for (int j = 1; j <= i-1 ; j++){
		k = L[k].cur;
	}
	int j = L[k].cur;
	L[k].cur = L[j].cur;
	free_L(L, j);
}

 int listLength(StaticList L){
	 int i = L[MAXSIZE - 1].cur;
	 int n = 0;
	 while (i){
		 i = L[i].cur;
		 n++;
	 }
	 return n;
}