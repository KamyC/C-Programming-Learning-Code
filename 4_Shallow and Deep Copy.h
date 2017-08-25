using namespace std;
class Arr{
public:
	Arr(int count);
	~Arr();
	Arr(const Arr &arr);
	void setCount(int count);
	int getCount();
	void getAddress();
	void printArr();
private:
	int m_iCount;
	int* m_pArr;
};