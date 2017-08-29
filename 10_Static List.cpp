#include"10_Static List.h"
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	StaticList X;
	iniList(X);
	for (int i = 0; i < 9; i++){
		X[i + 1].data = i + 31;
		X[0].cur = 10;
		X[MAXSIZE - 1].cur = 1;
	}

	for (int i = 0; i < 11; i++){
		cout << "Position: " << i << ", Data: " << X[i].data << "," << "Cur: " << X[i].cur << endl;
	};
	X[9].cur = 0;
	cout << "_____________________" << endl;

	listInsert(X, 6, 66666);
	for (int i = 0; i < 11; i++){
		cout <<"Position: "<<i<< ", Data: " << X[i].data<< "," << "Cur: " << X[i].cur << endl;
	};
	cout << "_____________________" << endl;
	listInsert(X, 7, 888888);
	listDelete(X, 3);
	for (int i = 0; i < 12; i++){
		cout << "Position: " << i << ", Data: " << X[i].data << "," << "Cur: " << X[i].cur << endl;
	};

	return 0;
}