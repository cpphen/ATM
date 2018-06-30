#pragma once

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "customer.h"

class Account {
private:
	float balance;
	Customer cust;

public:
	Account();
	Account(Customer&, float);
	virtual void makeDeposit(double);
	virtual bool makeWithdrawal(double);
	float getBalance();
	void view();
	void calcSavingsBalance(double);
	void calcCheckingBalance(int);
	virtual void adjustBalance() = 0;
};
#endif