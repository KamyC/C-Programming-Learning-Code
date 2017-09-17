#include<iostream>
using namespace std;

int main(){
	int n;
	int sum = 0;
	int	temp;
	cout << "enter the number (<=100) of input integers : " ;
	cin >> n;
	while (n > 100){
		cout << "enter the number (<=100) of input integers : ";
		cin >> n;
	}
	if(n<=100){
		cout << "enter the number: ";
		cin >> temp;
		int max = temp;
		int min = temp;
		sum += temp;
		for (int i = 0; i < n-1; i++){
			cout << "enter the number: ";
			cin >> temp;
			sum += temp;
			if (max <= temp){
				max = temp;
			}
			if (min >= temp){
				min = temp;
			}
		}
		cout << "the sum, min and max are:" << sum<<' '<<min<<' '<<max << endl;
	}
	return 0;
}
	