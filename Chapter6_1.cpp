#include<iostream>
#include<stdlib.h>
using namespace std;
 
int maxSub(int *arr, int n){
	int max = 0;
	int temp = 0;
	for (int i = 0; i < n; i++){
		temp += arr[i];
		if (temp > max){
			max = temp;
		}
		else if (temp < 0){
			temp = 0;
		}
	}
	return max;
}


int main(){
	int n;
	cin >> n; 
	int *p = new int[n];
	int max = 0;
	int temp = 0;
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		p[i] = temp;
	}
	cout << maxSub(p, n) << endl;
	return 0;
}