#include"6_thisPointer.h"
#include<iostream>
using namespace std;

Arr::Arr(int len){
	this->len = len;
}
Arr::~Arr(){
	cout << "ArrµÄÎö¹¹º¯Êý" << endl;
};
void Arr::setLen(int len){
	this->len = len; 
};
int Arr::getLen(){
	return len;
}
Arr& Arr::printInfo(){	
	cout << len << endl;
	return *this;
}

int main(){
	Arr arr1(10);
	arr1.printInfo().setLen(29);
	cout << arr1.getLen() << endl;
	cout << &arr1 << endl;

	return 0;
}