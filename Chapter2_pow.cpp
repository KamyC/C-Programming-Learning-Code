#include<iostream>
#include<stdlib.h>
using namespace std;

double power(double a, int b){
	double val = 1.0;
	while (b > 0){
		val = val*a;
		b--;
	}
	return val;
}
int main(){
	int m = 2;
	int n = 10;
	cout << power(m, n) << endl;
	return 0;
	
}