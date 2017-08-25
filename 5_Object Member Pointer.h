class Coordinate{
public:
	Coordinate(int x, int y);
	~Coordinate();
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};

class Line{
public:
	Line(int x1, int y1, int x2, int y2);
	~Line();
	void printInfo();
private:
	Coordinate *m_pCoordA;
	Coordinate *m_pCoordB;
};