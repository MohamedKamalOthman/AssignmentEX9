#include "Customer.h"
#include <iostream>
using namespace std;	
Customer::Customer()                                            //this should be zero argument (DONE)
{
	Readinfo();
	//we should call read info but for testing i will make a non zero constructor (DONE)
	/*	strcpy(name,nm);
		if (ssn>=1000000&&ssn<=9999999)
		SSN=ssn;*/
	cout<<"Customer Constructor is called\n";
}
void Customer::Readinfo()
{
	int ssn; char nm[100];
	cin>>nm;
	strcpy(name,nm);
	cin>>ssn;
	if (ssn>=1000000&&ssn<=9999999)
		SSN=ssn;
}

void Customer::Printinfo() const
{
	cout<<"SSN is "<<SSN<<" Name is  "<<name<<endl;
}

Customer::~Customer(void)
{
	cout<<"Customer Destructor is Called\n";
}
