/*
Henry Lee
CSIT 840
*/

#include "checkings.h"
#include <iostream>
using namespace std;

Checking::Checking() : Account() //CHECK TO SEE IF THIS IS HOW ITS CALLED, THE ZERO ARGUMENT CONSTRUCTOR
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
	/*else if (Account::getBalance() - userWithdraw < 0 && overdraftProtection == true)
	{
	Account::makeWithdrawal(userWithdraw);
	return true;
	}*/
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