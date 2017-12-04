#ifndef HEADER_SAVINGS
#define HEADER_SAVINGS
#include"Account.h"
#include<string>
class Savings:public Account{
public:
	Savings(std::string anctNo,double balan=0.0);
	void display()const;
	void withdrawal(double amount);
};
#endif
