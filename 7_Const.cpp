#include"7_Const.h"
#include<iostream>
using namespace std;
Coordinate::Coordinate(int x, int y) :m_iX(x), m_iY(y)
{
	cout << "Coord构造函数" << m_iX <<","<< m_iY << endl;
}
Coordinate::~Coordinate(){
	cout << "Coord析构函数" << m_iX <<","<< m_iY << endl;
}
void Coordinate::setX(int x){
	m_iX = x;
}
void Coordinate::setY(int y){
	m_iY = y;
}
int Coordinate::getX() const
{
	return m_iX;
}
int Coordinate::getY() const
{
	return m_iY;
}

Line::Line(int x1, int y1, int x2, int y2) :m_coorA(x1, y1),m_coorB(x2,y2)
{
	cout << "Line的构造函数" << endl;
};
Line::~Line(){
	cout << "Line的析构函数" << endl;
};
void Line::setA(int x, int y){
	/*m_coorA.setX(x);
	m_coorA.setY(y);*/
};
void Line::setB(int x, int y){
	/*m_coorA.setX(x);
	m_coorA.setY(y);*/
};
void Line::printInfo(){
	cout << "printinfo()" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};
void Line::printInfo() const{
	cout << "printinfo() const" << endl;
	cout << "(" << m_coorA.getX() << "," << m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
};
int main(){
	Line l1(1, 2, 3, 4);
	l1.printInfo();
	const Line l2(5, 6, 7, 8);
	l2.printInfo();
	return 0;
}