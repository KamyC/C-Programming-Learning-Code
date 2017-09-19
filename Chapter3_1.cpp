#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

string rectangle(int a, int b, int c){
	if (a*a + b*b == c*c){
		return "True";
	}
	else if (a*a + c*c == b*b){
		return "True";
	}
	else if (c*c + b*b == a*a){
		return "True";
	}
	else{
		return "False";
	}
}
int main(){
	int a, b, c;
	cin >>a>>b>>c;
	if (a < 1 || b < 1 || c < 1 || a>10000 || b>10000 || c>10000){
		return false;
	}
	else
	{
		cout << rectangle(a,b,c) << endl;
	}
	return 0;
}