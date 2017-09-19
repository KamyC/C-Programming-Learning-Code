#include<iostream>
#include<stdlib.h>
using namespace std;

int com(int n, int k){
	if (k>n){
		return 0;
	}
	else if (n == k || k == 0){
		return 1;
	}
	else{
		return com(n - 1, k) + com(n - 1, k - 1);
	}
}

int main(){
	cout << com(9,5) << endl;
	return 0;
}