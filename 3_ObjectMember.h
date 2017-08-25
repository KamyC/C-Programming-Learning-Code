#include<iostream>
#include<string>

class Coordinate{
public:
	Coordinate();
	Coordinate(int x, int y);
	~Coordinate();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
private:
	int m_iX;
	int m_iY;
};

class Line{
public:
	Line(int x1,int y1,int x2,int y2);
	~Line();
	void setA(int x, int y);
	void setB(int x, int y);
	void printInfo();
private:
	Coordinate m_coorA;
	Coordinate m_coorB;
};