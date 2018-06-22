#include "account.h"
#include <iostream>
using namespace std;


Account::Account()// : cust()
{
	balance = 0;
	Customer();

}
Account::Account(Customer& c, float userStartBal)
{
	balance = userStartBal;
	cust = c;  //This is the call to the overloaded assignment operator, just like in previoes assignment where we had Date3 and Date4 created and then had Date4 = date3 =date2, date3 is calling the overloaded operator function and date2 is the parameter. In this program, cust is the caller and c the parameter.
			   //member variable = parameter
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