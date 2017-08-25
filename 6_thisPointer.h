

class Arr{
public:
	Arr(int len);
	~Arr();
	void setLen(int len);
	int getLen();
	Arr& printInfo();
private:
	int len;
};