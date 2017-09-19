#include<iostream>
#include<stdlib.h>
using namespace std;

int power(int a, int b){
	int val = 1;
	while (b > 0){
		val = val*a;
		b--;
	}
	return val;
}
int main(){//the flaw of this algorithm is that you can only type into one binary number after pressing each Enter;
	int value = 0;
	for (int i = 7; i>=0; i--){
		char c;
		cin >> c;
		if (c == '1'){
			value += power(2, i);
		}
	}
	cout << value << endl;
	return 0;
}