#include<iostream>
#include<string>
#include"2_ObjectArr.h"
#define FILE_BUFFER_LENGTH 30000；
Coordinate::Coordinate(){
	cout << "我是默认构造函数" << endl;
}
Coordinate::~Coordinate(){
	cout << "我是析构函数" << endl;
}


int main(){
	/*Coordinate coord[3];
	coord[0].int_x = 10;
	coord[0].int_x = 20;*/

	Coordinate *p = new Coordinate[3];
	//p->int_x = 11;
	//p[0].int_y = 22;//等同于 p->int_y=22
	//(p + 1)->int_x = 33;
	//p[1].int_y = 44;

	//cout << &coord[0].int_x << endl;
	//cout << &coord[0].int_y << endl;
	//cout << p << endl;
	//cout << &(p->int_x) << endl;
	//cout << &(p->int_y) << endl;
	p->int_x = 1; 
	p->int_y = 3;
	cout << p << endl;
	(p + 1)->int_x = 5;
	(p + 1)->int_y = 7;
	cout << (p+1) << endl;
	(p + 2)->int_x = 9;
	(p + 2)->int_y = 11;
	cout << (p + 2) << endl;
	for (int i = 0; i < 3; i++){
		cout << p->int_x << endl;
		cout << p->int_y << endl;
		p++;
	}
	cout << p << endl;
	p -=3;
	cout << p << endl;
	delete[]p;//利用析构函数，销毁堆中的内存，必须从第一个元素开始销毁
	p = NULL;
	return 0;
}