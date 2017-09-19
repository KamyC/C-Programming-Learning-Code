#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

double arctan(double n){
	double val = 0;
	double max = pow(10, -15);
	double i = 1.0;
	double j = 1.0;
	double temp = n;
	while (temp / i >= max){
		val += pow(-1, j - 1)*(1 / i)*pow(n, i);
		i += 2;
		j++;
		temp *= pow(n,2);
	}
	return val;
}
int main(){
	double a = 16.0 * arctan(1 / 5.0);
	double b = 4.0*arctan(1 / 239.0);
	cout << a-b << endl;
	return 0;
}