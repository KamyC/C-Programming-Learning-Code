#include"4_Shallow and Deep Copy.h"
#include<iostream>
using namespace std;

Arr::Arr(int count){
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++){
		m_pArr[i] = i;
	}
	cout << "默认构造函数" << endl;
};
Arr::Arr(const Arr &arr){
	m_iCount = arr.m_iCount;
	m_pArr = new int[m_iCount];
	//m_pArr = arr.m_pArr;
	//cout << "浅拷贝" << endl;
	for (int i = 0; i < m_iCount; i++){
		m_pArr[i] = arr.m_pArr[i];
	}
	cout << "深拷贝" << endl;
};
Arr::~Arr(){
	delete []m_pArr;
	m_pArr = NULL; 
	cout << "析构函数" << endl;
};

void Arr::setCount(int count){
	m_iCount = count;
};
int Arr::getCount(){
	return m_iCount;
};
void Arr::getAddress(){
	cout << m_pArr << endl;
}
void Arr::printArr(){
	for (int i = 0; i < m_iCount; i++){
		cout << m_pArr[i] << endl;
	}
}

int main(){
	Arr arr1(5);
	Arr arr2(arr1);
	arr1.getAddress();
	arr2.getAddress();
	arr1.printArr();
	arr2.printArr();
	return 0;
}