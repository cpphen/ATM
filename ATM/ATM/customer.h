#pragma once

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "stdafx.h"

class Customer {
	private: 
		string accountID;
		string name;
	public:
		Customer();
		Customer(string, string);
		void view();
		Customer operator= (const Customer&);
};
#endif