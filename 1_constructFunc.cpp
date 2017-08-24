#include"1_constructFunc.h"
#include<iostream>

//Teacher::Teacher(){
//	m_strName = "Jim";
//	m_intAge = 10;
//	cout << "Teacher()" << endl;
//}
//Teacher::Teacher(string _name, int _age){
//	m_strName = _name;
//	m_intAge = _age;
//	cout << "Teacher(string _name,int _age)" << endl;
//}

//Teacher::Teacher(string _name, int _age,int m) :m_strName(_name), m_intAge(_age), m_Max(m)
//{
//	cout << "intializing..." << endl;
//};
Teacher::Teacher(string _name, int _age) :m_strName(_name), m_intAge(_age){
	cout << "构造函数" << endl;
}

Teacher::Teacher(const Teacher &){
	cout << "拷贝构造函数" << endl;
}

Teacher::~Teacher(){
	cout << "析构函数" << endl;
}

void Teacher::setName(string _name){
	m_strName = _name;
};
string Teacher::getName(){
	return m_strName;
};
void Teacher::setAge(int _age){
	m_intAge = _age;
};
int Teacher::getAge(){
	return m_intAge;
};
//int Teacher::getMax(){
//	return m_Max;
//}
void test(Teacher xx){
}
//
//int main(){
//
//	//Teacher t1;	
//	//Teacher t2("Tom", 50);
//	//Teacher t3("James");
//	//cout << t1.getName()<< t1.getAge() << endl;
//	//cout << t2.getName()<< t2.getAge() << endl;
//	//cout << t3.getName() << t3.getAge() << endl;
//	//Teacher t1("AAA",20);
//	//cout << t1.getName() << t1.getAge() <<t1.getMax()<< endl;
//	Teacher t1;
//	/*Teacher t2 = t1;
//	Teacher t3(t1);*/
//	//test(t1);//会触发拷贝过程，从而触发调用拷贝构造函数~
//	Teacher t2(t1);
//	system("pause");
//	return 0;
//}