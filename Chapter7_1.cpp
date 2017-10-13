#include <iostream>
#include <string>
using namespace std;

class Account
{

	string userName;
public:
	Account(){};
	Account(string name);
	void  PrintUserName(){ cout << userName << endl; }
};

class CreditAccount : public Account
{
public:
	CreditAccount(string name, long number);
	void PrintInfo();
private:
	int credit;
};

Account::Account(string name) :userName(name){};
CreditAccount::CreditAccount(string name, long number) :Account(name), credit(number){};

void CreditAccount::PrintInfo(){
	PrintUserName();
	cout <<credit << endl; 
}

int main()
{
	CreditAccount a("I Love CPP", 10000);
	a.PrintInfo();
	return 0;
}