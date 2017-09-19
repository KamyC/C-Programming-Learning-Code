#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

bool palindrome(unsigned test_Number){
	unsigned a = 0;
	unsigned temp = test_Number;
	int count = 0;
	while (temp>0){
		a = a * 10 + temp % 10;
		temp /= 10;
		count++;
	}
	cout << count << endl;
	return a==test_Number;
}

int main(){
	cout << palindrome(233) << endl;
	return 0;
}