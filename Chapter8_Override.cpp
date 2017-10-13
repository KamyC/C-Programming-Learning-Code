//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//class complex{
//public:
//	complex(double r = 0.0, double i = 0.0) :real(r), imag(i){};
//	complex operator + (const complex  &c2) const;
//	complex operator -(const complex &c2) const;
//	void display(){ cout << "(" << real << ", " << imag << ")" << endl; }
//private:
//	double real;
//	double imag;
//};
//complex complex::operator + (const complex  &c2) const{
//	return complex(real + c2.real, imag + c2.imag);
//}
//complex complex::operator-(const complex &c2)const{
//	return complex(real - c2.real, imag - c2.imag);
//}
//int main() {
//	complex c1(5,4);
//	complex c2(2, 10);
//	complex c3;
//	c3 = c1 + c2;
//	c3.display();
//	c3 = c1 - c2;
//	c3.display();
//	return 0;
//}
