#include<iostream>
#include<stdlib.h>
#include <iomanip>
#include"Chapter9_Array Template.h"

using namespace std;

void read(int*p, int n){
	for (int i = 0; i < n; i++){
		std::cin >>p[i];
	}
}

int main(){
	Array<int> a(10);
	int n, count = 0;
	cout << "Enter a value >= 2 as upper limit for prime numbers: ";
	cin >> n;

	for (int i = 2; i <= n; i++) { //检查i是否能被比它小的质数整除
		bool isPrime = true;
		for (int j = 0; j < count; j++)
			//若i被a[j]整除，说明i不是质数
			if (i % a[j] == 0) {
			isPrime = false; break;
			}
		if (isPrime) {
			if (count == a.getSize())
				a.resize(count * 2);
			a[count++] = i;
		}
	}
	for (int i = 0; i < count; i++)
		cout << setw(8) << a[i];
	cout << endl;
	return 0;
}