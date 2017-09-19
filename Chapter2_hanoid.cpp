#include<iostream>
#include<stdlib.h>
using namespace std;
void move(char origin, char dest){
	cout << origin << "---->" << dest << endl;
}
int a = 0;
void hanoid(int n, char origin, char temp, char dest){
	if (n == 1){
		move(origin, dest);
	}
	else{
		hanoid(n - 1, origin, dest, temp);
		move(origin, dest);
		hanoid(n - 1, temp,origin, dest);
	}
	a++;

}

int main(){
	int n = 10;
	hanoid(n, 'A', 'B', 'C');
	cout << a << endl;
	return 0;
}