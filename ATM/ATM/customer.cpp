#include "stdafx.h"

#include <iostream>
#include<string>
using namespace std;
#include "customer.h"

Customer::Customer()
{
	accountID = " ";
	name = " ";

}
Customer::Customer(string userName, string userID)
{
	accountID = userID;
	name = userName;
}

Customer Customer::operator = (const Customer& c)
{
	this->name = c.name; 
	this->accountID = c.accountID; 

	return *this;
}
void Customer::view()
{
	cout << "Name: " << name << endl;
	cout << "Account #: " << accountID << endl; 
}