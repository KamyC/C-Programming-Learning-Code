#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
double factorial(int i){
	double r = 1.0;
	for (int j = 1; j <= i; j++){
		r *= j;
	}
	return r;
}
double sin(double n){
	double val = 0;
	double max = pow(10, -10);
	double i = 1.0;
	double j = 1.0;
	double temp = n;
	double fac = i;
	do{
		fac = factorial(i);
		val += pow(-1, j - 1)*(1 / fac)*pow(n, i);
		i += 2;
		j++;
		temp *= pow(n, 2);
	} while (temp / fac >= max);
	return val;
}

int main(){
	double r;
	cin >> r;
	double s;
	cin >> s;
	double val = 0;
	if (r*r <= s*s){
		val = sqrt(sin(r)*sin(r) + sin(s)*sin(s));
	}
	else{
		val = sin(r*s) / 2;
	}
	return 0;
}