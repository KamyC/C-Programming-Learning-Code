#include"5_Object Member Pointer.h";
#include<iostream>
using namespace std;

Coordinate::Coordinate(int x, int y) :m_iX(x), m_iY(y){
	cout << "Ĭ�Ϲ��캯����ʼ���б�..." << endl;
}

Coordinate::~Coordinate(){
	cout << "��������" << endl;
}
int Coordinate::getX(){
	return m_iX;
};
int Coordinate::getY(){
	return m_iY; 
}

Line::Line(int x1, int y1, int x2, int y2)
{	
	m_pCoordA = new Coordinate(x1, y1);
	m_pCoordB = new Coordinate(x2, y2);
	cout << "��ʼ��Line..." << endl;
};
Line::~Line(){
	delete m_pCoordA;
	delete m_pCoordB;
	m_pCoordA = NULL;
	m_pCoordB = NULL;
	cout << "��������Line..." << endl;
};

void Line::printInfo(){
	cout << m_pCoordA->getX() << "," << m_pCoordA->getY() << endl;
	cout << m_pCoordB->getX() << "," << m_pCoordB->getY() << endl;
}

int main(){
	Line *p = new Line(1, 2, 3, 4);
	p->printInfo();
	cout << sizeof(p) << endl;
	delete p;
	p = NULL;

	return 0;
}