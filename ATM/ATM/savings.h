#pragma once

#ifndef SAVINGS_H
#define SAVINGS_H
#include "account.h"

const int REWARD = 100;

class Savings : public Account
{
protected:
	float interestRate; //Monthly Interest Rate
public:
	Savings();
	Savings(Customer &, double, double);
	virtual void makeDeposit(double);
	virtual bool makeWithdrawal(double);
	virtual void adjustBalance();
	virtual void view();
};
#endif