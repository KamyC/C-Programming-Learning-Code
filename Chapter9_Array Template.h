#ifndef ARRAY_H
#define ARRAY_H
#include<cassert>

template<class T>
class Array{
private:
	T* list;
	int size;
public:
	Array(int sz = 50);     //构造函数
	Array(const Array<T> &a);   //复制构造函数
	~Array();           //析构函数
	Array<T> & operator = (const Array<T> &rhs);    //重载"=“
	T & operator [] (int i); //重载"[]”
	const T & operator [] (int i) const;     //重载"[]”常函数
	operator T * ();        //重载到T*类型的转换
	operator const T * () const;
	int getSize() const;        //取数组的大小
	void resize(int sz);        //修改数组的大小
};
template<class T>Array<T>::Array(int sz){
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

template<class T>Array<T>::Array(const Array<T> &a){
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++){
		list[i] = a.list[i];
	}
}

template<class T>Array<T>::~Array(){
	delete[]list;
}
template<class T>Array<T> &Array<T>::operator = (const Array<T>&rhs){
	if (&rhs != this){
		if (rhs.size != size){
			delete[] list;
			size = rhs.size;
			list = new T[size];
		}
		for (int i = 0; i < size; i++){
			list[i] = rhs.list[i];
		}
	}
	return *this;
}
template<class T>T &Array<T>::operator [](int n){
	assert(n>=0 && n < 2*size);
	return list[n];
}

template<class T>Array<T>::operator T *(){
	return list;
}

template<class T>
int Array<T>::getSize() const{
	return size;
}

template<class T>void Array<T>::resize(int sz){
	assert(sz >= 0);
	if (sz = size){
		return;
	}
	T* newList = new T[sz];
	int n = (sz < size) ? sz : size;
	for (int i = 0; i < size; i++){
		newList[i] = list[i];
	}
	delete[]list;
	list = newList;
	size = sz;
}
#endif // !ARRAY_H;
