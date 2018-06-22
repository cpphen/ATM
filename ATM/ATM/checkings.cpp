#include "checkings.h"
#include <iostream>
using namespace std;

Checking::Checking() : Account()
{

	overdraftProtection = false;
}

Checking::Checking(Customer& c, double userStartBal, bool userOverdraftOk) : Account(c, userStartBal)
{
	overdraftProtection = userOverdraftOk;

}
void Checking::makeDeposit(double userDepAmnt)
{
	Account::makeDeposit(userDepAmnt);
}
bool Checking::makeWithdrawal(double userWithdraw)
{
	if (Account::getBalance() - userWithdraw < 0 && overdraftProtection != true)
		return false;
	else
	{
		Account::makeWithdrawal(userWithdraw);
		return true;
	}

}
void Checking::adjustBalance()
{
	int num;
	if (Account::getBalance() < 1000)
	{
		num = Account::getBalance() - (SERVICE);
		Account::calcCheckingBalance(num);
	}
}
void Checking::view()
{
	cout << "Checking Account: \n";
	Account::view();
}