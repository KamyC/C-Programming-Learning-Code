#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
string uglyNum(int n){
	if (n < 0||n==1){
		return "False";
	}
	while (n % 2 == 0){
		n = n / 2;
	}
	while (n % 3 == 0){
		n = n / 3;
	}
	while (n % 5 == 0){
		n = n / 5;
	}
	if (n == 3 || n == 5||n==1){
		return "True";
	}
	else{
		return "False";
	}
}
int main(){
	int n;
	cin >> n;
	if (n < 1 || n>1000000){
		return false;
	}
	else{
		cout << uglyNum(n) << endl;
	}
	return 0;
}