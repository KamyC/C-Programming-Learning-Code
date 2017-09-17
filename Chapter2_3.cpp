#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	int n = m - 1;
	for (int i = 0; i <= n; i++)
	{
		for (int a = 1; a <= n - i; a++)
			cout << " ";
		for (int b = 1; b<= 2 * i + 1; b++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i <= n - 1; i++){
		for (int a = 0; a <= i; a++)
			cout << " ";
		for (int b = 0; b <= 2*(n-i-1); b++)
			cout << "*";
		cout << endl;
	}
	return 0;
}