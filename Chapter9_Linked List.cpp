#include<iostream>
#include<stdlib.h>
using namespace std;

template<class T>
class Node{
private:
	Node<T>* next;
public:
	T data;
	Node(const T&data,Node<T>*next=0);
	void insertAfter(Node<T>*p);
	Node<T>*deleteAfter();
	Node<T>*nextNode();
	const Node<T>*nextNode()const;
};

template<class T>
Node<T>::Node(const T&data, Node<T>*next = 0):data(data),next(next){}

template<class T>
Node<T>*Node<T>::nextNode(){
	return next;
}
template<class T>
void Node<T>::insertAfter(Node<T>*p){
	p->next = next;
	next = p;
}
template<class T>
Node<T> *Node<T>::deleteAfter(){
	Node<T> *temp = next;
	if (next == 0){
		return 0;
	}
	next = temp->next;
	return temp;
}


int main(){
	Node<int> a(10,0);
	Node<int> b(20, 0);
	a.insertAfter(&b);
	if (a.nextNode() == &b){
		cout << "TRUE" << endl;
	}
	else{
		cout << "FALSE" << endl;
	}
	return 0;

}