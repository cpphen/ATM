#include "savings.h"
#include <iostream>
using namespace std;

Savings::Savings() : Account()
{
	interestRate = 0;
}
Savings::Savings(Customer & c, double userStartBal, double userInterest) : Account(c, userStartBal)
{
	interestRate = userInterest;

}
void Savings::makeDeposit(double userDepAmnt)
{
	if (userDepAmnt >= 10000)
	{
		userDepAmnt = userDepAmnt + REWARD;
		Account::makeDeposit(userDepAmnt);
	}
	else
		Account::makeDeposit(userDepAmnt);
}
bool Savings::makeWithdrawal(double userWithdraw)
{
	if (Account::getBalance() - userWithdraw < 0)
		return false;
	else
	{
		Account::makeWithdrawal(userWithdraw);
		return true;
	}
}
void Savings::adjustBalance()
{
	double InterestTotal;
	InterestTotal = Account::getBalance() * interestRate;
	Account::calcSavingsBalance(InterestTotal);
}
void Savings::view()
{
	cout << "Savings Account: \n";
	Account::view();
}