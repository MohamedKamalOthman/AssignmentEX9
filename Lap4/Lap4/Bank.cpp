#include "Bank.h"


Bank:: Bank(char * nm,int n)
{
	if(n>0)
		accounts =new  BankAccount *[n];
	lastID=-1;
	setname(nm);
	cout<<"Bank is Constructed\n";
}
void Bank::setname(char * nm)
{
	name= new char [strlen(nm)+1];
	strcpy(name,nm);
}
char * Bank::getname()
{
	return name;
}
void Bank::OpenAccount(Customer * c,double balance)
{
	lastID++;
	accounts[lastID]=new BankAccount (lastID+1,c,balance);
	
}
void Bank::CloseAccount(int id)
{
	BankAccount *temp;
	for (int i=0;i<=lastID;i++)

	{
		if((accounts[i]->getID()==id))
		{
			temp=accounts[lastID];
			accounts[lastID]=accounts[i];
			accounts[i]=temp;
			delete accounts[lastID];
			lastID--;
			break;
		}
		

	}

}
int Bank::CountAccountsGreater(double bal)
{
	int count =0;
	for(int i =0 ; i<=lastID; i++ )
	{
		if (accounts[i]->getbalance()>bal)
			count++;
	}
	return count ;
}
void Bank::PrintInfo()
{
	cout<<"\nBank name is -"<<name<<"- Number of open accounts is"<<lastID<<endl;		 
	for(int i =0 ; i<=lastID; i++ )
		accounts[i]->Printinfo();

		
}
Bank::~Bank(void)
{
	for(int i =0 ; i<=lastID; i++ )
	{
		delete accounts[i];
	}
	delete [] accounts; 
	cout<<"Bank is Destructed\n";
}