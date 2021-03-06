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
		Yuebao::setProfitRate(profitRate);//设定鱼额宝的利率
		Yuebao y(0); //新建鱼额宝账户，余额初始化为0
		int operation;//接受输入判断是存还是取
		double amount;//接受输入存取金额
		for (int i = 0; i < n; ++i)
		{
			y.addProfit();//加入前一天余额产生的利息
			cin >> operation >> amount;
			if (operation == 0)
				y.deposit(amount);//存入金额
			else
				y.withdraw(amount);//取出金额
		}
		cout << y.getBalance() << endl;//输出最终账户余额
	}
	return 0;
}