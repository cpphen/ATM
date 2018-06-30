#include "stdafx.h"
#include "account.h"
#include <iostream>
using namespace std;


/*Account::Account()
{
	balance = 0;
	Customer();

}*/

//Constructor Initialization List
Account::Account() : balance(0) {
	Customer();
}
Account::Account(Customer& c, float userStartBal)
{
	balance = userStartBal;
	cust = c; 
}
void Account::makeDeposit(double userDepAmnt)
{

	balance += userDepAmnt;

}
bool Account::makeWithdrawal(double userWithdraw)
{
	balance -= userWithdraw;
	return true;
}
float Account::getBalance()
{
	return balance;
}
void Account::view()
{
	cust.view();
	cout << "Balance: $" << " " << balance << endl; //the balance is output here since the Customer class does not have access to the balance member variable in this Account class. So after the account class calls the customer view() (cust.view()), it returns back here to display balance.
}
void Account::calcSavingsBalance(double InterestTotal)
{
	balance += InterestTotal;
}
void Account::calcCheckingBalance(int num)
{
	balance = num;
}