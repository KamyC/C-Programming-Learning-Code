#include <iostream>
using namespace std;

class Integer {
private:
	int _num;
public:
	Integer(int num){
		_num = num;
	};
	int gcd(Integer b){
		int x = _num;
		int y = b._num;
		int n =x;
		if (x == y){
			return y;
		}
		int com = 1;
		for (int i = 1; i <= n; i++){
			if (x%i == 0 && y%i == 0 && i>1){
				com=i;
			}
		}
		return com;
		
	};
};

//Integer::Integer(int num){
//	_num = num;
//}
//int Integer::gcd(Integer B){
//
//	int x = _num;
//	int y = B._num;
//	int max = x + y;
//	if (x == y){
//		return y;
//	}
//
//	for (int i = 2; i < max; i++){
//		if (x%i == 0 && y%i == 0){
//			return i;
//		}
//	}
//}

int main(){
	int a, b;
	cin >> a >> b;
	if (a < 1 || b < 1 || a>10000 || b>10000){
		return false;
	}
	else{
		Integer A(a);
		Integer B(b);
		cout << A.gcd(B) << endl;
	}
	return 0;
}