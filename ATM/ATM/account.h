#pragma once

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "customer.h";

class Account {
private:
	float balance;
	Customer cust;

public:
	Account();
	Account(Customer&, float);
	void makeDeposit(float);
	bool makeWithdrawal(float);
	float getBalance();
	void view();
	void adjustBalance();
};
#endif