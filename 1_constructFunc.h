#include<string>
#include<iostream>
using namespace std;
class Teacher {
public:
	//Teacher();//默认构造函数
	//Teacher(string _name,int _age=20);
	//Teacher(string _name = "Kamy", int _age = 26, int x = 100);
	Teacher(string _name = "Kamy", int _age = 26);
	Teacher(const Teacher &);//拷贝构造函数
	~Teacher();
	void setName(string _name);
	void setAge(int _age);
	string getName();
	int getAge();
	/*int getMax();*/
private:
	string m_strName;
	int m_intAge;
	/*const int m_Max;*/
};