#include"17_String.h"
#include<iostream>
#include<malloc.h>
#include<string>
using namespace std;
//compare two string (S and T) and return the index of S where T exactly matches with part of S. 
int main(){
	string S("goodgoogle");
	string T("google");
	cout << index(S, T) << endl;
	return 0;
}