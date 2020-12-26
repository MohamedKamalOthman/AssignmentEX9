#pragma once
#include "Customer.h"
class BankAccount
{
private:
	int ID ;
	Customer * customer;
	double Balance ;

public:
	
	BankAccount(int , Customer * , double );
	void SetBalance(double );
	void Printinfo();
	int getID();
	double getbalance();
	
	~BankAccount(void);

};

