#include <iostream>
using namespace std;

class Yuebao
{
	static double profitRate;
public:
	double _balance;

	Yuebao(int n){
		_balance = n;
	}
	static void setProfitRate(double rate){
		profitRate = rate;
	};
	void deposit(double amount){
		_balance+=amount;
	}
	void addProfit(){
		_balance = _balance + _balance*profitRate;
	}
	void withdraw(double amount){
		_balance = _balance - amount;
	}
	double getBalance(){
		return _balance;
	}
};

double Yuebao::profitRate = 0;//initialize the static data;

int main()
{
	int n;
	while (cin >> n)
	{
		double profitRate;
		cin >> profitRate;
		Yuebao::setProfitRate(profitRate);//�趨��������
		Yuebao y(0); //�½����˻�������ʼ��Ϊ0
		int operation;//���������ж��Ǵ滹��ȡ
		double amount;//���������ȡ���
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//����ǰһ������������Ϣ
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//������
			else
				y.withdraw(amount);//ȡ�����
		}
		cout << y.getBalance() << endl;//��������˻����
	}
	return 0;
}