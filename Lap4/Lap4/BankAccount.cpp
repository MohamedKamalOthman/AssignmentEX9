#include "BankAccount.h"
#include "Customer.h"
#include <iostream>
using namespace std;	

BankAccount::BankAccount(int id , Customer * cr, double balance )
{
	if (id > 0) ID=id;
	SetBalance(balance);
	customer=cr;
}

void BankAccount::SetBalance(double balance)
{
	if (balance>0)
		Balance=balance;
}
int BankAccount::getID()
{
	return ID;
}
double BankAccount::getbalance()
{
	return Balance;
}
void BankAccount::Printinfo()
{
	customer->Printinfo(); 
	cout<<"ID is "<<ID<<" Balance is  "<<Balance<<endl;
}

BankAccount::~BankAccount(void)
{
	cout<<" BankAccount is closed.\n";
}
