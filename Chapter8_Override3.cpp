#include <iostream>
using namespace std;

class complex{
public:
	complex(double r = 0.0, double i = 0.0) :real(r), imag(i){};
	friend complex operator+(const complex &c1, const complex &c2);
	friend complex operator-(const complex &c1, const complex &c2);
	friend ostream &operator<<(ostream &out, const complex &c);
private:
	double real, imag;

};
complex operator+(const complex &c1, const complex &c2){
	return complex(c1.real + c2.real, c1.imag + c2.imag);
}
complex operator-(const complex &c1, const complex &c2){
	return complex(c1.real - c2.real, c1.imag - c2.imag);
}
ostream &operator<<(ostream &out, const complex &c){
	out << "(" << c.real << ", " << c.imag << ")";
	return out;
}
int main(){
	complex c1(1, 2);
	complex c2(3, 4);
	complex c3;
	c3 = c1 + c2;
	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;
	c3 = c1 - c2;
	cout << c3 << endl;
}