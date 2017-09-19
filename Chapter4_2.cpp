#include <iostream>
#include<stdio.h>

using namespace std;

class Integer{
private:
	int _num;
	//getLength()函数获取_num长度
	int getLength(){
		int n = 0;
		int temp = _num;
		while (temp>0){
			n++;
			temp = temp/10;
		}
	}
public:
	//Integer类构造函数
	Integer(int num){
		_num = num;
	}
	//反转_num
	int inversed(){
		int inverse = 0;
		int temp = _num;
		while (temp > 0){
			inverse = inverse * 10 + temp % 10;
			temp = temp / 10;
		}
		return inverse;
	}
};

int main() {
	int n;
	cin >> n;
	if (n < 1 || n>1000000000){
		return false;
	}
	else{
		Integer integer(n);
		cout << integer.inversed() << endl;
	}
	
	return 0;
}