#include<iostream>
#include"Bank.h"
using namespace std;

int main ()
{
	Customer C1;
	Customer C2;
	Customer C3;

	Bank B1("Al Ahly",10) ;//10 is not an exact number
	B1.OpenAccount(&C1,5000);
	B1.OpenAccount(&C2,8000);
	B1.OpenAccount(&C3,12000);
	B1.PrintInfo();
	cout<<"Accounts Greater than (6000) is   "<<B1.CountAccountsGreater(6000)<<endl;
	B1.CloseAccount(2);
	B1.PrintInfo();
	B1.CloseAccount(3);
	B1.PrintInfo();

return 0;
}