#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct Student{
	int id;
	float gpa;
};

template<class T>
class Store{
private:
	T item;
	bool haveValue;
public:
	Store();
	T& getElement();
	void putElement(const T &x);
};
template<class T>
Store<T>::Store() :haveValue(false){};

template<class T>
T& Store<T>::getElement(){
	if (!haveValue){
		cout << "No item presented" << endl;
		exit(1);
	}
	return item;
}
template<class T>
void Store<T>::putElement(const T&x){
	haveValue = true;
	item = x;
}

int main(){
	Store<int> s1, s2;
	s1.putElement(3);
	s2.putElement(7);
	cout << s1.getElement() << " " << s2.getElement() << endl;
	Student a = { 1000, 23 };
	Store<Student> s3;
	s3.putElement(a); //a is an object which is stored into s3.
	cout << "student id is " << s3.getElement().id << endl;
	return 0;
}