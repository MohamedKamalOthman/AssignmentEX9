#pragma once
#include "BankAccount.h"
#include <iostream>
using namespace std;	
class Bank
{
private:
	char * name;
	BankAccount ** accounts;
	int num;
	int  lastID;
public:
	Bank(char * nm,int n);
	void setname(char * nm);
	char * getname();
	void OpenAccount( Customer * ,double balance);
	void CloseAccount(int );
	int CountAccountsGreater(double bal);
	void PrintInfo();
	~Bank(void);
};

