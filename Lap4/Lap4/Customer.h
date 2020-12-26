#pragma once
class Customer
{
private:
	int SSN;
	char name[100];

public:
	Customer();
	void Readinfo();
	void Printinfo() const;
	~Customer(void);
};

