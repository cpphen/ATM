#pragma once

#ifndef CHECKING_H
#define CHECKING_H
#include "account.h"

const int SERVICE = 10;
class Checking : public Account {
protected:
	bool overdraftProtection;
public:
	Checking();
	Checking(Customer&, double, bool);
	virtual void makeDeposit(double);
	virtual bool makeWithdrawal(double);
	virtual void adjustBalance();
	virtual void view();
};
#endif