#include <iostream>
#include <cmath>
using namespace std;

class Equation{
private:
	int _a, _b, _c;
public:
	Equation(int a, int b, int c){
		_a = a;
		_b = b;
		_c = c;
	}
	void solve(){
		double delta = _b*_b - 4.0 * _a*_c;
		if (_a!= 0.0 && delta> 0.0){
			cout << "1" << endl;
			double root_1 = (-_b + pow(delta, 0.5)) / (2 * _a);
			double root_2 = (-_b - pow(delta, 0.5)) / (2*_a);
			double max, min = 0;
			if (root_1 > root_2){
				max = root_1;
				min = root_2;
			}
			else {
				max = root_2;
				min = root_1;
			}
			printf("%.2f %.2f",min,max);
			return;
		}
		else if (_a != 0.0 && delta == 0.0){
			cout << "2" << endl;
			double root_equal = -_b/_a/2;
			printf("%.2f", root_equal);
			return;
		}
		else if (_a != 0.0 && delta < 0.0){
			cout << "3" << endl;
			return;
		}
		else if (_a == 0.0 && _b == 0.0&&_c!=0.0){
			cout << "4" << endl;
			return;
		}
		else if (_a == 0.0 && _c == 0.0&&_b==0.0){
			cout << "5" << endl;
			return;
		}
		else if (_a == 0.0 && _b != 0.0 && _c != 0.0){
			cout << "6" << endl;
			double root_single = -_c / _b;
			printf("%.2f", root_single);
			return;
		}
	}
};
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	Equation tmp(a, b, c);
	tmp.solve();
}

